/*
 * XREFs of NtGdiSetIcmMode @ 0x1400AEDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z @ 0x14006D194 (-GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x1400AE100 (-SaveAttributesHelper@DCOBJ@@AEAAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetIcmMode(Gre::Base *a1, int a2, unsigned int a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  DC *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  DC *v14; // [rsp+28h] [rbp-19h] BYREF
  int v15; // [rsp+30h] [rbp-11h]
  struct Gre::Base::SESSION_GLOBALS *v16; // [rsp+38h] [rbp-9h]
  __int64 v17; // [rsp+40h] [rbp-1h]
  _OWORD v18[2]; // [rsp+48h] [rbp+7h] BYREF
  _OWORD v19[2]; // [rsp+68h] [rbp+27h] BYREF
  char v20; // [rsp+88h] [rbp+47h]

  v6 = Gre::Base::Globals(a1);
  v17 = 0LL;
  v16 = v6;
  v14 = 0LL;
  v15 = 0;
  memset(v18, 0, sizeof(v18));
  PushThreadGuardedObject(
    v18,
    &v14,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v7) = 1;
  v8 = HmgLock(v16, a1, v7, 0LL);
  v14 = (DC *)v8;
  v9 = (DC *)v8;
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v8 + 12));
      v9 = 0LL;
      v14 = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
      GrepAuditBehaviorRestrictionViolations(1LL);
    v9 = v14;
  }
  if ( v9 )
  {
    if ( (*((_DWORD *)v9 + 11) & 2) == 0 )
    {
      if ( !DCOBJ::SaveAttributesHelper((DCOBJ *)&v14) )
      {
        _InterlockedDecrement16((volatile signed __int16 *)v14 + 6);
        v14 = 0LL;
        goto LABEL_10;
      }
      *((_DWORD *)v14 + 11) |= 2u;
      v9 = v14;
      v15 = 1;
    }
    if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v9);
  }
LABEL_10:
  memset(v19, 0, sizeof(v19));
  PushThreadGuardedObject(v19, &v14, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v20 = 1;
  if ( !v14 )
    goto LABEL_17;
  if ( *((_WORD *)v14 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( *((_WORD *)v14 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v14);
  if ( v14 )
    v12 = GrepSetICMMode((struct XDCOBJ *)&v14, a2, a3);
  else
LABEL_17:
    v12 = 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v14);
  return v12;
}
