/*
 * XREFs of MiFreeCloneDescriptor @ 0x1406AA7EC
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1400056EC (MiUnlockPagedAddress.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
