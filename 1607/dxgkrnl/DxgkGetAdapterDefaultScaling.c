/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C00D5CD0
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008B754 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008B998 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C008BB94 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D58F0 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C017A490 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C0085248 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  _BYTE v24[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF

  AdapterDefaultScaling = 3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v25);
  v11 = v6;
  if ( v6 && *((_QWORD *)v6 + 266) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v21 + 24) = 6285LL;
      WdLogEvent5_WdAssertion(v21);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, *(_QWORD *)(*((_QWORD *)v11 + 266) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v11 + 266) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
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
          v22[5] = *((int *)v11 + 68);
          v22[6] = *((unsigned int *)v11 + 67);
          WdLogEvent5_WdWarning(v22);
        }
        else
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v23[3] = v18;
          v23[4] = v11;
          v23[5] = *((int *)v11 + 68);
          v23[6] = *((unsigned int *)v11 + 67);
          WdLogEvent5_WdError(v23);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64)&v25,
          *(_QWORD *)(*((_QWORD *)v11 + 266) + 88LL));
        v19 = *((_QWORD *)v11 + 266);
        if ( *(_BYTE *)(v19 + 133) )
          AdapterDefaultScaling = 4;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v19 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v24);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
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
