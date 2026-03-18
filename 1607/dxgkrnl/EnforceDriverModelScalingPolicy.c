/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C00D5AF4
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C008BB94 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D58F0 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00D5B9C (_EnforceDriverModelScalingPolicy.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGADAPTER *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _BYTE v22[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v23);
  v10 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v19 + 24) = 6421LL;
      WdLogEvent5_WdAssertion(v19);
      EnforceDriverModelScalingPolicy(v10, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v10, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
      v17 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073741130 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          v20[3] = -1073741130LL;
          v20[4] = v10;
          v20[5] = *((int *)v10 + 68);
          v20[6] = *((unsigned int *)v10 + 67);
          WdLogEvent5_WdWarning(v20);
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v21[3] = v17;
          v21[4] = v10;
          v21[5] = *((int *)v10 + 68);
          v21[6] = *((unsigned int *)v10 + 67);
          WdLogEvent5_WdError(v21);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v10, a2);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v22);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
    }
    DXGADAPTER::ReleaseReference(v10);
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v18 + 24) = a1->HighPart;
    *(_QWORD *)(v18 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v18);
  }
}
