/*
 * XREFs of NtGdiRestoreDC @ 0x1401AECF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiRestoreDC(Gre::Base *a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  DC *v7; // rbx
  char *v8; // rdi
  unsigned int v9; // ebx
  DC *v11; // [rsp+28h] [rbp-39h] BYREF
  int v12; // [rsp+30h] [rbp-31h]
  struct Gre::Base::SESSION_GLOBALS *v13; // [rsp+38h] [rbp-29h]
  __int64 v14; // [rsp+40h] [rbp-21h]
  _OWORD v15[2]; // [rsp+48h] [rbp-19h] BYREF
  _OWORD v16[2]; // [rsp+68h] [rbp+7h] BYREF
  char v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+47h]

  v13 = Gre::Base::Globals(a1);
  memset(v15, 0, sizeof(v15));
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0;
  PushThreadGuardedObject(
    v15,
    &v11,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v4) = 1;
  v5 = HmgLock(v13, a1, v4, 0LL);
  v11 = (DC *)v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 12));
      v11 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(v6) != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v11 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v11) )
    {
      if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v11);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v11 + 6);
      v11 = 0LL;
    }
  }
  memset(v16, 0, sizeof(v16));
  PushThreadGuardedObject(v16, &v11, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v17 = 1;
  if ( !v11 )
    goto LABEL_18;
  if ( *((_WORD *)v11 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_WORD *)v11 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v11);
  v7 = v11;
  if ( v11
    && (!*(_QWORD *)v11
      ? (char *)(v8 = (char *)v11 + 2152,
                 *(_OWORD *)((char *)v11 + 2152) = 0LL,
                 v18 = 0LL,
                 *((_QWORD *)v7 + 271) = 0LL,
                 *((_DWORD *)v7 + 540) = -2147483630,
                 *((_QWORD *)v7 + 271) = GreEncodeUserModePointer(0LL))
      : (v8 = (char *)HmgPentryFromPobj(v13, v11)),
        (*((_DWORD *)v8 + 2) & 0xFFFFFFFE) != 0) )
  {
    v9 = GrepRestoreDCOBJ((struct XDCOBJ *)&v11, a2);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v11);
    return v9;
  }
  else
  {
LABEL_18:
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v11);
    return 0LL;
  }
}
