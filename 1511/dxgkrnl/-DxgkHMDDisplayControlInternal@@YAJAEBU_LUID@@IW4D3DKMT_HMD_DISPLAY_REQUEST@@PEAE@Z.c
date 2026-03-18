/*
 * XREFs of ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C0153954
 * Callers:
 *     ?DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z @ 0x1C012C160 (-DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmIsTargetHMD @ 0x1C008DA30 (DmmIsTargetHMD.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00C6908 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C017B624 (DmmIsTargetInClientVidPnTopology.c)
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
  _BYTE v25[64]; // [rsp+20h] [rbp-58h] BYREF
  char v26; // [rsp+90h] [rbp+18h] BYREF

  v4 = a2;
  if ( a3 <= 2 && a4 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
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
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v9, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
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
    if ( !*((_QWORD *)v11 + 248) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v13 = -1073741811LL;
      goto LABEL_10;
    }
    if ( !DmmIsTargetHMD(v11, v4) )
    {
      LODWORD(v13) = -1073741811;
LABEL_27:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
      return (unsigned int)v13;
    }
    v26 = 0;
    IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v11, (unsigned int)v4, &v26);
    v13 = IsTargetInClientVidPnTopology;
    if ( IsTargetInClientVidPnTopology >= 0 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v25);
      if ( a3 )
      {
        v21 = a3 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            *a4 = v26;
          }
          else
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = 6963LL;
            WdLogEvent5_WdAssertion(v22);
          }
          goto LABEL_27;
        }
        if ( !v26 || (v23 = HMDDisplayOnOff(a1, v4, 0), v13 = v23, v23 >= 0) )
        {
          *a4 = 0;
          goto LABEL_27;
        }
      }
      else if ( v26 || (v24 = HMDDisplayOnOff(a1, v4, 1), v13 = v24, v24 >= 0) )
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
