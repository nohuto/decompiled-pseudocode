/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x14012ED34
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14012EAF4 (ExpSaPageGroupDescriptorFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaBinaryArrayRemove(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  _BitScanReverse(&v3, a2);
  v4 = 1 << v3;
  v5 = v3 - 2;
  v6 = a2 ^ v4;
  v7 = (unsigned int)v5;
  v8 = *(_QWORD **)(a1 + 8 * v5);
  v8[v6 + 1] = 0LL;
  if ( (*v8)-- == 1LL )
  {
    *(_QWORD *)(a1 + 8 * v7) = 0LL;
    ExFreePoolWithTag(v8, 0);
  }
}
