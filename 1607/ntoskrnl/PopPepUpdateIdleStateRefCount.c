/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x140130DD8
 * Callers:
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140130CB8 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1401317F0 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 *     PopPepPlatformStateRegistered @ 0x1402067F4 (PopPepPlatformStateRegistered.c)
 *     PopPepUnregisterDevice @ 0x14066F9A4 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopFxPlatformStateAvailable @ 0x140203054 (PopFxPlatformStateAvailable.c)
 */

__int64 __fastcall PopPepUpdateIdleStateRefCount(unsigned int a1, unsigned int a2, int a3)
{
  char v3; // bp
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v8; // edi
  unsigned int v9; // edi
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdx
  ULONG_PTR v13; // rbx
  int v14; // ett
  __int64 v15; // rdi
  ULONG_PTR v16; // rbx
  signed __int32 v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-158h]
  _DWORD v19[3]; // [rsp+24h] [rbp-154h] BYREF
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-148h]

  v3 = 0;
  result = a1 ^ a2;
  v5 = 0LL;
  CurrentIrql = 0;
  v8 = a1;
  if ( a3 )
    v8 = a2;
  v9 = result & v8;
  v10 = !_BitScanForward((unsigned int *)&v11, v9);
  v18 = v11;
  if ( v10 )
    return result;
  v12 = 2LL;
  do
  {
    v13 = PopPepPlatformState + 384 * v11;
    v9 &= v9 - 1;
    if ( a3 )
    {
      result = *(unsigned int *)(v13 + 320);
      if ( (int)result <= 0
        || (v14 = *(_DWORD *)(v13 + 320),
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v13 + 320),
                                     result + 1,
                                     result),
            v14 != (_DWORD)result) )
      {
        BugCheckParameter2[v5] = v13;
        v5 = (unsigned int)(v5 + 1);
      }
    }
    else
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 320));
      if ( (int)result < 0 )
        PopFxBugCheck(0x668uLL, v13, (int)result, v9);
      if ( !(_DWORD)result )
      {
        if ( !v3 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v3 = 1;
        }
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 320), -1, 0);
        if ( !(_DWORD)result )
        {
          LOBYTE(v12) = 1;
          PopFxPlatformStateAvailable(v18, v12);
          result = *(int *)(v13 + 320);
          if ( (_DWORD)result != -1 )
            PopFxBugCheck(0x669uLL, v13, *(int *)(v13 + 320), 0LL);
          *(_DWORD *)(v13 + 320) = 0;
          v12 = 2LL;
        }
      }
    }
    v10 = !_BitScanForward((unsigned int *)&v11, v9);
    v18 = v11;
  }
  while ( !v10 );
  if ( (_DWORD)v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    while ( 1 )
    {
      KeYieldProcessorEx(v19);
      v15 = 0LL;
      do
      {
        v16 = BugCheckParameter2[v15];
        v17 = *(_DWORD *)(v16 + 320);
        if ( v17 <= 0 )
        {
          if ( v17 || _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 320), -1, 0) )
          {
LABEL_23:
            v15 = (unsigned int)(v15 + 1);
            continue;
          }
          PopFxPlatformStateAvailable((__int64)(v16 - PopPepPlatformState) / 384, 0LL);
          if ( *(_DWORD *)(v16 + 320) != -1 )
            PopFxBugCheck(0x669uLL, v16, *(int *)(v16 + 320), 0LL);
          *(_DWORD *)(v16 + 320) = 1;
        }
        else if ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 320), v17 + 1, v17) )
        {
          goto LABEL_23;
        }
        v5 = (unsigned int)(v5 - 1);
        BugCheckParameter2[v15] = BugCheckParameter2[v5];
      }
      while ( (unsigned int)v15 < (unsigned int)v5 );
      if ( !(_DWORD)v5 )
      {
LABEL_36:
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
    }
  }
  if ( v3 )
    goto LABEL_36;
  return result;
}
