/*
 * XREFs of NtGdiGetDCObject @ 0x1400AFAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(__int64 a1, int a2)
{
  __int64 v4; // rbx
  Gre::Base *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DC *v10; // rax
  __int64 v11; // rdx
  int v12; // esi
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  DC *v18; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h]
  struct Gre::Base::SESSION_GLOBALS *v20; // [rsp+38h] [rbp-D0h]
  _BYTE v21[40]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v22[4]; // [rsp+68h] [rbp-A0h] BYREF
  char v23; // [rsp+88h] [rbp-80h]
  _BYTE v24[160]; // [rsp+98h] [rbp-70h] BYREF

  v4 = 0LL;
  if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 || a1 != -589410304 )
  {
    memset(v21, 0, sizeof(v21));
    v20 = Gre::Base::Globals(v5);
    v18 = 0LL;
    LODWORD(v19) = 0;
    PushThreadGuardedObject(
      &v21[8],
      &v18,
      UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
    LOBYTE(v6) = 1;
    v7 = HmgLock(v20, a1, v6, 0LL);
    v18 = (DC *)v7;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 2136) )
      {
        _InterlockedDecrement16((volatile signed __int16 *)(v7 + 12));
        v18 = 0LL;
      }
    }
    else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
    {
      GrepAuditBehaviorRestrictionViolations(1LL);
    }
    if ( v18 )
    {
      if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v18) )
      {
        if ( (*((_DWORD *)v18 + 130) & 4) != 0 )
          DC::vMarkTransformDirty(v18);
      }
      else
      {
        _InterlockedDecrement16((volatile signed __int16 *)v18 + 6);
        v18 = 0LL;
      }
    }
    memset(v22, 0, sizeof(v22));
    PushThreadGuardedObject(
      v22,
      &v18,
      UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
    v23 = 1;
    if ( !v18 )
      goto LABEL_24;
    if ( *((_WORD *)v18 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    if ( *((_WORD *)v18 + 6) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v18);
    v10 = v18;
    if ( !v18 )
      goto LABEL_24;
    v11 = *((_QWORD *)v18 + 122);
    v12 = *(_DWORD *)(v11 + 152);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v18, *(_QWORD *)(v11 + 160));
      v10 = v18;
    }
    if ( (v12 & 0x2000) != 0 )
    {
      GreDCSelectPen(v10, *(_QWORD *)(*((_QWORD *)v10 + 122) + 168LL));
      v10 = v18;
    }
    switch ( a2 )
    {
      case 655360:
        v4 = *(_QWORD *)(*((_QWORD *)v10 + 122) + 296LL);
        goto LABEL_24;
      case 327680:
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24);
        DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v24, (struct XDCOBJ *)&v18);
        v15 = Gre::Base::Globals(v14);
        v16 = *((_QWORD *)v18 + 62);
        if ( v16 )
        {
          if ( *(_QWORD *)v21 )
            v16 = *(_QWORD *)v21;
        }
        else
        {
          v16 = *((_QWORD *)v15 + 547);
        }
        v4 = *(_QWORD *)(v16 + 32);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
        goto LABEL_24;
      case 524288:
        v4 = *((_QWORD *)v10 + 10);
LABEL_24:
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v18);
        return v4;
    }
    if ( a2 != 5242880 )
    {
      if ( a2 == 0x100000 )
      {
        v17 = (__int64 *)*((_QWORD *)v10 + 17);
        goto LABEL_36;
      }
      if ( a2 != 3145728 )
        goto LABEL_24;
    }
    v17 = (__int64 *)*((_QWORD *)v10 + 18);
LABEL_36:
    v4 = *v17;
    goto LABEL_24;
  }
  if ( a2 == 655360 )
    return GreGetStockObject(13LL);
  return v4;
}
