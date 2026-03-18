/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x14007E270
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140071CD0 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007E3C0 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E588 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-19h] BYREF
  int v9; // [rsp+28h] [rbp-11h]
  struct Gre::Base::SESSION_GLOBALS *v10; // [rsp+30h] [rbp-9h]
  __int64 v11; // [rsp+38h] [rbp-1h]
  __int128 v12; // [rsp+40h] [rbp+7h] BYREF
  __int128 v13; // [rsp+60h] [rbp+27h] BYREF
  char v14; // [rsp+80h] [rbp+47h]
  __int64 v15; // [rsp+A8h] [rbp+6Fh] BYREF

  UserEnterUserCritSecShared();
  v3 = Gre::Base::Globals(v2);
  GreAcquireSemaphoreShared<1,>(v3);
  v10 = v3;
  v11 = 0LL;
  v8 = 0LL;
  v9 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v12);
  DCOBJ::vLock((DCOBJ *)&v8, a1);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v13);
  v6 = 1;
  v14 = 1;
  if ( !v8 )
    goto LABEL_12;
  if ( *(_WORD *)(v8 + 12) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( *(_WORD *)(v8 + 12) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v8);
  if ( v8
    && ((v15 = *(_QWORD *)(v8 + 48), (**(_DWORD **)(v8 + 976) & 1) != 0) || (*(_DWORD *)(v8 + 36) & 0x8200) == 0x8200)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
  {
    GreAcquireSemaphoreShared<2,>(v3);
  }
  else
  {
LABEL_12:
    GreAcquireSemaphore<2,>(v3);
    v6 = 0;
  }
  GreAcquireSemaphoreShared<3,>(v3);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v8);
  return v6;
}
