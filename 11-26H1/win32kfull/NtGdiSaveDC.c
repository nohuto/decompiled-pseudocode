/*
 * XREFs of NtGdiSaveDC @ 0x140076BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSaveDC(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  DC *v9; // [rsp+20h] [rbp-19h] BYREF
  int v10; // [rsp+28h] [rbp-11h]
  struct Gre::Base::SESSION_GLOBALS *v11; // [rsp+30h] [rbp-9h]
  __int64 v12; // [rsp+38h] [rbp-1h]
  _OWORD v13[2]; // [rsp+40h] [rbp+7h] BYREF
  _OWORD v14[2]; // [rsp+60h] [rbp+27h] BYREF
  char v15; // [rsp+80h] [rbp+47h]

  v2 = Gre::Base::Globals(a1);
  v12 = 0LL;
  v11 = v2;
  v9 = 0LL;
  v10 = 0;
  memset(v13, 0, sizeof(v13));
  PushThreadGuardedObject(
    v13,
    &v9,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v3) = 1;
  v4 = HmgLock(v11, a1, v3, 0LL);
  v9 = (DC *)v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v4 + 12));
      v9 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v9 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v9) )
    {
      if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v9);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v9 + 6);
      v9 = 0LL;
    }
  }
  memset(v14, 0, sizeof(v14));
  PushThreadGuardedObject(v14, &v9, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v15 = 1;
  if ( !v9 )
    goto LABEL_16;
  if ( *((_WORD *)v9 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  if ( *((_WORD *)v9 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v9);
  if ( v9 )
  {
    v7 = GrepSaveDC((struct XDCOBJ *)&v9, 0);
  }
  else
  {
LABEL_16:
    EngSetLastError(6u);
    v7 = 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v9);
  return v7;
}
