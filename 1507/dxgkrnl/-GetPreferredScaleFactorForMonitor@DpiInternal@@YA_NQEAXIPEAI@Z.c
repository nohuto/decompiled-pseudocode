/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z @ 0x1C00ABFB0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     MonitorGetPreferredScaleFactor @ 0x1C00AC014 (MonitorGetPreferredScaleFactor.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(
        DpiInternal *this,
        void *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  int PreferredScaleFactor; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  _QWORD *v13; // rax
  int v15; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (unsigned int)a2;
  PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, a2, &v15, a4);
  v12 = PreferredScaleFactor;
  if ( PreferredScaleFactor >= 0 )
  {
    *a3 = v15;
    return 1;
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v13[3] = this;
    v13[4] = v5;
    v13[5] = v12;
    return 0;
  }
}
