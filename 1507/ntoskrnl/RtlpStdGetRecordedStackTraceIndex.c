/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x140246024
 * Callers:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     RtlpStdExtendUpperWatermark @ 0x140245F04 (RtlpStdExtendUpperWatermark.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int16 v10; // ax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned __int8 v13; // si
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2[7];
  v5 = 0;
  if ( a2[7] )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = v5 % *(_DWORD *)(a1 + 720);
  v8 = a1 + 8 * (v7 + 2 * (v7 + 46));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 8 * (v7 + 2 * (v7 + 46))));
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 8 * (v7 + 2 * (v7 + 46))));
  }
  *(_BYTE *)(v8 + 8) = CurrentIrql;
  v10 = a2[6];
  if ( v10 || a2[5] )
  {
    LODWORD(v12) = v10 + (a2[5] << 16);
  }
  else
  {
    v11 = (_QWORD *)RtlpStdExtendUpperWatermark(a1, (void *)v7);
    if ( v11 )
    {
      *v11 = a2;
      v12 = (__int64)(*(_QWORD *)(a1 + 184) - (_QWORD)v11) >> 3;
      a2[6] = v12;
      a2[5] = WORD1(v12);
    }
    else
    {
      LODWORD(v12) = 0;
    }
  }
  v13 = *(_BYTE *)(v8 + 8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v8, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  __writecr8(v13);
  return (unsigned int)v12;
}
