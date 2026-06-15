/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18002C87C
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180008C44 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18002D6AC (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        struct CHostedAppInteractivity **a3)
{
  struct CHostedAppInteractivity *v6; // rax
  int v7; // edx
  int v8; // ecx
  struct CHostedAppInteractivity *v9; // rbx
  __int64 v10; // r9
  int v11; // edi

  v6 = (struct CHostedAppInteractivity *)operator new(0x10uLL);
  v9 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = -1;
    *(_QWORD *)v6 = 0LL;
    *((_DWORD *)v6 + 3) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = a2;
    v10 = -1LL;
    do
      ++v10;
    while ( a1[v10] );
    v11 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, (_DWORD)a1, v10);
    if ( v11 >= 0 )
    {
      *a3 = v9;
      v9 = 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v9 )
    CHostedAppInteractivity::`scalar deleting destructor'((void **)v9);
  if ( v11 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      15LL,
      &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
      (unsigned int)v11);
  }
  return (unsigned int)v11;
}
