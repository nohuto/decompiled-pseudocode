/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x1401386E8
 * Callers:
 *     PopPepDeviceDState @ 0x140136CA4 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140138590 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x140139630 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepInitializeVetoMasks @ 0x14023BA2C (PopPepInitializeVetoMasks.c)
 *     PopPepPlatformStateRegistered @ 0x14023BFE0 (PopPepPlatformStateRegistered.c)
 *     PopPepUnregisterDevice @ 0x1406B72FC (PopPepUnregisterDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPepUpdateIdleStateRefCount(unsigned int a1, unsigned int a2, int a3)
{
  char v3; // r10
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v7; // r9d
  ULONG_PTR v8; // r9
  bool v9; // zf
  __int64 v10; // rcx
  ULONG_PTR v11; // rdx
  int v12; // ett
  unsigned int v13; // edi
  __int64 v14; // r8
  ULONG_PTR v15; // r10
  signed __int32 v16; // eax
  ULONG_PTR v17; // rax
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-128h]

  v3 = 0;
  result = a1 ^ a2;
  v5 = 0LL;
  CurrentIrql = 0;
  v7 = a1;
  if ( a3 )
    v7 = a2;
  LODWORD(v8) = result & v7;
  v9 = !_BitScanForward((unsigned int *)&v10, v8);
  if ( v9 )
    return result;
  do
  {
    v11 = PopPepPlatformState + 384 * v10;
    v8 = ((_DWORD)v8 - 1) & (unsigned int)v8;
    if ( a3 )
    {
      result = *(unsigned int *)(v11 + 320);
      if ( (int)result <= 0
        || (v12 = *(_DWORD *)(v11 + 320),
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v11 + 320),
                                     result + 1,
                                     result),
            v12 != (_DWORD)result) )
      {
        BugCheckParameter2[v5] = v11;
        v5 = (unsigned int)(v5 + 1);
      }
    }
    else
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 320));
      if ( (int)result < 0 )
        PopFxBugCheck(0x668uLL, v11, (int)result, v8);
      if ( !(_DWORD)result )
      {
        if ( !v3 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v3 = 1;
        }
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 320), -1, 0);
        if ( !(_DWORD)result )
        {
          result = *(int *)(v11 + 320);
          if ( (_DWORD)result != -1 )
            PopFxBugCheck(0x669uLL, v11, *(int *)(v11 + 320), 0LL);
          *(_DWORD *)(v11 + 320) = 0;
        }
      }
    }
    v9 = !_BitScanForward((unsigned int *)&v10, v8);
  }
  while ( !v9 );
  if ( (_DWORD)v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v13 = v10;
    while ( 1 )
    {
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
      v14 = 0LL;
      do
      {
        v15 = BugCheckParameter2[v14];
        v16 = *(_DWORD *)(v15 + 320);
        if ( v16 <= 0 )
        {
          if ( v16 || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 320), -1, 0) )
          {
LABEL_28:
            v14 = (unsigned int)(v14 + 1);
            continue;
          }
          v17 = *(int *)(v15 + 320);
          if ( (_DWORD)v17 != -1 )
            PopFxBugCheck(0x669uLL, v15, v17, 0LL);
          *(_DWORD *)(v15 + 320) = 1;
        }
        else if ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 320), v16 + 1, v16) )
        {
          goto LABEL_28;
        }
        v5 = (unsigned int)(v5 - 1);
        BugCheckParameter2[v14] = BugCheckParameter2[v5];
      }
      while ( (unsigned int)v14 < (unsigned int)v5 );
      if ( !(_DWORD)v5 )
      {
LABEL_39:
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
    }
  }
  if ( v3 )
    goto LABEL_39;
  return result;
}
