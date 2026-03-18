/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C018D1A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0028E94 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00BAB24 (-LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00D9C74 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C018D024 (-WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  int Win32DpiValues; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // ecx
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v15, 0, 0x20uLL);
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v15);
  v10 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v15);
    LODWORD(v10) = WriteDpiToRegistry(a1, a2, a3);
    if ( (int)v10 >= 0 )
    {
      v13 = dword_1C0056E04;
      if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
        v13 = a3;
      dword_1C0056E04 = v13;
    }
    LogScaleFactor(a2, 0, a4);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v12);
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
