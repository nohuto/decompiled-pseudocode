/*
 * XREFs of PspFreeStorage @ 0x1406829B4
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x14051A430 (PspJobDeleteStorageArrays.c)
 *     PspCreateSilo @ 0x14067E740 (PspCreateSilo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeStorage(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx

  v2 = a1 + 1;
  v3 = 32LL;
  do
  {
    if ( *v2 >= 2uLL )
      NT_ASSERT(
        "(Storage->StorageArray[Index].Object == ((void *)0)) || (Storage->StorageArray[Index].Object == (PVOID)((ULONG_PTR)1))");
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v4 = (_QWORD *)a1[64];
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = 256LL;
    do
    {
      if ( *v5 >= 2uLL )
        NT_ASSERT(
          "(Storage->StorageExpansionArray[Index].Object == ((void *)0)) || (Storage->StorageExpansionArray[Index].Object"
          " == (PVOID)((ULONG_PTR)1))");
      v5 += 2;
      --v6;
    }
    while ( v6 );
    ExFreePoolWithTag(v4, 0x78457350u);
  }
  ExFreePoolWithTag(a1, 0x74537350u);
}
