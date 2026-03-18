/*
 * XREFs of MiFreeCloneDescriptor @ 0x14066323C
 * Callers:
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400284C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x1400B4854 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(ULONG_PTR a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rdi
  void *v7; // rbp

  v2 = (_QWORD *)a2[7];
  v3 = 0LL;
  v4 = a2[8];
  v7 = (void *)v2[2];
  if ( v4 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)v7 + v3);
      v3 += 4096LL;
    }
    while ( v3 < v4 );
  }
  PsReturnProcessNonPagedPoolQuota(a1, v4);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(a2, 0);
}
