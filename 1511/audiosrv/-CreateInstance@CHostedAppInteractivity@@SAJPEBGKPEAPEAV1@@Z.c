/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x1800302D8
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180032520 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        struct CHostedAppInteractivity **a3)
{
  struct CHostedAppInteractivity *v6; // rax
  unsigned int v7; // edx
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
    CHostedAppInteractivity::`scalar deleting destructor'(v9, v7);
  if ( v11 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
      (unsigned int)v11);
  }
  return (unsigned int)v11;
}
