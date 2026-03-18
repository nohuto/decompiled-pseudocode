/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C006202C
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00611E8 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C0065090 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00620CC (_EnforceDriverModelScalingPolicy.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _BYTE v25[72]; // [rsp+20h] [rbp-48h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v10 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v22 + 24) = 5680LL;
      WdLogEvent5_WdAssertion(v22);
      EnforceDriverModelScalingPolicy(v10, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v10, 0LL);
      v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
      v20 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073741130 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
          v23[3] = -1073741130LL;
          v23[4] = v10;
          v23[5] = (int)HIDWORD(*(_QWORD *)((char *)v10 + 252));
          v23[6] = *((unsigned int *)v10 + 63);
          WdLogEvent5_WdWarning(v23);
        }
        else
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v24[3] = v20;
          v24[4] = v10;
          v24[5] = (int)HIDWORD(*(_QWORD *)((char *)v10 + 252));
          v24[6] = *((unsigned int *)v10 + 63);
          WdLogEvent5_WdError(v24);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v10, a2);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v25);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
    }
    DXGADAPTER::ReleaseReference(v10);
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v21 + 24) = a1->HighPart;
    *(_QWORD *)(v21 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v21);
  }
}
