/*
 * XREFs of ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00AD4E8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C0165560 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryWin32DpiValues(unsigned int *a1, struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  int v4; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(int *); // rax
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(int *); // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+24h] [rbp-14h]
  unsigned int *v15; // [rsp+28h] [rbp-10h]

  v4 = -1073741275;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v6 = *((_QWORD *)Current + 10);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(int *))(v6 + 376);
    if ( v7 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0LL;
      if ( a1 && (v13 = 0, v14 = 4, v15 = a1, v4 = v7(&v13), v4 < 0) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v12 + 24) = 1747LL;
      }
      else
      {
        if ( !a2 )
          return (unsigned int)v4;
        v9 = *(__int64 (__fastcall **)(int *))(v6 + 376);
        v13 = 1;
        v14 = 32;
        v15 = (unsigned int *)a2;
        v4 = v9(&v13);
        if ( v4 >= 0 )
          return (unsigned int)v4;
        v12 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v12 + 24) = 1760LL;
      }
      WdLogEvent5_WdAssertion(v12);
    }
  }
  return (unsigned int)v4;
}
