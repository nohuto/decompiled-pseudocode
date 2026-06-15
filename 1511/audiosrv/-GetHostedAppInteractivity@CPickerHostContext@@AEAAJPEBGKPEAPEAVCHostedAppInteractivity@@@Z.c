/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180032520
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001D080 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x1800302D8 (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180032810 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        const unsigned __int16 *a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity **v4; // r14
  int Instance; // ebx
  _QWORD *v9; // rsi
  CHostedAppInteractivity *v10; // rdi
  unsigned int v12; // edx
  CHostedAppInteractivity *v13[2]; // [rsp+20h] [rbp-48h] BYREF
  ATL::CAtlException *v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+8h]

  v13[1] = (CHostedAppInteractivity *)-2LL;
  v4 = a4;
  Instance = 0;
  v13[0] = 0LL;
  v9 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    while ( 1 )
    {
      v10 = (CHostedAppInteractivity *)v9[2];
      v9 = (_QWORD *)*v9;
      v13[0] = v10;
      if ( *((_DWORD *)v10 + 2) == a3 && !_wcsicmp(*(const wchar_t **)v10, a2) )
        break;
      if ( !v9 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    Instance = CHostedAppInteractivity::CreateInstance(a2, a3, v13);
    if ( Instance < 0 )
      goto LABEL_13;
    Instance = 0;
    try
    {
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(this, v13);
    }
    catch ( ATL::CAtlException *v14 )
    {
      __eh34_catch_handler_absent(0, 0, CPickerHostContext::GetHostedAppInteractivity_::_1_::catch_0);
      Instance = v15;
      if ( v15 < 0 )
      {
LABEL_13:
        if ( !v13[0] )
          goto LABEL_5;
        CHostedAppInteractivity::`scalar deleting destructor'(v13[0], v12);
        goto LABEL_5;
      }
      v4 = a4;
    }
    v10 = v13[0];
  }
  *v4 = v10;
LABEL_5:
  if ( Instance < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
      (unsigned int)Instance);
  }
  return (unsigned int)Instance;
}
