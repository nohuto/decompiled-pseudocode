/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180007CE8
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000E4F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18000E5C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CDuckingNotification::Init(
        CDuckingNotification *this,
        int a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // r15
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0;
  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  v7 = operator new(0x18uLL);
  v8 = v7;
  if ( v7 )
  {
    v7[2] = 1;
    *(_QWORD *)v7 = ATL::Sids::SecurityNTAuthority.SubAuthority;
    v7[4] = 0;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 3));
  *((_QWORD *)this + 3) = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
LABEL_11:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        29LL,
        &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        v6);
    }
    return v6;
  }
  if ( !a3 )
    return v6;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 16, a3);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _resetstkoflw();
    v6 = *(_DWORD *)v11;
    if ( *(int *)v11 < 0 )
      goto LABEL_11;
  }
  return v6;
}
