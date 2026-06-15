/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180015360
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180015258 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18000FD8C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x1800154A0 (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity **v4; // r14
  int Instance; // ebx
  _QWORD *v9; // rsi
  struct CHostedAppInteractivity *v10; // rdi
  LPVOID *v11; // rdi
  __int64 result; // rax
  ATL::CAtlException *v13; // rbx
  struct CHostedAppInteractivity *v14[2]; // [rsp+20h] [rbp-48h] BYREF
  ATL::CAtlException *v15; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+70h] [rbp+8h]

  v14[1] = (struct CHostedAppInteractivity *)-2LL;
  v4 = a4;
  Instance = 0;
  v14[0] = 0LL;
  v9 = *(_QWORD **)this;
  while ( v9 )
  {
    v10 = (struct CHostedAppInteractivity *)v9[2];
    v9 = (_QWORD *)*v9;
    v14[0] = v10;
    if ( *((_DWORD *)v10 + 2) == a3 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v10, a2) )
      goto LABEL_10;
  }
  Instance = CHostedAppInteractivity::CreateInstance(a2, a3, v14);
  if ( Instance < 0 )
    goto LABEL_11;
  Instance = 0;
  try
  {
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (__int64 *)this,
      v14);
  }
  catch ( ATL::CAtlException *v15 )
  {
    v13 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _o__resetstkoflw();
    v16 = *(_DWORD *)v13;
    Instance = *(_DWORD *)v13;
    if ( v16 >= 0 )
    {
      v4 = a4;
      goto LABEL_9;
    }
LABEL_11:
    v11 = (LPVOID *)v14[0];
LABEL_12:
    if ( v11 )
    {
      if ( *v11 )
      {
        CoTaskMemFree(*v11);
        *v11 = 0LL;
      }
      operator delete(v11, 0x10uLL);
    }
    if ( Instance < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, Instance);
      }
      AudPolicyLogError("CPickerHostContext::GetHostedAppInteractivity", 250, Instance);
    }
    result = (unsigned int)Instance;
  }
LABEL_9:
  v10 = v14[0];
LABEL_10:
  *v4 = v10;
  v11 = 0LL;
  goto LABEL_12;
}
