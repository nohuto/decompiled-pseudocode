/*
 * XREFs of KeQueryCpuSetsThread @ 0x14020587C
 * Callers:
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 * Callees:
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int v12; // [rsp+50h] [rbp+18h]

  v4 = 20;
  if ( (*(_DWORD *)(a1 + 1724) & 0x20000) == 0 )
  {
    v5 = 1;
    v12 = 1;
    v6 = a1 + 1968;
LABEL_4:
    v4 = v5;
    goto LABEL_5;
  }
  LOWORD(v5) = KeQueryMaximumGroupCount();
  v6 = *(_QWORD *)(a1 + 1968);
  v5 = (unsigned __int16)v5;
  v12 = v5;
  if ( (unsigned __int16)v5 <= 0x14u )
    goto LABEL_4;
LABEL_5:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( v4 )
  {
    v9 = v6 - (_QWORD)a2;
    v10 = v4;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v9);
      ++a2;
      --v10;
    }
    while ( v10 );
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(CurrentIrql);
  return v12;
}
