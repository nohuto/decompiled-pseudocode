/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C001C7F0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001C7AC (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D9A4 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C001DC98 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001DD3C (ndisMReferenceIfBlock.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0023E20 (ndisIovNicSwitchWithoutIovSupported.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int128 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 v14[16]; // [rsp+28h] [rbp-E0h] BYREF
  int v15[28]; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+A8h] [rbp-60h] BYREF
  int v17; // [rsp+ACh] [rbp-5Ch]
  int v18; // [rsp+B0h] [rbp-58h]
  int v19; // [rsp+B8h] [rbp-50h] BYREF
  int v20; // [rsp+BCh] [rbp-4Ch]
  int v21; // [rsp+C0h] [rbp-48h]
  __int64 v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D8h] [rbp-30h]
  int v25; // [rsp+DCh] [rbp-2Ch]
  __int128 v26; // [rsp+E0h] [rbp-28h] BYREF
  int v27; // [rsp+F0h] [rbp-18h]
  __int128 v28; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v29; // [rsp+108h] [rbp+0h]
  int v30; // [rsp+110h] [rbp+8h]
  _OWORD v31[5]; // [rsp+118h] [rbp+10h] BYREF
  int v32; // [rsp+168h] [rbp+60h]
  _OWORD v33[8]; // [rsp+178h] [rbp+70h] BYREF
  int v34; // [rsp+1F8h] [rbp+F0h]
  _OWORD v35[11]; // [rsp+208h] [rbp+100h] BYREF
  int v36; // [rsp+2B8h] [rbp+1B0h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(77LL, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1);
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v14);
  v19 = 2621824;
  v3 = *(_QWORD *)(v1 + 2056);
  if ( v3 )
  {
    v20 = *(_DWORD *)(v3 + 380);
    v21 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 384LL);
    v22 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 392LL);
    v23 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 400LL);
    v24 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 408LL);
    v25 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 412LL);
  }
  else
  {
    v20 = *(_DWORD *)(v1 + 480);
    v21 = *(_DWORD *)(v1 + 488);
    v22 = *(_QWORD *)(v1 + 792);
    v23 = *(_QWORD *)(v1 + 800);
    v24 = *(_DWORD *)(v1 + 808);
    v25 = *(_DWORD *)(v1 + 468);
  }
  memset(v15, 0, sizeof(v15));
  v15[6] |= 3u;
  *(_QWORD *)&v15[12] = &v19;
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
    v18 = 0;
    v16 = 786816;
    v17 = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1112LL);
    v18 = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1116LL);
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
      v7 = (_OWORD *)(v6 + 188);
      v35[0] = *v7;
      v35[1] = v7[1];
      v35[2] = v7[2];
      v35[3] = v7[3];
      v35[4] = v7[4];
      v35[5] = v7[5];
      v35[6] = v7[6];
      v8 = v7[7];
      v7 += 8;
      v35[7] = v8;
      v35[8] = *v7;
      v35[9] = v7[1];
      v35[10] = v7[2];
      v36 = *((_DWORD *)v7 + 12);
      memset(v15, 0, sizeof(v15));
      v15[6] |= 1u;
      *(_QWORD *)&v15[12] = v35;
      v15[0] = 7340440;
      *(_QWORD *)&v15[2] = v1;
      v15[5] = 1073872902;
      v15[14] = 180;
      *(_QWORD *)&v15[8] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
    }
    v9 = *(_QWORD *)(v1 + 4152);
    if ( *(_BYTE *)(v9 + 2) == 1 && !*(_BYTE *)(v9 + 4) )
    {
      v26 = *(_OWORD *)(v9 + 840);
      v27 = *(_DWORD *)(v9 + 856);
      memset(v15, 0, sizeof(v15));
      v15[6] |= 1u;
      *(_QWORD *)&v15[12] = &v26;
      v15[0] = 7340440;
      *(_QWORD *)&v15[2] = v1;
      v15[5] = 1073872899;
      v15[14] = 20;
      *(_QWORD *)&v15[8] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1, (int)v15);
    }
  }
  v10 = *(__int128 **)(v1 + 4328);
  if ( v10 )
  {
    v28 = *v10;
    v29 = *((_QWORD *)v10 + 2);
    v30 = *((_DWORD *)v10 + 6);
    memset(v15, 0, sizeof(v15));
    v15[6] |= 1u;
    *(_QWORD *)&v15[12] = &v28;
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
        v31[0] = *(_OWORD *)v12;
        v31[1] = *(_OWORD *)(v12 + 16);
        v31[2] = *(_OWORD *)(v12 + 32);
        v31[3] = *(_OWORD *)(v12 + 48);
        v31[4] = *(_OWORD *)(v12 + 64);
        v32 = *(_DWORD *)(v12 + 80);
        memset(v15, 0, sizeof(v15));
        v15[6] |= 1u;
        *(_QWORD *)&v15[12] = v31;
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
        v33[0] = *(_OWORD *)v13;
        v33[1] = *(_OWORD *)(v13 + 16);
        v33[2] = *(_OWORD *)(v13 + 32);
        v33[3] = *(_OWORD *)(v13 + 48);
        v33[4] = *(_OWORD *)(v13 + 64);
        v33[5] = *(_OWORD *)(v13 + 80);
        v33[6] = *(_OWORD *)(v13 + 96);
        v33[7] = *(_OWORD *)(v13 + 112);
        v34 = *(_DWORD *)(v13 + 128);
        memset(v15, 0, sizeof(v15));
        v15[6] |= 1u;
        *(_QWORD *)&v15[12] = v33;
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
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(78LL, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1);
}
