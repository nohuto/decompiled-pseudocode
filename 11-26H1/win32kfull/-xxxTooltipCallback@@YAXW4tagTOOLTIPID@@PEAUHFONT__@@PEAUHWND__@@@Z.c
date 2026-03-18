/*
 * XREFs of ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x14025DBE4
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     xxxCancelMouseMoveTracking @ 0x1401EC124 (xxxCancelMouseMoveTracking.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1402EF498 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1402EF590 (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

void __fastcall xxxTooltipCallback(int a1, __int64 a2, __int64 a3)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  char v8; // [rsp+70h] [rbp+18h] BYREF

  v3[0] = a1;
  v3[1] = 0;
  v4 = a2;
  v5 = a3;
  v7 = 0LL;
  v6 = 0;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  EtwTraceBeginCallback(132LL);
  KeUserModeCallback(132LL, v3, 24LL, &v7, &v6);
  EtwTraceEndCallback(132LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
}
