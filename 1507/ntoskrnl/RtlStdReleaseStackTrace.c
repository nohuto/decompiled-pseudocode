/*
 * XREFs of RtlStdReleaseStackTrace @ 0x140245C88
 * Callers:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

PSLIST_ENTRY __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r14d
  unsigned int v4; // eax
  _DWORD *v7; // rdx
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int16 v11; // cx
  __int16 v12; // ax
  volatile signed __int32 *v13; // rax
  unsigned __int8 v14; // si
  PSLIST_ENTRY result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(unsigned __int16 *)(a2 + 14);
  v3 = 0;
  v4 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v4 += *v7;
      v7 += 2;
      --v2;
    }
    while ( v2 );
  }
  v8 = (volatile signed __int32 *)(a1 + 8 * (v4 % *(_DWORD *)(a1 + 720) + 2LL * (v4 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v8 + 2);
  }
  else if ( _interlockedbittestandset64(v9, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v8 + 2);
  }
  *((_BYTE *)v8 + 16) = CurrentIrql;
  v11 = *(_WORD *)(a2 + 8);
  if ( (v11 & 0x7FF) != 0x7FF )
  {
    v12 = v11 ^ (v11 ^ (v11 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v12;
    if ( (v12 & 0x7FF) == 0 )
    {
      if ( *(_QWORD *)v8 )
      {
        while ( 1 )
        {
          v13 = *(volatile signed __int32 **)v8;
          if ( *(_QWORD *)v8 == a2 )
            break;
          v8 = *(volatile signed __int32 **)v8;
          if ( !*(_QWORD *)v13 )
            goto LABEL_13;
        }
        *(_QWORD *)v8 = *(_QWORD *)a2;
      }
      else
      {
LABEL_13:
        __debugbreak();
      }
      v3 = 1;
    }
  }
  v14 = *((_BYTE *)v9 + 8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v9, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  result = (PSLIST_ENTRY)v14;
  __writecr8(v14);
  if ( v3 )
  {
    result = RtlpInterlockedPushEntrySList(
               (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
               (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
