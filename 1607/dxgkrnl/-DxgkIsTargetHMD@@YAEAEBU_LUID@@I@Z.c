/*
 * XREFs of ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00D9624
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C008AE98 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DmmIsTargetHMD @ 0x1C007B5F8 (DmmIsTargetHMD.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkIsTargetHMD(const struct _LUID *a1, unsigned int a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rcx
  char IsTargetHMD; // di
  DXGADAPTER *v8; // rsi
  DXGADAPTER *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *v14; // rax
  __int64 LowPart; // rcx
  _QWORD *v16; // rax
  _BYTE v17[80]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+A0h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v18);
  IsTargetHMD = 0;
  v8 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v5, 0LL);
    DXGADAPTER::ReleaseReference(v9);
    v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
    v12 = v10;
    if ( v10 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v14[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v14[5] = v12;
    }
    else
    {
      if ( *((_QWORD *)v8 + 266) )
      {
        IsTargetHMD = DmmIsTargetHMD(v8, a2);
LABEL_5:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
        return IsTargetHMD;
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v14[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v14[5] = -1073741811LL;
    }
    v14[4] = LowPart;
    WdLogEvent5_WdError(v14);
    goto LABEL_5;
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v16[3] = a1->HighPart;
  v16[4] = a1->LowPart;
  v16[5] = -1073741811LL;
  WdLogEvent5_WdError(v16);
  return 0;
}
