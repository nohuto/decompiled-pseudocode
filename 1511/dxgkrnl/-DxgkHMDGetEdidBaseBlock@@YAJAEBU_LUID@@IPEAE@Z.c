/*
 * XREFs of ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0153B4C
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmIsTargetHMD @ 0x1C008DA30 (DmmIsTargetHMD.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AD40C (MonitorGetEdidBaseBlockPtr.c)
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
  _BYTE v20[64]; // [rsp+20h] [rbp-58h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
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
  if ( !*((_QWORD *)v10 + 248) )
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
