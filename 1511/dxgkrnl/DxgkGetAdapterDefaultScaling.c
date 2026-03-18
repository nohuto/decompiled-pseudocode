/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C00AE2A0
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A33EC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A3630 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00A382C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ACF30 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C0155A70 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C008DD14 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, int *a2)
{
  int AdapterDefaultScaling; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _BYTE v24[64]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  AdapterDefaultScaling = 3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v11 = v6;
  if ( v6 && *((_QWORD *)v6 + 248) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v21 + 24) = 5948LL;
      WdLogEvent5_WdAssertion(v21);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, *(_QWORD *)(*((_QWORD *)v11 + 248) + 112LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v11 + 248) + 112LL));
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v25 + 40));
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v11, 0LL);
      v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
      v18 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741130 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
          v22[3] = -1073741130LL;
          v22[4] = v11;
          v22[5] = (int)HIDWORD(*(_QWORD *)((char *)v11 + 252));
          v22[6] = *((unsigned int *)v11 + 63);
          WdLogEvent5_WdWarning(v22);
        }
        else
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v23[3] = v18;
          v23[4] = v11;
          v23[5] = (int)HIDWORD(*(_QWORD *)((char *)v11 + 252));
          v23[6] = *((unsigned int *)v11 + 63);
          WdLogEvent5_WdError(v23);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64)&v25,
          *(_QWORD *)(*((_QWORD *)v11 + 248) + 112LL));
        v19 = *((_QWORD *)v11 + 248);
        if ( *(_BYTE *)(v19 + 157) )
          AdapterDefaultScaling = 4;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v19 + 112));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v24);
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v25 + 40));
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    }
    DXGADAPTER::ReleaseReference(v11);
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = a1->HighPart;
    *(_QWORD *)(v20 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v20);
  }
  *a2 = AdapterDefaultScaling;
}
