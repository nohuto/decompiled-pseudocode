/*
 * XREFs of sub_1C0052570 @ 0x1C0052570
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0050C50 (DrvEnumDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00BAE0C (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BCAD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0052548 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C005265C (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0052570(__int64 a1, struct _D3DKMT_GETPATHSMODALITY **a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bp
  unsigned int v5; // esi
  int v7; // r14d
  unsigned __int16 v8; // ax
  struct _D3DKMT_GETPATHSMODALITY *v9; // rax
  int v10; // eax
  int v11; // ebx
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  unsigned __int16 v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = a1;
  if ( (_DWORD)a3 == 32 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = 8;
  v16 = 8;
  do
  {
    if ( !*a2 )
    {
      v9 = AllocPathsModality(v8);
      *a2 = v9;
      if ( !v9 )
      {
        v15 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v15 + 24) = v16;
        WdLogEvent5_WdError(v15);
        return 3221225495LL;
      }
    }
    v10 = qword_1C01040F8(v5, *a2, &v16);
    v11 = v10;
    if ( v10 == -1073741789 || v10 >= 0 && v4 + *((unsigned __int16 *)*a2 + 10) > *((unsigned __int16 *)*a2 + 11) )
    {
      FreePathsModality(*a2);
      v14 = v16;
      v11 = -1073741789;
      *a2 = 0LL;
      v8 = v4 + v14;
      v16 = v8;
    }
    else
    {
      v8 = v16;
    }
  }
  while ( v11 == -1073741789 );
  if ( v11 < 0 )
    goto LABEL_16;
  if ( v7 )
    v11 = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *))qword_1C0104100)(v5 & 0x28000, *a2);
  if ( v11 < 0 )
  {
LABEL_16:
    FreePathsModality(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v11;
}
