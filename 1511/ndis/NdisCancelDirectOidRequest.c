/*
 * XREFs of NdisCancelDirectOidRequest @ 0x1C0040490
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceRef @ 0x1C0004A64 (ndisReferenceRef.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0041408 (ndisDoCancelDirectOidRequest.c)
 */

void __stdcall NdisCancelDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r14
  KIRQL v7; // r12
  __int64 v8; // rcx

  v2 = *((_QWORD *)NdisBindingHandle + 2);
  v3 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0xB5u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, NdisBindingHandle, RequestId);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  v8 = *(_QWORD *)(v2 + 2664);
  *(_DWORD *)(v2 + 1856) = 2306834;
  if ( *(_BYTE *)v8 == 5 )
  {
    v3 = v8;
    if ( !ndisReferenceRef((PKSPIN_LOCK)(v8 + 312)) )
      v3 = 0LL;
  }
  else
  {
    v4 = v8;
  }
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v7);
  if ( v4 || v3 )
    ndisDoCancelDirectOidRequest(v4, v3, RequestId);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0xB6u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, NdisBindingHandle, RequestId);
}
