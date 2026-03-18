/*
 * XREFs of GreGetRandomRgn @ 0x14012C450
 * Callers:
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x14003EDBC (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     _ExcludeUpdateRgn @ 0x14004092C (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x14011FA9C (DrawTextExWorker.c)
 *     NtGdiGetRandomRgn @ 0x14012C3D0 (NtGdiGetRandomRgn.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140083168 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     UserGetRedirectedWindowOrigin @ 0x14012E4D0 (UserGetRedirectedWindowOrigin.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     _GreGetRandomRgn_::_2_::_lambda_1_::operator() @ 0x1401D13FC (_GreGetRandomRgn_--_2_--_lambda_1_--operator().c)
 */

__int64 __fastcall GreGetRandomRgn(Gre::Base *a1, HRGN a2, int a3)
{
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // edi
  struct _POINTL v13; // rcx
  int v14; // eax
  int v15; // edi
  int v17; // edi
  int v18; // edi
  GreInnermostPushLock *v19; // rsi
  GreInnermostPushLock *v20; // rcx
  GreInnermostPushLock *v21; // r14
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v26[40]; // [rsp+28h] [rbp-D8h] BYREF
  int v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  DC *v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  struct Gre::Base::SESSION_GLOBALS *v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  _OWORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v34[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v37[160]; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTL v38; // [rsp+1C8h] [rbp+C8h] BYREF

  v31 = Gre::Base::Globals(a1);
  memset(v33, 0, sizeof(v33));
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0;
  PushThreadGuardedObject(
    v33,
    &v29,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  v6 = 1;
  LOBYTE(v7) = 1;
  v8 = HmgLock(v31, a1, v7, 0LL);
  v10 = -1;
  v29 = (DC *)v8;
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 2136) )
    {
      _InterlockedAdd16((volatile signed __int16 *)(v8 + 12), 0xFFFFu);
      v29 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(v9) != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v29 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v29) )
    {
      if ( (*((_DWORD *)v29 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v29);
    }
    else
    {
      _InterlockedAdd16((volatile signed __int16 *)v29 + 6, 0xFFFFu);
      v29 = 0LL;
    }
  }
  memset(v34, 0, sizeof(v34));
  PushThreadGuardedObject(v34, &v29, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v35 = 1;
  if ( !v29 )
    goto LABEL_29;
  if ( *((_WORD *)v29 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_WORD *)v29 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v29);
  if ( !v29 )
  {
LABEL_29:
    EngSetLastError(6u);
    goto LABEL_28;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v37, (struct XDCOBJ *)&v29, 1) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v25, a2, 0, 0);
    v11 = v25;
    if ( !v25 )
    {
      if ( !v27 )
      {
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v25);
        if ( v25 )
          _InterlockedAdd16((volatile signed __int16 *)(v25 + 12), 0xFFFFu);
      }
      goto LABEL_26;
    }
    if ( a3 == 4 )
    {
      if ( (*((_DWORD *)v29 + 9) & 0x4000) != 0 )
      {
        v21 = (DC *)((char *)v29 + 1112);
        GreInnermostPushLock::AcquireLockShared((DC *)((char *)v29 + 1112));
        v28 = *((_QWORD *)v29 + 142);
        if ( v28 )
        {
          v22 = RGNOBJAPI::bCopy((RGNOBJAPI *)&v25, (struct RGNOBJ *)&v28);
          v15 = v22 != 0 ? 1 : -1;
          if ( v22 )
          {
            GreInnermostPushLock::ReleaseLock(v21);
            v38 = 0LL;
            if ( !(unsigned int)UserGetRedirectedWindowOrigin(a1, &v38) || !RGNOBJ::bOffset((RGNOBJ *)&v25, &v38) )
              v6 = -1;
            if ( !v27 )
              RGNOBJ::UpdateUserRgn((RGNOBJ *)&v25);
            if ( v25 )
              _InterlockedAdd16((volatile signed __int16 *)(v25 + 12), 0xFFFFu);
            v10 = v6;
            goto LABEL_26;
          }
        }
        else
        {
          v15 = 0;
        }
        v20 = v21;
        goto LABEL_45;
      }
LABEL_42:
      v19 = (DC *)((char *)v29 + 1112);
      GreInnermostPushLock::AcquireLockShared((DC *)((char *)v29 + 1112));
      v38 = (struct _POINTL)*((_QWORD *)v29 + 142);
      if ( v38 )
        v15 = RGNOBJAPI::bCopy((RGNOBJAPI *)&v25, (struct RGNOBJ *)&v38) != 0 ? 1 : -1;
      else
        v15 = 0;
      v20 = v19;
LABEL_45:
      GreInnermostPushLock::ReleaseLock(v20);
      if ( !v27 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v25);
      if ( v25 )
        _InterlockedAdd16((volatile signed __int16 *)(v25 + 12), 0xFFFFu);
      goto LABEL_25;
    }
    v12 = a3 - 1;
    if ( !v12 )
    {
      v13 = (struct _POINTL)*((_QWORD *)v29 + 20);
LABEL_19:
      v38 = v13;
      if ( v13 )
      {
        v14 = RGNOBJAPI::bCopy((RGNOBJAPI *)&v25, (struct RGNOBJ *)&v38);
        v11 = v25;
        v15 = v14 != 0 ? 1 : -1;
      }
      else
      {
        v15 = 0;
      }
      if ( !v27 )
      {
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v25);
        v11 = v25;
      }
      if ( v11 )
        _InterlockedAdd16((volatile signed __int16 *)(v11 + 12), 0xFFFFu);
LABEL_25:
      v10 = v15;
LABEL_26:
      PopThreadGuardedObject(v26);
      goto LABEL_27;
    }
    v17 = v12 - 1;
    if ( !v17 )
    {
      v13 = (struct _POINTL)*((_QWORD *)v29 + 21);
      goto LABEL_19;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( (unsigned int)(v18 - 1) >= 2 )
      {
        if ( !v27 )
        {
          RGNOBJ::UpdateUserRgn((RGNOBJ *)&v25);
          v11 = v25;
        }
        if ( v11 )
          _InterlockedAdd16((volatile signed __int16 *)(v11 + 12), 0xFFFFu);
        v10 = 0;
        goto LABEL_26;
      }
      goto LABEL_42;
    }
    v23 = *((_QWORD *)v29 + 21);
    v24 = *((_QWORD *)v29 + 20);
    if ( v23 )
    {
      if ( v24 )
      {
        v36 = *((_QWORD *)v29 + 20);
        v28 = v23;
        v10 = RGNOBJAPI::iCombine((RGNOBJAPI *)&v25, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v28, 1) != 0 ? 1 : -1;
LABEL_73:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v25);
        goto LABEL_27;
      }
    }
    else if ( v24 )
    {
      v23 = *((_QWORD *)v29 + 20);
    }
    v10 = GreGetRandomRgn_::_2_::_lambda_1_::operator()(v24, &v25, v23);
    goto LABEL_73;
  }
LABEL_27:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
LABEL_28:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v29);
  return v10;
}
