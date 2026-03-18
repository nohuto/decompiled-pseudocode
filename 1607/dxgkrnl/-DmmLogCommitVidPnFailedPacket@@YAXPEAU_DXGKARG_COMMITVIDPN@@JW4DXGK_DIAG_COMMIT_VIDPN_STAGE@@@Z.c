/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01A0B74
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01A0F9C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  const struct DMMVIDPNTOPOLOGY *v8; // r14
  unsigned int v9; // ebp
  unsigned int v10; // edi
  char *v11; // rax
  char *v12; // rbx
  int v13; // r8d
  int v14; // r8d
  signed int v15; // eax

  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( !v6 )
  {
    v7 = -1073741811;
LABEL_3:
    DxgkLogCodePointPacket(0x37u, v7, 0, 0);
    return;
  }
  v8 = (const struct DMMVIDPNTOPOLOGY *)(v6 + 96);
  v9 = *(_DWORD *)(v6 + 136);
  v10 = 136 * v9 + 72;
  v11 = (char *)operator new(v10, 0x4E506456u, PagedPool);
  v12 = v11;
  if ( !v11 )
  {
    v7 = -1073741801;
    goto LABEL_3;
  }
  memset(v11, 0, 136 * v9 + 72);
  *((_DWORD *)v12 + 10) = 0;
  *((_QWORD *)v12 + 4) = 0LL;
  *(_DWORD *)v12 = 13;
  *((_DWORD *)v12 + 1) = v10;
  *((_QWORD *)v12 + 1) = 0LL;
  *((_QWORD *)v12 + 2) = 0LL;
  *((_QWORD *)v12 + 3) = 0LL;
  v13 = *((_DWORD *)v12 + 15);
  *((_DWORD *)v12 + 12) = a2;
  *((_DWORD *)v12 + 13) = *(_DWORD *)(a1 + 8);
  *((_DWORD *)v12 + 14) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v12 + 15) ^= (*(_DWORD *)(a1 + 24) ^ v13) & 1;
  v14 = (*(_DWORD *)(a1 + 24) ^ *((_DWORD *)v12 + 15)) & 2;
  *((_DWORD *)v12 + 16) = a3;
  *((_DWORD *)v12 + 15) ^= v14;
  *((_DWORD *)v12 + 17) = v9;
  v15 = DmmStoreVidPnPathDataIntoDiagPacket(v8, v9, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR *)(v12 + 72));
  if ( v15 < 0 || (v15 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12), v15 < 0) )
    DxgkLogCodePointPacket(0x37u, v15, 0, 0);
  operator delete(v12);
}
