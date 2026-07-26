/*
 * XREFs of ndisFCancelDirectOidRequestInternal @ 0x1C0058280
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0044EF8 (ndisDoCancelDirectOidRequest.c)
 */

void __fastcall ndisFCancelDirectOidRequestInternal(_QWORD *a1)
{
  void *v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  char v5; // r14
  KIRQL v6; // r12
  __int64 v7; // rax
  void *v8; // r9

  v1 = (void *)a1[3];
  v2 = 0LL;
  v3 = a1[1];
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x3Bu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v3, v1);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 144));
  *(_QWORD *)(v3 + 152) = KeGetCurrentThread();
  v7 = *(_QWORD *)(v3 + 840);
  *(_DWORD *)(v3 + 160) = 2101472;
  if ( *(_BYTE *)v7 == 5 )
  {
    v2 = v7;
    v5 = ndisReferenceRef((PKSPIN_LOCK)(v7 + 312), 2u);
    if ( !v5 )
      v2 = 0LL;
  }
  else
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)v7;
  }
  *(_QWORD *)(v3 + 152) = 0LL;
  *(_DWORD *)(v3 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 144), v6);
  if ( v4 || v2 )
    ndisDoCancelDirectOidRequest(v4, v2, v1, v8);
  if ( v5 == 1 )
    ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 2u);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x3Cu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v3, v1);
}
