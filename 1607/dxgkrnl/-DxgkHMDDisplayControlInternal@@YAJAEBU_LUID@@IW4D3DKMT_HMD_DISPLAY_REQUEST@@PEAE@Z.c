/*
 * XREFs of ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01789D8
 * Callers:
 *     ?DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z @ 0x1C014DD80 (-DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DmmIsTargetHMD @ 0x1C007B5F8 (DmmIsTargetHMD.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01A4BB0 (DmmIsTargetInClientVidPnTopology.c)
 */

__int64 __fastcall DxgkHMDDisplayControlInternal(const struct _LUID *a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  DXGADAPTER *v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rbx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int IsTargetInClientVidPnTopology; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v26[80]; // [rsp+30h] [rbp-68h] BYREF
  char v27; // [rsp+B0h] [rbp+18h] BYREF

  v4 = a2;
  if ( a3 <= 2 && a4 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v25);
    v11 = v9;
    if ( !v9 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      LODWORD(v13) = -1073741811;
      v12[3] = a1->HighPart;
      v12[4] = a1->LowPart;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v13;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v9, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
    v13 = v15;
    if ( v15 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
LABEL_10:
      v17[3] = a1->HighPart;
      v17[4] = a1->LowPart;
      v17[5] = v13;
LABEL_25:
      WdLogEvent5_WdError(v17);
      goto LABEL_27;
    }
    if ( !*((_QWORD *)v11 + 266) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v13 = -1073741811LL;
      goto LABEL_10;
    }
    if ( !DmmIsTargetHMD(v11, v4) )
    {
      LODWORD(v13) = -1073741811;
LABEL_27:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      return (unsigned int)v13;
    }
    v27 = 0;
    IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v11, (unsigned int)v4, &v27);
    v13 = IsTargetInClientVidPnTopology;
    if ( IsTargetInClientVidPnTopology >= 0 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v26);
      if ( a3 )
      {
        v21 = a3 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            *a4 = v27;
          }
          else
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = 7307LL;
            WdLogEvent5_WdAssertion(v22);
          }
          goto LABEL_27;
        }
        if ( !v27 || (v23 = HMDDisplayOnOff(a1, v4, 0), v13 = v23, v23 >= 0) )
        {
          *a4 = 0;
          goto LABEL_27;
        }
      }
      else if ( v27 || (v24 = HMDDisplayOnOff(a1, v4, 1), v13 = v24, v24 >= 0) )
      {
        *a4 = 1;
        goto LABEL_27;
      }
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v17[3] = a1->HighPart;
    v17[4] = a1->LowPart;
    v17[5] = v4;
    v17[6] = v13;
    goto LABEL_25;
  }
  return -1073741811LL;
}
