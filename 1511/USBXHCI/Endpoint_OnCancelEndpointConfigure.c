/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1C0021EB4
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x1C003A6F0 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009960 (CommonBuffer_AcquireBuffer.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0023C1C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigure(__int64 *a1)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // r15
  char v6; // al
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]

  v2 = *((_DWORD *)a1 + 36);
  v3 = *(_QWORD *)(*a1 + 112);
  v4 = *(_QWORD *)(*a1 + 80);
  v5 = *(KSPIN_LOCK **)(*a1 + 88);
  WPP_RECORDER_SF_dd(
    a1[10],
    4u,
    0xCu,
    0x42u,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(unsigned __int8 *)(a1[2] + 135),
    v2);
  v6 = *(_DWORD *)(v4 + 104) & 4;
  v7 = (unsigned int)(v2 - 1) + 1LL;
  v8 = v6 == 0;
  v9 = a1[2];
  if ( v8 )
  {
    v11 = 1056;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 16LL) + 32 * v7;
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 16LL) + (v7 << 6);
    v11 = 2112;
  }
  v12 = CommonBuffer_AcquireBuffer(v5, v11, (__int64)a1, 0x32747045u);
  a1[30] = (__int64)v12;
  if ( v12 )
  {
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      (__int64)v12,
      v10,
      0LL,
      a1 + 20);
    Command_SendCommand(v3, (__int64)(a1 + 20));
  }
  else
  {
    LODWORD(v14) = *((_DWORD *)a1 + 36);
    LODWORD(v13) = *(unsigned __int8 *)(a1[2] + 135);
    WPP_RECORDER_SF_dd(a1[10], 2u, 0xCu, 0x43u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v13, v14);
    Controller_ReportFatalError(*a1, 2, 0, a1[2], (__int64)a1, 0LL);
    _m_prefetchw(a1 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a1 + 8, 2u) & 2) == 0 )
      ESM_AddEvent(a1 + 34);
  }
}
