/*
 * XREFs of ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0178BDC
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DmmIsTargetHMD @ 0x1C007B5F8 (DmmIsTargetHMD.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00D979C (MonitorGetEdidBaseBlockPtr.c)
 */

__int64 __fastcall DxgkHMDGetEdidBaseBlock(const struct _LUID *a1, unsigned int a2, unsigned __int8 *a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  DXGADAPTER *v10; // rbp
  _QWORD *v11; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _OWORD *EdidBaseBlockPtr; // rax
  _BYTE v20[80]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v21);
  v9 = 0;
  v10 = v7;
  if ( !v7 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v11[3] = a1->HighPart;
    v11[4] = a1->LowPart;
    v11[5] = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v7, 0LL);
  DXGADAPTER::ReleaseReference(v10);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
LABEL_7:
    v16[3] = a1->HighPart;
    v16[4] = a1->LowPart;
    v16[5] = v15;
    WdLogEvent5_WdError(v16);
LABEL_14:
    v9 = v15;
    goto LABEL_15;
  }
  if ( !*((_QWORD *)v10 + 266) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v15 = -1073741811LL;
    goto LABEL_7;
  }
  if ( !a3 || !DmmIsTargetHMD(v10, a2) )
  {
    LODWORD(v15) = -1073741811;
    goto LABEL_14;
  }
  EdidBaseBlockPtr = MonitorGetEdidBaseBlockPtr(v10, a2, v17, v18);
  if ( !EdidBaseBlockPtr )
  {
    LODWORD(v15) = -1073741823;
    goto LABEL_14;
  }
  *(_OWORD *)a3 = *EdidBaseBlockPtr;
  *((_OWORD *)a3 + 1) = EdidBaseBlockPtr[1];
  *((_OWORD *)a3 + 2) = EdidBaseBlockPtr[2];
  *((_OWORD *)a3 + 3) = EdidBaseBlockPtr[3];
  *((_OWORD *)a3 + 4) = EdidBaseBlockPtr[4];
  *((_OWORD *)a3 + 5) = EdidBaseBlockPtr[5];
  *((_OWORD *)a3 + 6) = EdidBaseBlockPtr[6];
  *((_OWORD *)a3 + 7) = EdidBaseBlockPtr[7];
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  return v9;
}
