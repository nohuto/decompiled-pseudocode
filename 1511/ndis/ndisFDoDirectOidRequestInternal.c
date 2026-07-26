/*
 * XREFs of ndisFDoDirectOidRequestInternal @ 0x1C0041850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0053DD4 (ndisFInvokeDirectOidRequest.c)
 */

void __fastcall ndisFDoDirectOidRequestInternal(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  KIRQL v4; // al
  KSPIN_LOCK *v5; // rcx
  KIRQL v6; // dl
  int v7; // r15d
  KIRQL v8; // al

  v1 = a1[1];
  v3 = a1[3];
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x33u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
  v5 = (KSPIN_LOCK *)(v1 + 144);
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  v6 = v4;
  *(_QWORD *)(v1 + 152) = 0LL;
  *(_DWORD *)(v1 + 160) = 2297390;
  *(_DWORD *)(v1 + 160) = 0;
  if ( (*(_DWORD *)(v1 + 56) & 0x10000) != 0 )
  {
    v7 = -1073676286;
  }
  else
  {
    ++*(_DWORD *)(v1 + 848);
    KeReleaseSpinLock(v5, v4);
    *(_DWORD *)(v3 + 88) |= 0x20000u;
    v7 = ndisFInvokeDirectOidRequest(v1, v3);
    if ( v7 == 259 )
      goto LABEL_8;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
    --*(_DWORD *)(v1 + 848);
    v5 = (KSPIN_LOCK *)(v1 + 144);
    *(_QWORD *)(v1 + 152) = 0LL;
    v6 = v8;
    *(_DWORD *)(v1 + 160) = 0;
  }
  KeReleaseSpinLock(v5, v6);
LABEL_8:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x34u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v3);
  *(_DWORD *)a1 = v7;
}
