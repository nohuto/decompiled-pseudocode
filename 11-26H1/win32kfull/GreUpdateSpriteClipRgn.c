/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x14014CB00
 * Callers:
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x14009FF5C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     UserGetWindowRect @ 0x14014C77C (UserGetWindowRect.c)
 */

void __fastcall GreUpdateSpriteClipRgn(Gre::Base *a1, Gre::Base *a2, HRGN a3, int a4)
{
  __int64 *v8; // rax
  Gre::Base *v9; // rcx
  __int64 v10; // rbx
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rsi
  RGNOBJ *v16; // rcx
  struct _POINTL v17; // [rsp+28h] [rbp-59h] BYREF
  __int64 v18; // [rsp+30h] [rbp-51h] BYREF
  _OWORD v19[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int128 v21; // [rsp+60h] [rbp-21h] BYREF
  __int64 v22; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v23[40]; // [rsp+78h] [rbp-9h] BYREF
  int v24; // [rsp+A0h] [rbp+1Fh]
  _BYTE v25[32]; // [rsp+A8h] [rbp+27h] BYREF

  v8 = (__int64 *)Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v25, v8, (__int64)a1, 0);
  if ( !IsDwmActive(v9) )
    goto LABEL_34;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v22, a3, 0, 0);
  memset(v19, 0, sizeof(v19));
  PushThreadGuardedObject(
    v19,
    v19,
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  v20 = 0LL;
  v10 = DWMSPRITEREF::hspLookupWindow(a2);
  v12 = Gre::Base::Globals(v11);
  if ( v10 )
  {
    LOBYTE(v13) = 15;
    v20 = HmgLock(v12, v10, v13, 0LL);
  }
  v14 = v20;
  if ( v20 )
  {
    if ( v20 != -88 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 88));
    v15 = *(_QWORD *)(v14 + 144);
    if ( v15 != -256 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 256));
    if ( v22 && (unsigned int)UserGetWindowRect(*(_QWORD *)(v14 + 40), &v21) )
    {
      if ( !*(_QWORD *)(v15 + 88) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
        if ( v17 )
          *(struct _POINTL *)(v15 + 88) = v17;
      }
      if ( !*(_QWORD *)(v15 + 88) )
        goto LABEL_21;
      v18 = *(_QWORD *)(v15 + 88);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v22) )
        goto LABEL_21;
      v17.x = -(int)v21;
      v17.y = -DWORD1(v21);
      if ( RGNOBJ::bOffset((RGNOBJ *)&v18, &v17) )
      {
        if ( (*(_DWORD *)(v14 + 136) & 0x20) != 0 )
          RGNOBJ::vScale(
            &v18,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v14 + 128), (__m128)*(unsigned int *)(v14 + 132)).m128_u64[0]);
        *(_QWORD *)(v15 + 88) = v18;
        goto LABEL_20;
      }
      v16 = (RGNOBJ *)&v18;
    }
    else
    {
      if ( !*(_QWORD *)(v15 + 88) )
        goto LABEL_21;
      v17 = *(struct _POINTL *)(v15 + 88);
      v16 = (RGNOBJ *)&v17;
    }
    RGNOBJ::vDeleteRGNOBJ(v16);
    *(_QWORD *)(v15 + 88) = 0LL;
LABEL_20:
    *(_DWORD *)(v15 + 252) |= 0x20u;
LABEL_21:
    if ( v15 != -256 )
      GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 256));
    if ( (*(_DWORD *)(v15 + 252) & 1) == 0 || !a4 )
      vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v15);
    if ( v14 != -88 )
      GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v14 + 88));
    if ( v20 )
      _InterlockedDecrement16((volatile signed __int16 *)(v20 + 12));
  }
  v20 = 0LL;
  PopThreadGuardedObject(v19);
  if ( !v24 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v22);
  if ( v22 )
    _InterlockedDecrement16((volatile signed __int16 *)(v22 + 12));
  PopThreadGuardedObject(v23);
LABEL_34:
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v25);
}
