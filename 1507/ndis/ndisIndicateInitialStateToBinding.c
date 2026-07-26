/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C0014DC8
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00167D8 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0017338 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001737C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMReferenceIfBlock @ 0x1C0017410 (ndisMReferenceIfBlock.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  KIRQL v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13[16]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[14]; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+A0h] [rbp-60h] BYREF
  int v16; // [rsp+A4h] [rbp-5Ch]
  int v17; // [rsp+A8h] [rbp-58h]
  int v18; // [rsp+B0h] [rbp-50h] BYREF
  int v19; // [rsp+B4h] [rbp-4Ch]
  int v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+D0h] [rbp-30h]
  int v24; // [rsp+D4h] [rbp-2Ch]
  __int128 v25; // [rsp+D8h] [rbp-28h] BYREF
  int v26; // [rsp+E8h] [rbp-18h]
  __int128 v27; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v28; // [rsp+100h] [rbp+0h]
  int v29; // [rsp+108h] [rbp+8h]
  _OWORD v30[5]; // [rsp+110h] [rbp+10h] BYREF
  int v31; // [rsp+160h] [rbp+60h]
  _OWORD v32[7]; // [rsp+170h] [rbp+70h] BYREF
  int v33; // [rsp+1E0h] [rbp+E0h]
  _OWORD v34[11]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v35; // [rsp+2A0h] [rbp+1A0h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(77LL, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v13);
  v18 = 2621824;
  v3 = *(_QWORD *)(v1 + 2056);
  if ( v3 )
  {
    v19 = *(_DWORD *)(v3 + 380);
    v20 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 384LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 392LL);
    v22 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 400LL);
    v23 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 408LL);
    v24 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 412LL);
  }
  else
  {
    v19 = *(_DWORD *)(v1 + 480);
    v20 = *(_DWORD *)(v1 + 488);
    v21 = *(_QWORD *)(v1 + 792);
    v22 = *(_QWORD *)(v1 + 800);
    v23 = *(_DWORD *)(v1 + 808);
    v24 = *(_DWORD *)(v1 + 468);
  }
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[3]) |= 3u;
  v14[6] = &v18;
  LODWORD(v14[0]) = 7340440;
  v14[1] = v1;
  HIDWORD(v14[2]) = 1073807383;
  LODWORD(v14[7]) = 40;
  v14[4] = a1;
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
  LOBYTE(v4) = 17;
  if ( ndisMReferenceIfBlock(v1, v4) )
  {
    v16 = 0;
    v17 = 0;
    v15 = 786816;
    v16 = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1112LL);
    v17 = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1116LL);
    memset(v14, 0, sizeof(v14));
    LODWORD(v14[3]) |= 1u;
    v14[6] = &v15;
    LODWORD(v14[0]) = 7340440;
    v14[1] = v1;
    HIDWORD(v14[2]) = 1073807395;
    LODWORD(v14[7]) = 12;
    v14[4] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    IFBLOCK_DEREFERENCE_MINIPORT_LINK(*(struct _NDIS_IF_BLOCK **)(v1 + 4096), MPIFREF_INITIALSTATE);
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  }
  v6 = *(_QWORD *)(v1 + 4152);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 1) == 1 )
    {
      v7 = v6 + 188;
      v34[0] = *(_OWORD *)v7;
      v34[1] = *(_OWORD *)(v7 + 16);
      v34[2] = *(_OWORD *)(v7 + 32);
      v34[3] = *(_OWORD *)(v7 + 48);
      v34[4] = *(_OWORD *)(v7 + 64);
      v34[5] = *(_OWORD *)(v7 + 80);
      v34[6] = *(_OWORD *)(v7 + 96);
      v34[7] = *(_OWORD *)(v7 + 112);
      v34[8] = *(_OWORD *)(v7 + 128);
      v34[9] = *(_OWORD *)(v7 + 144);
      v34[10] = *(_OWORD *)(v7 + 160);
      v35 = *(_DWORD *)(v7 + 176);
      memset(v14, 0, sizeof(v14));
      LODWORD(v14[3]) |= 1u;
      v14[6] = v34;
      LODWORD(v14[0]) = 7340440;
      v14[1] = v1;
      HIDWORD(v14[2]) = 1073872902;
      LODWORD(v14[7]) = 180;
      v14[4] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
    v8 = *(_QWORD *)(v1 + 4152);
    if ( *(_BYTE *)(v8 + 2) == 1 && !*(_BYTE *)(v8 + 4) )
    {
      v25 = *(_OWORD *)(v8 + 840);
      v26 = *(_DWORD *)(v8 + 856);
      memset(v14, 0, sizeof(v14));
      LODWORD(v14[3]) |= 1u;
      v14[6] = &v25;
      LODWORD(v14[0]) = 7340440;
      v14[1] = v1;
      HIDWORD(v14[2]) = 1073872899;
      LODWORD(v14[7]) = 20;
      v14[4] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
  }
  v9 = *(__int128 **)(v1 + 4328);
  if ( v9 )
  {
    v27 = *v9;
    v28 = *((_QWORD *)v9 + 2);
    v29 = *((_DWORD *)v9 + 6);
    memset(v14, 0, sizeof(v14));
    LODWORD(v14[3]) |= 1u;
    v14[6] = &v27;
    LODWORD(v14[0]) = 7340440;
    v14[1] = v1;
    HIDWORD(v14[2]) = 1073872908;
    LODWORD(v14[7]) = 28;
    v14[4] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
  }
  if ( !*(_DWORD *)(v1 + 3540) && (*(_QWORD *)(v1 + 3624) || *(_QWORD *)(v1 + 3600)) )
  {
    v10 = *(_QWORD *)(v1 + 4672);
    if ( !v10 || (*(_BYTE *)(v10 + 8) & 3) != 3 )
    {
      v11 = *(_QWORD *)(v1 + 3600);
      if ( v11 )
      {
        v30[0] = *(_OWORD *)v11;
        v30[1] = *(_OWORD *)(v11 + 16);
        v30[2] = *(_OWORD *)(v11 + 32);
        v30[3] = *(_OWORD *)(v11 + 48);
        v30[4] = *(_OWORD *)(v11 + 64);
        v31 = *(_DWORD *)(v11 + 80);
        memset(v14, 0, sizeof(v14));
        LODWORD(v14[3]) |= 1u;
        v14[6] = v30;
        LODWORD(v14[0]) = 7340440;
        v14[1] = v1;
        HIDWORD(v14[2]) = 1073872912;
        LODWORD(v14[7]) = 84;
        v14[4] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
      }
      v12 = *(_QWORD *)(v1 + 3624);
      if ( v12 )
      {
        v32[0] = *(_OWORD *)v12;
        v32[1] = *(_OWORD *)(v12 + 16);
        v32[2] = *(_OWORD *)(v12 + 32);
        v32[3] = *(_OWORD *)(v12 + 48);
        v32[4] = *(_OWORD *)(v12 + 64);
        v32[5] = *(_OWORD *)(v12 + 80);
        v32[6] = *(_OWORD *)(v12 + 96);
        v33 = *(_DWORD *)(v12 + 112);
        memset(v14, 0, sizeof(v14));
        LODWORD(v14[3]) |= 1u;
        v14[6] = v32;
        LODWORD(v14[0]) = 7340440;
        v14[1] = v1;
        HIDWORD(v14[2]) = 1073872960;
        LODWORD(v14[7]) = 116;
        v14[4] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
      }
    }
  }
  ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v13[0]);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(78LL, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
}
