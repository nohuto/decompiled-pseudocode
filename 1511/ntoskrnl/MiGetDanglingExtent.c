/*
 * XREFs of MiGetDanglingExtent @ 0x1401E36E4
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v11; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 i; // rbx

  *a1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = ExAcquireSpinLockExclusive(&dword_1402FE3B0);
  v5 = (_QWORD *)qword_1402FE3A8;
  v6 = v4;
  do
  {
    v7 = v5;
    if ( !v5 )
      break;
    if ( !v2 )
      v3 = v5;
    v5 = (_QWORD *)*v5;
    ++v2;
    qword_1402FE3A8 = (__int64)v5;
  }
  while ( v5 == v7 - 6 );
  ExReleaseSpinLockExclusive(&dword_1402FE3B0, v6);
  if ( !v2 )
    return -1LL;
  v11 = &v3[-6 * v2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = (unsigned __int64)(v11 + 6); i <= (unsigned __int64)v3; i += 48LL )
  {
    MiLockPageAtDpcInline(i, v8, v9);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
  *a1 = v2;
  return (__int64)(v11 + 0xB000000006LL) / 48;
}
