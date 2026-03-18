/*
 * XREFs of ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00C6908
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C00C68D0 (DxgkPreSessionDisconnected.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C0153954 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00A576C (-RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00C69B4 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0154748 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C0182038 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0182230 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int UnusedVidpnSourceId; // esi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  _BYTE v42[64]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v43; // [rsp+60h] [rbp-20h]
  int v44; // [rsp+6Ch] [rbp-14h]
  int v45; // [rsp+70h] [rbp-10h]
  int v46; // [rsp+74h] [rbp-Ch]
  unsigned __int8 v47; // [rsp+C0h] [rbp+40h] BYREF

  v3 = 0;
  LODWORD(v7) = 0;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v42, 8u, 0);
  v46 |= 1u;
  CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v9, v8, v10, (struct CCD_TOPOLOGY *)v42);
  v47 = 1;
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( !v14 )
    {
      if ( v43 )
        LOWORD(v7) = *(_WORD *)(v43 + 20);
      v22 = v7 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v42, v22, v12, v13) >= v22 )
      {
        UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v42, a1);
        if ( UnusedVidpnSourceId != 16 )
        {
          v34 = v22 - 1;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v42, v34);
          *((struct _LUID *)PathDescriptor + 1) = *a1;
          *((_DWORD *)PathDescriptor + 4) = UnusedVidpnSourceId;
          *((_DWORD *)PathDescriptor + 5) = a2;
          *((_DWORD *)PathDescriptor + 20) = 5;
          *((_BYTE *)PathDescriptor + 117) = 1;
          *(_DWORD *)PathDescriptor = 585744;
          ++*(_WORD *)(v43 + 20);
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v42, v34);
          goto LABEL_8;
        }
        v33 = WdLogNewEntry5_WdEvent(v29, v28, v31, v32);
        if ( v43 )
          v3 = *(_WORD *)(v43 + 20);
        *(_QWORD *)(v33 + 24) = v3;
        *(_QWORD *)(v33 + 32) = 16LL;
        WdLogEvent5_WdEvent(v33);
      }
      else
      {
        v27 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
        *(_QWORD *)(v27 + 24) = v22;
        WdLogEvent5_WdLowResource(v27);
      }
      LODWORD(v7) = -1073741823;
      goto LABEL_6;
    }
    if ( v14 == 1 )
    {
      v47 = 0;
      CCD_TOPOLOGY::RemoveAllHMDPaths((CCD_TOPOLOGY *)v42, &v47);
      v15 = v47;
      goto LABEL_5;
    }
    v17 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v17 + 24) = 6749LL;
    WdLogEvent5_WdAssertion(v17);
  }
  else if ( (unsigned int)CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v42, a1, a2) == -1073741275 )
  {
    v15 = 0;
    v47 = 0;
LABEL_5:
    if ( !v15 )
      goto LABEL_6;
  }
LABEL_8:
  v18 = v43;
  v19 = 0LL;
  v44 = 1;
  v20 = v43;
  v45 = 1;
  while ( 1 )
  {
    v21 = v18 ? *(_WORD *)(v18 + 20) : 0;
    if ( (unsigned int)v19 >= v21 )
      break;
    v36 = 216LL * (unsigned int)v19;
    v37 = *(_DWORD *)(v36 + v20 + 48);
    if ( (v37 & 0x10) == 0 )
    {
      if ( (v37 & 0x100) != 0 )
      {
        *(_DWORD *)(v36 + v20 + 52) |= 0x100u;
        v18 = v43;
      }
      if ( (v37 & 0x87) != 0 )
      {
        *(_DWORD *)(v36 + v20 + 52) |= 0x87u;
        v18 = v43;
      }
    }
    v19 = (unsigned int)(v19 + 1);
  }
  v38 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v42, 0x20000LL, v20, v19);
  v7 = v38;
  if ( v38 < 0 || (v40 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v42, 0x20000u), v7 = v40, v40 < 0) )
  {
    v41 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v41 + 24) = v7;
    *(_QWORD *)(v41 + 32) = v43;
    WdLogEvent5_WdError(v41);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v42);
  return (unsigned int)v7;
}
