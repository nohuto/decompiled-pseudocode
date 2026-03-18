/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C0062120
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00611E8 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064D90 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0064FA0 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C0065090 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C0151820 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00966D4 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _BYTE v27[64]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  AdapterDefaultScaling = D3DKMDT_VPPS_STRETCHED;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v11 = v6;
  if ( v6 && *((_QWORD *)v6 + 247) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v24 + 24) = 5545LL;
      WdLogEvent5_WdAssertion(v24);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, *(_QWORD *)(*((_QWORD *)v11 + 247) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v11 + 247) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v11, 0LL);
      v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27);
      v21 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073741130 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
          v25[3] = -1073741130LL;
          v25[4] = v11;
          v25[5] = (int)HIDWORD(*(_QWORD *)((char *)v11 + 252));
          v25[6] = *((unsigned int *)v11 + 63);
          WdLogEvent5_WdWarning(v25);
        }
        else
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v26[3] = v21;
          v26[4] = v11;
          v26[5] = (int)HIDWORD(*(_QWORD *)((char *)v11 + 252));
          v26[6] = *((unsigned int *)v11 + 63);
          WdLogEvent5_WdError(v26);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64)&v28,
          *(_QWORD *)(*((_QWORD *)v11 + 247) + 88LL));
        v22 = *((_QWORD *)v11 + 247);
        if ( *(_BYTE *)(v22 + 133) )
          AdapterDefaultScaling = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v22 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v27);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    }
    DXGADAPTER::ReleaseReference(v11);
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v23 + 24) = a1->HighPart;
    *(_QWORD *)(v23 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v23);
  }
  *a2 = AdapterDefaultScaling;
}
