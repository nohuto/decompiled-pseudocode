/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C0016864
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0015590 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0016334 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 *v7; // rax
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 v14[16]; // [rsp+28h] [rbp-E0h] BYREF
  int v15[28]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-60h] BYREF
  int v17; // [rsp+B0h] [rbp-58h]
  int v18; // [rsp+B8h] [rbp-50h] BYREF
  int v19; // [rsp+BCh] [rbp-4Ch]
  int v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+D8h] [rbp-30h]
  int v24; // [rsp+DCh] [rbp-2Ch]
  __int128 v25; // [rsp+E0h] [rbp-28h] BYREF
  int v26; // [rsp+F0h] [rbp-18h]
  __int128 v27; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v28; // [rsp+108h] [rbp+0h]
  int v29; // [rsp+110h] [rbp+8h]
  _OWORD v30[5]; // [rsp+118h] [rbp+10h] BYREF
  int v31; // [rsp+168h] [rbp+60h]
  _OWORD v32[8]; // [rsp+178h] [rbp+70h] BYREF
  int v33; // [rsp+1F8h] [rbp+F0h]
  _OWORD v34[11]; // [rsp+208h] [rbp+100h] BYREF
  int v35; // [rsp+2B8h] [rbp+1B0h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(77LL, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1);
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v14);
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
  memset(v15, 0, sizeof(v15));
  v15[6] |= 3u;
  *(_QWORD *)&v15[12] = &v18;
  v15[0] = 7340440;
  *(_QWORD *)&v15[2] = v1;
  v15[5] = 1073807383;
  v15[14] = 40;
  *(_QWORD *)&v15[8] = a1;
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
  LOBYTE(v4) = 17;
  if ( ndisMReferenceIfBlock(v1, v4) )
  {
    v17 = 0;
    v16 = 786816LL;
    HIDWORD(v16) = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1112LL);
    v17 = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1116LL);
    memset(v15, 0, sizeof(v15));
    v15[6] |= 1u;
    *(_QWORD *)&v15[12] = &v16;
    v15[0] = 7340440;
    *(_QWORD *)&v15[2] = v1;
    v15[5] = 1073807395;
    v15[14] = 12;
    *(_QWORD *)&v15[8] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
    LOBYTE(v5) = 17;
    ndisMDereferenceIfBlock(v1, v5);
  }
  v6 = *(_QWORD *)(v1 + 4152);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 1) == 1 )
    {
      v8 = (_OWORD *)(v6 + 188);
      v34[0] = *v8;
      v34[1] = v8[1];
      v34[2] = v8[2];
      v34[3] = v8[3];
      v34[4] = v8[4];
      v34[5] = v8[5];
      v34[6] = v8[6];
      v9 = v8[7];
      v8 += 8;
      v34[7] = v9;
      v34[8] = *v8;
      v34[9] = v8[1];
      v34[10] = v8[2];
      v35 = *((_DWORD *)v8 + 12);
      memset(v15, 0, sizeof(v15));
      v15[6] |= 1u;
      *(_QWORD *)&v15[12] = v34;
      v15[0] = 7340440;
      *(_QWORD *)&v15[2] = v1;
      v15[5] = 1073872902;
      v15[14] = 180;
      *(_QWORD *)&v15[8] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
    }
    v10 = *(_QWORD *)(v1 + 4152);
    if ( *(_BYTE *)(v10 + 2) == 1 && !*(_BYTE *)(v10 + 4) )
    {
      v25 = *(_OWORD *)(v10 + 840);
      v26 = *(_DWORD *)(v10 + 856);
      memset(v15, 0, sizeof(v15));
      v15[6] |= 1u;
      *(_QWORD *)&v15[12] = &v25;
      v15[0] = 7340440;
      *(_QWORD *)&v15[2] = v1;
      v15[5] = 1073872899;
      v15[14] = 20;
      *(_QWORD *)&v15[8] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
    }
  }
  v7 = *(__int128 **)(v1 + 4328);
  if ( v7 )
  {
    v27 = *v7;
    v28 = *((_QWORD *)v7 + 2);
    v29 = *((_DWORD *)v7 + 6);
    memset(v15, 0, sizeof(v15));
    v15[6] |= 1u;
    *(_QWORD *)&v15[12] = &v27;
    v15[0] = 7340440;
    *(_QWORD *)&v15[2] = v1;
    v15[5] = 1073872908;
    v15[14] = 28;
    *(_QWORD *)&v15[8] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
  }
  if ( !*(_DWORD *)(v1 + 3540) && (*(_QWORD *)(v1 + 3624) || *(_QWORD *)(v1 + 3600)) )
  {
    v11 = *(_QWORD *)(v1 + 4672);
    if ( (!v11 || (*(_BYTE *)(v11 + 8) & 3) != 3) && !(unsigned __int8)ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v12 = *(_QWORD *)(v1 + 3600);
      if ( v12 )
      {
        v30[0] = *(_OWORD *)v12;
        v30[1] = *(_OWORD *)(v12 + 16);
        v30[2] = *(_OWORD *)(v12 + 32);
        v30[3] = *(_OWORD *)(v12 + 48);
        v30[4] = *(_OWORD *)(v12 + 64);
        v31 = *(_DWORD *)(v12 + 80);
        memset(v15, 0, sizeof(v15));
        v15[6] |= 1u;
        *(_QWORD *)&v15[12] = v30;
        v15[0] = 7340440;
        *(_QWORD *)&v15[2] = v1;
        v15[5] = 1073872912;
        v15[14] = 84;
        *(_QWORD *)&v15[8] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
      }
      v13 = *(_QWORD *)(v1 + 3624);
      if ( v13 )
      {
        v32[0] = *(_OWORD *)v13;
        v32[1] = *(_OWORD *)(v13 + 16);
        v32[2] = *(_OWORD *)(v13 + 32);
        v32[3] = *(_OWORD *)(v13 + 48);
        v32[4] = *(_OWORD *)(v13 + 64);
        v32[5] = *(_OWORD *)(v13 + 80);
        v32[6] = *(_OWORD *)(v13 + 96);
        v32[7] = *(_OWORD *)(v13 + 112);
        v33 = *(_DWORD *)(v13 + 128);
        memset(v15, 0, sizeof(v15));
        v15[6] |= 1u;
        *(_QWORD *)&v15[12] = v32;
        v15[0] = 7340440;
        *(_QWORD *)&v15[2] = v1;
        v15[5] = 1073872960;
        v15[14] = 132;
        *(_QWORD *)&v15[8] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
      }
    }
  }
  ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v14[0]);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(78LL, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1);
}
