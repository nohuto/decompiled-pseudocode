/*
 * XREFs of ndisFCancelDirectOidRequestInternal @ 0x1C0053460
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ndisReferenceRef @ 0x1C001900C (ndisReferenceRef.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C003FD08 (ndisDoCancelDirectOidRequest.c)
 */

void __fastcall ndisFCancelDirectOidRequestInternal(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  char v5; // r14
  KIRQL v6; // r12
  __int64 v7; // rax

  v1 = a1[3];
  v2 = 0LL;
  v3 = a1[1];
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x3Bu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v3, v1);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 144));
  *(_QWORD *)(v3 + 152) = KeGetCurrentThread();
  v7 = *(_QWORD *)(v3 + 840);
  *(_DWORD *)(v3 + 160) = 2101462;
  if ( *(_BYTE *)v7 == 5 )
  {
    v2 = v7;
    v5 = ndisReferenceRef((PKSPIN_LOCK)(v7 + 312), 2u);
    if ( !v5 )
      v2 = 0LL;
  }
  else
  {
    v4 = v7;
  }
  *(_QWORD *)(v3 + 152) = 0LL;
  *(_DWORD *)(v3 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 144), v6);
  if ( v4 || v2 )
    ndisDoCancelDirectOidRequest(v4, v2, v1);
  if ( v5 == 1 )
    ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 2u);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x3Cu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v3, v1);
}
