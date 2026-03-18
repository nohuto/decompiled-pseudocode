/*
 * XREFs of GreGetSpriteAttributes @ 0x140041B20
 * Callers:
 *     zzzUpdateShadowAlpha @ 0x140011CCC (zzzUpdateShadowAlpha.c)
 *     _GetLayeredWindowAttributes @ 0x1400420F0 (_GetLayeredWindowAttributes.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400831B0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x140041CB0 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSpriteAttributes(
        Gre::Base *a1,
        Gre::Base *a2,
        __int64 a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6,
        int a7)
{
  unsigned int v7; // ebx
  int v11; // ebp
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rsi
  void *v14; // r8
  Gre::Base *v15; // rcx
  Gre::Base *v16; // rcx
  __int64 v17; // rsi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  _BYTE v22[32]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v23[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v24; // [rsp+70h] [rbp-38h]

  v7 = 0;
  v11 = 1;
  v13 = Gre::Base::Globals(a1);
  if ( !a7 || !IsDwmActive(v12) )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, (HWND)a2, v14, a4, a5, a6);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON(v22, v13, a1, 0LL);
  if ( IsDwmActive(v15) )
  {
    v11 = 0;
    memset(v23, 0, sizeof(v23));
    PushThreadGuardedObject(
      v23,
      v23,
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
    v24 = 0LL;
    if ( a2 )
    {
      v17 = DWMSPRITEREF::hspLookupWindow(a2);
      if ( v17 )
      {
        v18 = Gre::Base::Globals(v16);
        LOBYTE(v19) = 15;
        v20 = HmgLock(v18, v17, v19, 0LL);
        v24 = v20;
      }
      else
      {
        v20 = v24;
      }
      if ( v20 )
      {
        v7 = 1;
        *a4 = *(_DWORD *)(v20 + 80);
        *a5 = *(struct _BLENDFUNCTION *)(v20 + 76);
        *a6 = *(_DWORD *)(v20 + 72);
        _InterlockedDecrement16((volatile signed __int16 *)(v20 + 12));
      }
    }
    v24 = 0LL;
    PopThreadGuardedObject(v23);
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v22);
  if ( v11 )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, (HWND)a2, v14, a4, a5, a6);
  return v7;
}
