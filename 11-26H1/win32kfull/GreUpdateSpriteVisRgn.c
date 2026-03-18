/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1400384E0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140038CA0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140038CFC (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140038F00 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 *     ??$GrepReleaseLockValidate@$01@@YAXXZ @ 0x14006BBF4 (--$GrepReleaseLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC8B8 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall GreUpdateSpriteVisRgn(Gre::Base *a1, unsigned int a2)
{
  Gre::Base *v2; // rsi
  unsigned int v3; // r14d
  struct Gre::Base::SESSION_GLOBALS *v4; // r13
  HSEMAPHORE v5; // rdi
  Gre::Base *v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // r15d
  HSEMAPHORE v9; // rbx
  struct _GRETHREAD *v10; // rax
  Gre::Base **CurrentThreadWin32Thread; // rax
  Gre::Base *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  HSEMAPHORE v16; // rcx
  __int64 v17; // rcx
  Gre::Base *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rbx
  __int64 v22; // rsi
  HRGN *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  const struct tagWND **v32; // r14
  const struct tagWND *v33; // rdi
  __int64 v34; // rdx
  int v35; // edi
  bool v36; // zf
  bool v37; // cl
  BOOL v38; // esi
  __int64 v39; // r14
  void *v40; // rdi
  __int64 v41; // rdi
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  __int64 v43; // rdi
  const struct BaseRustGlobals *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // r12d
  tagObjLock **v59; // r14
  char Prop; // r14
  HSEMAPHORE v61; // rbx
  struct _GRETHREAD *v62; // rax
  Gre::Base *v63; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v64[38]; // [rsp+38h] [rbp-49h] BYREF
  __int16 v65; // [rsp+5Eh] [rbp-23h]
  int v66; // [rsp+60h] [rbp-21h]
  __int64 v67; // [rsp+64h] [rbp-1Dh]
  BOOL v68; // [rsp+6Ch] [rbp-15h]
  unsigned int v69; // [rsp+70h] [rbp-11h]
  Gre::Base *v70; // [rsp+78h] [rbp-9h] BYREF
  __int64 v71; // [rsp+80h] [rbp-1h]
  HSEMAPHORE v72; // [rsp+88h] [rbp+7h]
  Gre::Base *v73; // [rsp+90h] [rbp+Fh]
  int v74; // [rsp+98h] [rbp+17h] BYREF
  HSEMAPHORE v75; // [rsp+A0h] [rbp+1Fh] BYREF
  char v76; // [rsp+A8h] [rbp+27h]

  v2 = a1;
  v3 = a2;
  v69 = a2;
  v70 = a1;
  v4 = Gre::Base::Globals(a1);
  v5 = (HSEMAPHORE)(*(_QWORD *)v4 + 1144LL);
  v72 = v5;
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<2>();
  v8 = 0;
  if ( *((_QWORD *)Gre::Base::Globals(v6) + 28) )
  {
    v73 = v2;
    v74 = 0;
    CurrentThreadWin32Thread = (Gre::Base **)PsGetCurrentThreadWin32Thread(v7);
    if ( !CurrentThreadWin32Thread )
      goto LABEL_24;
    v12 = *CurrentThreadWin32Thread;
    v13 = 0LL;
    v36 = *CurrentThreadWin32Thread == 0LL;
    v14 = (__int64)*CurrentThreadWin32Thread + 8;
    if ( !v36 )
      v13 = v14;
    if ( !v13 || !*(_DWORD *)(v13 + 340) && !*(_DWORD *)(v13 + 344) )
    {
LABEL_24:
      v15 = Gre::Base::Globals(v12);
      GreAcquireSemaphore<6,>(v15);
      v74 = 1;
    }
    v16 = (HSEMAPHORE)(*(_QWORD *)v4 + 520LL);
    v76 = 0;
    v75 = v16;
    GreAcquireSemaphoreInternal(v16);
    GrepAcquireLockValidate<7>(v17);
    if ( !*((_QWORD *)Gre::Base::Globals(v18) + 28)
      || (v19 = *((_QWORD *)v4 + 28), v20 = *(_QWORD *)(v19 + 80), v20 == v19 + 80) )
    {
LABEL_53:
      SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v75);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v74);
      goto LABEL_2;
    }
    while ( 1 )
    {
      v21 = (__int64 *)(v20 - 24);
      if ( !v20 )
        v21 = 0LL;
      if ( !v21 )
      {
LABEL_52:
        v5 = v72;
        v2 = v70;
        v3 = v69;
        goto LABEL_53;
      }
      v22 = v21[5];
      if ( v22 )
        break;
LABEL_51:
      v19 = *((_QWORD *)v4 + 28);
      v20 = v21[3];
      if ( v20 == v19 + 80 )
        goto LABEL_52;
    }
    v23 = (HRGN *)(v19 + 184);
    v63 = (Gre::Base *)(v19 + 184);
    PsGetCurrentThreadWin32Thread(v20);
    v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19904);
    if ( (unsigned __int64)(unsigned __int16)v22 >= *(_QWORD *)(v27 + 8)
      || (UserSessionState = W32GetUserSessionState(v27, v26),
          v31 = *(_DWORD *)(W32GetUserSessionState(v30, v29) + 19928) * (unsigned int)(unsigned __int16)v22
              + *(_QWORD *)(UserSessionState + 19920),
          v32 = (const struct tagWND **)HMPkheFromPhe(v31),
          LOWORD(v22) = WORD1(v22) & 0x7FFF,
          (WORD1(v22) & 0x7FFF) != *(_WORD *)(v31 + 26))
      && (_WORD)v22 != 0x7FFF
      && ((_WORD)v22 || !PsGetCurrentProcessWow64Process())
      || (*(_BYTE *)(v31 + 25) & 1) != 0
      || *(_BYTE *)(v31 + 24) != 1
      || (v33 = *v32) == 0LL )
    {
      v35 = 0;
LABEL_47:
      v36 = v35 == 0;
LABEL_48:
      v37 = !v36;
      if ( !v36 != (v21[17] & 1) )
      {
        v38 = v37;
        *((_DWORD *)v21 + 34) = v37 | v21[17] & 0xFFFFFFFE;
        v39 = *v21;
        v40 = (void *)UserReferenceDwmApiPort();
        IncrementDWMWindowUniqueness();
        if ( v40 )
        {
          v65 = 0;
          *(_DWORD *)v64 = 3670032;
          v66 = 1073741831;
          *(_WORD *)&v64[4] = 0x8000;
          v67 = v39;
          memset(&v64[6], 0, 32);
          v68 = v38;
          EtwUpdateEvent(v39);
          LpcRequestPort(v40, v64);
          ObfDereferenceObject(v40);
        }
      }
      goto LABEL_51;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v33 + 5) + 232LL) & 2) == 0 || _GhostWindowFromHungWindow(*v32) )
      goto LABEL_37;
    v47 = W32GetUserSessionState(v46, v45);
    v48 = *((_QWORD *)v33 + 18);
    v71 = *(unsigned __int16 *)(v47 + 41400);
    v51 = W32GetUserSessionState(v50, v49);
    v64[8] = 0;
    *(_QWORD *)v64 = v51 + 42384;
    memset(&v64[16], 0, 17);
    LOBYTE(v66) = 0;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION(v53, v52) == 1 )
    {
      LOBYTE(v66) = 1;
      v56 = W32GetUserSessionState(v55, v54);
      v57 = 0LL;
      if ( v48 != v56 + 42480 )
        v57 = v48;
      *(_QWORD *)&v64[16] = v57;
      if ( !v64[32] )
      {
        v58 = 0;
        v59 = (tagObjLock **)&v64[16];
        do
        {
          if ( *v59 )
            tagObjLock::LockExclusive(*v59);
          ++v58;
          ++v59;
        }
        while ( !v58 );
        v23 = (HRGN *)v63;
        v64[32] = 1;
      }
    }
    Prop = RealGetProp(*((_QWORD *)v33 + 18), v71, 1LL);
    if ( v64[32] && (_BYTE)v66 && *(_QWORD *)&v64[16] )
      tagObjLock::UnLockExclusive(*(tagObjLock **)&v64[16]);
    if ( (Prop & 1) != 0 )
    {
LABEL_37:
      v34 = *((_QWORD *)v33 + 5);
      if ( (*(_BYTE *)(v34 + 26) & 0x20) != 0 )
      {
        if ( (*(_BYTE *)(v34 + 31) & 0x10) != 0 )
        {
          SetRectRgnIndirect(*v23, v34 + 88);
          v35 = 1;
        }
        else
        {
          v35 = 0;
        }
      }
      else
      {
        v35 = CalcVisRgn(v23);
      }
    }
    else
    {
      SetRectRgnIndirect(*v23, *((_QWORD *)v33 + 5) + 88LL);
      v35 = 1;
    }
    v36 = v35 == 0;
    if ( !v35 )
      goto LABEL_48;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v64, *(HRGN *)(*((_QWORD *)v4 + 28) + 184LL), 0, 0);
    if ( !*(_QWORD *)v64 )
    {
LABEL_42:
      if ( !HIDWORD(v67) )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v64);
      if ( *(_QWORD *)v64 )
        _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)v64 + 12LL));
      PopThreadGuardedObject(&v64[8]);
      goto LABEL_47;
    }
    if ( GetBaseRustGlobals() )
    {
      v41 = *(_QWORD *)v64 + 24LL;
      if ( !*(_QWORD *)v64 )
        v41 = 0LL;
      BaseRustGlobals = GetBaseRustGlobals();
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)BaseRustGlobals + 32LL))(v41) != 1 )
      {
LABEL_58:
        v35 = 1;
        goto LABEL_42;
      }
    }
    else
    {
      v43 = *(_QWORD *)v64;
      if ( *(_DWORD *)(*(_QWORD *)v64 + 48LL) != 1 )
      {
        if ( GetBaseRustGlobals() )
        {
          v44 = GetBaseRustGlobals();
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 176LL))(v43 + 24);
        }
        goto LABEL_58;
      }
    }
    v35 = 0;
    goto LABEL_42;
  }
LABEL_2:
  v63 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v70, (struct PDEVOBJ *)&v63);
  if ( ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v2 + 25)) )
  {
    if ( !*((_BYTE *)v2 + 208) )
    {
      v61 = (HSEMAPHORE)*((_QWORD *)v2 + 25);
      EtwTraceGreLockReleaseSemaphore(L"SpriteRangeLock", v61);
      v62 = GreGetCurrentThreadCrossSessionCheck();
      if ( v62 )
      {
        v36 = (*((_BYTE *)v62 + 17))-- == 1;
        if ( v36 )
          *(_QWORD *)v62 &= ~0x200uLL;
        if ( !*(_QWORD *)v62 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v61);
    }
    v9 = (HSEMAPHORE)*((_QWORD *)v63 + 6);
    GreAcquireSemaphoreInternal(v9);
    GrepAcquireLockValidate<8>();
    SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)v2 + 25);
  }
  else
  {
    v9 = (HSEMAPHORE)*((_QWORD *)v63 + 6);
    GreAcquireSemaphoreInternal(v9);
    GrepAcquireLockValidate<8>();
  }
  if ( *((_DWORD *)v2 + 35) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*((_QWORD *)v2 + 18) + 8LL * v8++), v3);
    while ( v8 < *((_DWORD *)v2 + 35) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*((HDEV *)v2 + 10), v3);
  }
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v9);
    v10 = GreGetCurrentThreadCrossSessionCheck();
    if ( v10 )
    {
      v36 = (*((_BYTE *)v10 + 16))-- == 1;
      if ( v36 )
        *(_QWORD *)v10 &= ~0x100uLL;
      if ( !*(_QWORD *)v10 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v9);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v70);
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v5);
    GrepReleaseLockValidate<2>();
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
}
