/*
 * XREFs of ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00C4084
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00A2B34 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmIsTargetHMD @ 0x1C008DA30 (DmmIsTargetHMD.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

char __fastcall DxgkIsTargetHMD(const struct _LUID *a1, unsigned int a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rcx
  char IsTargetHMD; // di
  DXGADAPTER *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD *v13; // rax
  __int64 LowPart; // rcx
  _QWORD *v15; // rax
  _BYTE v16[64]; // [rsp+20h] [rbp-48h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  IsTargetHMD = 0;
  v8 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v5, 0LL);
    DXGADAPTER::ReleaseReference(v8);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16);
    v11 = v9;
    if ( v9 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v13[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v13[5] = v11;
    }
    else
    {
      if ( *((_QWORD *)v8 + 248) )
      {
        IsTargetHMD = DmmIsTargetHMD(v8, a2);
LABEL_5:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
        return IsTargetHMD;
      }
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v13[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v13[5] = -1073741811LL;
    }
    v13[4] = LowPart;
    WdLogEvent5_WdError(v13);
    goto LABEL_5;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v15[3] = a1->HighPart;
  v15[4] = a1->LowPart;
  v15[5] = -1073741811LL;
  WdLogEvent5_WdError(v15);
  return 0;
}
