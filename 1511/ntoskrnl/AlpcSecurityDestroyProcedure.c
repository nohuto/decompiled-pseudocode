/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x1403F4A08
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1403F4A84 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpRemoveResourcePort @ 0x1403F4AAC (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1403F4B54 (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rcx

  v2 = *a1;
  if ( v2 )
    AlpcDeleteBlobByHandle(v2, a1[1], a1);
  v3 = a1[3];
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    ObfDereferenceObject((PVOID)a1[3]);
  }
  if ( a1[2] )
  {
    v4 = (_DWORD *)a1[6];
    if ( v4[48] == 1 || v4 )
      ObfDereferenceObject(v4);
    AlpcpReleasePagedPoolQuota(a1[2], 160LL);
    ObfDereferenceObjectWithTag((PVOID)a1[2], 0x63706C41u);
  }
  return 0LL;
}
