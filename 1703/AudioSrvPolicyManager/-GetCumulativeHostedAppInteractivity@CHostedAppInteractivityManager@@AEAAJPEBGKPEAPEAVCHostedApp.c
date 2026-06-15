/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800156DC
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800155B0 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18000FD8C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x1800154A0 (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity **v4; // r14
  int Instance; // ebx
  _QWORD *v8; // rsi
  struct CHostedAppInteractivity *v9; // rdi
  LPVOID *v10; // rdi
  __int64 result; // rax
  ATL::CAtlException *v12; // rbx
  struct CHostedAppInteractivity *v13[2]; // [rsp+20h] [rbp-48h] BYREF
  ATL::CAtlException *v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+8h]

  v13[1] = (struct CHostedAppInteractivity *)-2LL;
  v4 = a4;
  Instance = 0;
  v13[0] = 0LL;
  v8 = (_QWORD *)qword_180031D38;
  while ( v8 )
  {
    v9 = (struct CHostedAppInteractivity *)v8[2];
    v8 = (_QWORD *)*v8;
    v13[0] = v9;
    if ( *((_DWORD *)v9 + 2) == a3 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v9, a2) )
      goto LABEL_10;
  }
  Instance = CHostedAppInteractivity::CreateInstance(a2, a3, (unsigned __int16 ***)v13);
  if ( Instance < 0 )
    goto LABEL_11;
  Instance = 0;
  try
  {
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      &qword_180031D38,
      v13);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v12 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v12;
    Instance = *(_DWORD *)v12;
    if ( v15 >= 0 )
    {
      v4 = a4;
      goto LABEL_9;
    }
LABEL_11:
    v10 = (LPVOID *)v13[0];
LABEL_12:
    if ( v10 )
    {
      if ( *v10 )
      {
        CoTaskMemFree(*v10);
        *v10 = 0LL;
      }
      operator delete(v10, 0x10uLL);
    }
    if ( Instance < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, Instance);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 453, Instance);
    }
    result = (unsigned int)Instance;
  }
LABEL_9:
  v9 = v13[0];
LABEL_10:
  *v4 = v9;
  v10 = 0LL;
  goto LABEL_12;
}
