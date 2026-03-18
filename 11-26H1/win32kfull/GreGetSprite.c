/*
 * XREFs of GreGetSprite @ 0x14014B798
 * Callers:
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSprite(Gre::Base *a1, Gre::Base *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  __int64 v8; // rdi
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  _BYTE v14[32]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  v5 = (__int64 *)Gre::Base::Globals(a1);
  if ( IsDwmActive(v6) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v14, v5, (__int64)a1, 0);
    if ( IsDwmActive(v7) )
    {
      memset(v15, 0, sizeof(v15));
      PushThreadGuardedObject(
        v15,
        v15,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v16 = 0LL;
      v8 = DWMSPRITEREF::hspLookupWindow(a2);
      v10 = Gre::Base::Globals(v9);
      if ( v8 )
      {
        LOBYTE(v11) = 15;
        v12 = HmgLock(v10, v8, v11, 0LL);
        v16 = v12;
      }
      else
      {
        v12 = v16;
      }
      if ( v12 )
      {
        v4 = *(_QWORD *)v12;
        _InterlockedDecrement16((volatile signed __int16 *)(v12 + 12));
      }
      v16 = 0LL;
      PopThreadGuardedObject(v15);
    }
    ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v14);
  }
  return v4;
}
