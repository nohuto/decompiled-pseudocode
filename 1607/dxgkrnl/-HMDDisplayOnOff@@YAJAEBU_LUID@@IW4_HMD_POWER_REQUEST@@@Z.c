/*
 * XREFs of ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C00DB850 (DxgkPreSessionDisconnected.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01789D8 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C008AC48 (-RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00DB948 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0178F4C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01AB204 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01AB3FC (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall HMDDisplayOnOff(const struct _LUID *a1, unsigned int a2, int a3)
{
  unsigned __int16 v3; // di
  __int64 v7; // rbx
  bool v8; // dl
  bool v9; // cl
  bool v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  unsigned __int8 v15; // al
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // bx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int UnusedVidpnSourceId; // esi
  __int64 v27; // rcx
  unsigned int v28; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  _BYTE v36[64]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v37; // [rsp+60h] [rbp-20h]
  int v38; // [rsp+6Ch] [rbp-14h]
  int v39; // [rsp+70h] [rbp-10h]
  int v40; // [rsp+74h] [rbp-Ch]
  unsigned __int8 v41; // [rsp+C0h] [rbp+40h] BYREF

  v3 = 0;
  LODWORD(v7) = 0;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, 8u, 0);
  v40 |= 1u;
  CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v9, v8, v10, (struct CCD_TOPOLOGY *)v36);
  v41 = 1;
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( !v14 )
    {
      if ( v37 )
        LOWORD(v7) = *(_WORD *)(v37 + 20);
      v22 = v7 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v36, v22, v12, v13) >= v22 )
      {
        UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v36, a1);
        if ( UnusedVidpnSourceId != 16 )
        {
          v28 = v22 - 1;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v36, v28);
          *((struct _LUID *)PathDescriptor + 1) = *a1;
          *((_DWORD *)PathDescriptor + 20) = 5;
          *((_DWORD *)PathDescriptor + 21) = 5;
          *((_DWORD *)PathDescriptor + 4) = UnusedVidpnSourceId;
          *((_DWORD *)PathDescriptor + 5) = a2;
          *((_BYTE *)PathDescriptor + 121) = 1;
          *(_DWORD *)PathDescriptor = 585744;
          ++*(_WORD *)(v37 + 20);
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v36, v28);
          goto LABEL_8;
        }
        v27 = WdLogNewEntry5_WdEvent(v25);
        if ( v37 )
          v3 = *(_WORD *)(v37 + 20);
        *(_QWORD *)(v27 + 24) = v3;
        *(_QWORD *)(v27 + 32) = 16LL;
        WdLogEvent5_WdEvent(v27);
      }
      else
      {
        v24 = WdLogNewEntry5_WdLowResource(v23);
        *(_QWORD *)(v24 + 24) = v22;
        WdLogEvent5_WdLowResource(v24);
      }
      LODWORD(v7) = -1073741823;
      goto LABEL_6;
    }
    if ( v14 == 1 )
    {
      v41 = 0;
      CCD_TOPOLOGY::RemoveAllHMDPaths((CCD_TOPOLOGY *)v36, &v41);
      v15 = v41;
      goto LABEL_5;
    }
    v17 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v17 + 24) = 7093LL;
    WdLogEvent5_WdAssertion(v17);
  }
  else if ( (unsigned int)CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v36, a1, a2) == -1073741275 )
  {
    v15 = 0;
    v41 = 0;
LABEL_5:
    if ( !v15 )
      goto LABEL_6;
  }
LABEL_8:
  v18 = v37;
  v19 = 0LL;
  v38 = 1;
  v20 = v37;
  v39 = 1;
  while ( 1 )
  {
    v21 = v18 ? *(_WORD *)(v18 + 20) : 0;
    if ( (unsigned int)v19 >= v21 )
      break;
    v30 = 216LL * (unsigned int)v19;
    v31 = *(_DWORD *)(v30 + v20 + 48);
    if ( (v31 & 0x10) == 0 )
    {
      if ( (v31 & 0x100) != 0 )
      {
        *(_DWORD *)(v30 + v20 + 52) |= 0x100u;
        v18 = v37;
      }
      if ( (v31 & 0x87) != 0 )
      {
        *(_DWORD *)(v30 + v20 + 52) |= 0x87u;
        v18 = v37;
      }
    }
    v19 = (unsigned int)(v19 + 1);
  }
  v32 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v36, 0x20000LL, v20, v19);
  v7 = v32;
  if ( v32 < 0 || (v34 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v36, 0x20000u), v7 = v34, v34 < 0) )
  {
    v35 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v35 + 24) = v7;
    *(_QWORD *)(v35 + 32) = v37;
    WdLogEvent5_WdError(v35);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
  return (unsigned int)v7;
}
