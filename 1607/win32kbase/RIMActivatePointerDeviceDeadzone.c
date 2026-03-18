/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C00D1AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C00E07A0 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // edi
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v10; // [rsp+28h] [rbp-10h]

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    35,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  v7 = 0;
  if ( *(_DWORD *)(a1 + 316) )
  {
    if ( v4 < 5 && (_mm_lfence(), (v8 = *(_QWORD *)(a1 + 8LL * v4 + 416)) != 0) )
    {
      if ( *(_DWORD *)(v8 + 16) )
        *(_DWORD *)(v8 + 40) = a3;
      else
        v7 = -1073741823;
      RIMDeadzone::ActivateTelemetrySession(*(RIMDeadzone **)(a1 + 8LL * v4 + 416), a3);
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741811;
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      36,
      (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  }
  v10 = v7;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x25u,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
    v10);
  return v7;
}
