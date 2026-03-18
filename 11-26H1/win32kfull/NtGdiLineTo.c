/*
 * XREFs of NtGdiLineTo @ 0x14006DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x14006E5A0 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x140326118 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x140326140 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x140326204 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x140344A74 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiLineTo(Gre::Base *a1, int a2, int a3)
{
  int v6; // r15d
  __int64 v7; // r8
  __int64 v8; // rax
  DC *v9; // rcx
  unsigned int CurrentProcessId; // eax
  DC *v11; // rbx
  unsigned int v12; // edi
  char *v13; // rsi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  DC *v18; // rcx
  unsigned int v19; // eax
  DC *v20; // rbx
  unsigned int v21; // esi
  char *v22; // rdi
  struct _DC_ATTR *v23; // rax
  __int64 v25; // rax
  DC *v26; // [rsp+20h] [rbp-E0h] BYREF
  int v27; // [rsp+28h] [rbp-D8h]
  struct Gre::Base::SESSION_GLOBALS *v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  _OWORD v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  _BYTE v34[24]; // [rsp+B0h] [rbp-50h] BYREF
  DC **v35; // [rsp+C8h] [rbp-38h]

  v6 = 0;
  v29 = 0LL;
  v28 = Gre::Base::Globals(a1);
  v26 = 0LL;
  v27 = 0;
  memset(v30, 0, sizeof(v30));
  PushThreadGuardedObject(
    v30,
    &v26,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v7) = 1;
  v8 = HmgLock(v28, a1, v7, 0LL);
  v26 = (DC *)v8;
  v9 = (DC *)v8;
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v8 + 12));
      v9 = 0LL;
      v26 = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
      GrepAuditBehaviorRestrictionViolations(1LL);
    v9 = v26;
  }
  if ( v9 )
  {
    if ( (*((_DWORD *)v9 + 11) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v11 = v26;
      v12 = CurrentProcessId & 0xFFFFFFFC;
      if ( *(_QWORD *)v26 )
      {
        v13 = (char *)HmgPentryFromPobj(v28, v26);
      }
      else
      {
        v13 = (char *)v26 + 2152;
        *(_OWORD *)((char *)v26 + 2152) = 0LL;
        v33 = 0LL;
        *((_QWORD *)v11 + 271) = 0LL;
        *((_DWORD *)v11 + 540) = -2147483630;
        *((_QWORD *)v11 + 271) = GreEncodeUserModePointer(0LL);
      }
      if ( v12 == (*((_DWORD *)v13 + 2) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr((DCOBJ *)&v26);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(v26, UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)v26 + 6);
            v26 = 0LL;
            goto LABEL_14;
          }
        }
      }
      *((_DWORD *)v26 + 11) |= 2u;
      v9 = v26;
      v27 = 1;
    }
    if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v9);
  }
LABEL_14:
  memset(v31, 0, sizeof(v31));
  PushThreadGuardedObject(v31, &v26, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v32 = 1;
  if ( !v26 )
    goto LABEL_34;
  if ( *((_WORD *)v26 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
  if ( *((_WORD *)v26 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v26);
  if ( v26 )
  {
    v35 = &v26;
    if ( *((_DWORD *)v26 + 123)
      && (*((_DWORD *)v26 + 9) & 0x4000) != 0
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v34) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v34);
      if ( (unsigned int)GrepLineTo((struct XDCOBJ *)&v26, a2, a3) )
        v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v34);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v34);
    }
    v17 = GrepLineTo((struct XDCOBJ *)&v26, a2, a3);
    if ( v6 )
    {
      v25 = UserReferenceDwmApiPort();
      DwmSyncFlushAndWaitForBatch(v25);
    }
    v26 = (DC *)(-(__int64)(v32 != 0) & (unsigned __int64)v26);
    PopThreadGuardedObject(v31);
    v18 = v26;
    if ( v26 )
    {
      if ( v27 && (*((_DWORD *)v26 + 11) & 2) != 0 )
      {
        v19 = (unsigned int)PsGetCurrentProcessId();
        v20 = v26;
        v21 = v19 & 0xFFFFFFFC;
        if ( *(_QWORD *)v26 )
        {
          v22 = (char *)HmgPentryFromPobj(v28, v26);
        }
        else
        {
          v22 = (char *)v26 + 2152;
          *(_OWORD *)((char *)v26 + 2152) = 0LL;
          v33 = 0LL;
          *((_QWORD *)v20 + 271) = 0LL;
          *((_DWORD *)v20 + 540) = -2147483630;
          *((_QWORD *)v20 + 271) = GreEncodeUserModePointer(0LL);
        }
        if ( v21 == (*((_DWORD *)v22 + 2) & 0xFFFFFFFE) )
        {
          v23 = DCOBJ::GetUserAttr((DCOBJ *)&v26);
          if ( v23 )
            DC::RestoreAttributes(v26, v23);
        }
        *((_DWORD *)v26 + 11) &= ~2u;
        v18 = v26;
        v27 = 0;
      }
      _InterlockedDecrement16((volatile signed __int16 *)v18 + 6);
      v26 = 0LL;
    }
    PopThreadGuardedObject(v30);
    return v17;
  }
  else
  {
LABEL_34:
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v26);
    return 0LL;
  }
}
