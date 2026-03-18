/*
 * XREFs of NtGdiSelectFont @ 0x1400AF6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14015941C (-W32PidDCOwner@XDCOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall NtGdiSelectFont(Gre::Base *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  DC *v6; // rcx
  unsigned int CurrentProcessId; // eax
  DC *v8; // rbx
  unsigned int v9; // edi
  char *v10; // rsi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 *v16; // rcx
  struct Gre::Base::SESSION_GLOBALS *v17; // rsi
  Gre::Base *v18; // rcx
  struct LFONT *v19; // rdi
  __int64 v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  DC *v23; // [rsp+28h] [rbp-59h] BYREF
  int v24; // [rsp+30h] [rbp-51h]
  struct Gre::Base::SESSION_GLOBALS *v25; // [rsp+38h] [rbp-49h]
  __int64 v26; // [rsp+40h] [rbp-41h]
  _OWORD v27[2]; // [rsp+48h] [rbp-39h] BYREF
  _OWORD v28[2]; // [rsp+68h] [rbp-19h] BYREF
  char v29; // [rsp+88h] [rbp+7h]
  __int64 v30; // [rsp+98h] [rbp+17h] BYREF
  _OWORD v31[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  v26 = 0LL;
  v25 = Gre::Base::Globals(a1);
  v23 = 0LL;
  v24 = 0;
  memset(v27, 0, sizeof(v27));
  PushThreadGuardedObject(
    v27,
    &v23,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v4) = 1;
  v5 = HmgLock(v25, a1, v4, 0LL);
  v23 = (DC *)v5;
  v6 = (DC *)v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 12));
      v6 = 0LL;
      v23 = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
      GrepAuditBehaviorRestrictionViolations(1LL);
    v6 = v23;
  }
  if ( v6 )
  {
    if ( (*((_DWORD *)v6 + 11) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v8 = v23;
      v9 = CurrentProcessId & 0xFFFFFFFC;
      if ( *(_QWORD *)v23 )
      {
        v10 = (char *)HmgPentryFromPobj(v25, v23);
      }
      else
      {
        v10 = (char *)v23 + 2152;
        *(_OWORD *)((char *)v23 + 2152) = 0LL;
        *((_QWORD *)&v31[0] + 1) = 0LL;
        *((_QWORD *)v8 + 271) = 0LL;
        *((_DWORD *)v8 + 540) = -2147483630;
        *((_QWORD *)v8 + 271) = GreEncodeUserModePointer(0LL);
      }
      if ( v9 == (*((_DWORD *)v10 + 2) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr((DCOBJ *)&v23);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(v23, UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)v23 + 6);
            v23 = 0LL;
            goto LABEL_14;
          }
        }
      }
      *((_DWORD *)v23 + 11) |= 2u;
      v6 = v23;
      v24 = 1;
    }
    if ( (*((_DWORD *)v6 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v6);
  }
LABEL_14:
  memset(v28, 0, sizeof(v28));
  PushThreadGuardedObject(v28, &v23, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v29 = 1;
  if ( !v23 )
    goto LABEL_31;
  if ( *((_WORD *)v23 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  if ( *((_WORD *)v23 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v23);
  if ( !v23 )
  {
LABEL_31:
    v14 = 0LL;
    goto LABEL_30;
  }
  v14 = 0LL;
  if ( XDCOBJ::W32PidDCOwner((XDCOBJ *)&v23) )
  {
    v16 = (__int64 *)*((_QWORD *)v23 + 19);
    if ( v16 )
      v14 = *v16;
    if ( a2 != v14 )
    {
      v17 = v25;
      LOBYTE(v15) = 10;
      v30 = HmgShareLock(v25, a2, v15, 0LL);
      memset(v31, 0, sizeof(v31));
      PushThreadGuardedObject(
        v31,
        &v30,
        UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
      v19 = (struct LFONT *)v30;
      if ( v30 )
      {
        if ( (*(_BYTE *)(HmgPentryFromPobj(v17, v30) + 15) & 2) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v17, *((struct LFONT **)v23 + 19));
          v20 = v30;
          v30 = 0LL;
          *((_QWORD *)v23 + 19) = v20;
          *(_QWORD *)(*((_QWORD *)v23 + 122) + 296LL) = a2;
          *((_QWORD *)v23 + 218) = 0LL;
          *(_DWORD *)(*((_QWORD *)v23 + 122) + 152LL) |= 0x10u;
          v18 = (Gre::Base *)*((_QWORD *)v23 + 122);
          *((_DWORD *)v18 + 38) &= ~0x20u;
          v19 = (struct LFONT *)v30;
LABEL_27:
          if ( v19 )
          {
            v22 = Gre::Base::Globals(v18);
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v22, v19);
            v30 = 0LL;
          }
          PopThreadGuardedObject(v31);
          goto LABEL_30;
        }
        v19 = (struct LFONT *)v30;
      }
      v14 = 0LL;
      goto LABEL_27;
    }
  }
LABEL_30:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v23);
  return v14;
}
