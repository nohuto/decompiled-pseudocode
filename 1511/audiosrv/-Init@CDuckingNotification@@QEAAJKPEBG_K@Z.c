/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18003294C
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002B6F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002B7C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CDuckingNotification::Init(CDuckingNotification *this, int a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rsi
  __int64 v11; // r15
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0;
  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  v7 = operator new(0x18uLL);
  v10 = v7;
  if ( v7 )
  {
    v7[2] = 1;
    *(_QWORD *)v7 = &CDuckingNotification::CSharedNotificationData::`vftable';
    v7[4] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*((_QWORD *)this + 3));
  *((_QWORD *)this + 3) = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
LABEL_11:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v6);
    }
    return v6;
  }
  if ( !a3 )
    return v6;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this + 2, a3, v8, v9);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v13 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _resetstkoflw();
    v6 = *(_DWORD *)v13;
    if ( *(int *)v13 < 0 )
      goto LABEL_11;
  }
  return v6;
}
