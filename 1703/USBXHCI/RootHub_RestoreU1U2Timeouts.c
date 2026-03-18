/*
 * XREFs of RootHub_RestoreU1U2Timeouts @ 0x1C0023C58
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005AD0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0023264 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RootHub_RestoreU1U2Timeouts(_QWORD *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbp
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  v2 = a1[5];
  v4 = 2LL * (unsigned int)(a2 - 1);
  v5 = (unsigned int)(a2 - 1);
  WPP_RECORDER_SF_(
    *(_QWORD *)(a1[1] + 64LL),
    4u,
    0xAu,
    0xD6u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
  v7 = a1[1];
  LODWORD(v12) = *(_DWORD *)(v2 + 8 * v4 + 4);
  v6 = v12;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v7 + 64),
    4u,
    0xAu,
    0xD7u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v12);
  LODWORD(v5) = (*(unsigned __int8 *)(56 * v5 + a1[6] + 10) << 8) | v6 & 0xFFFF0000 | *(unsigned __int8 *)(56 * v5 + a1[6] + 9);
  v8 = a1[1];
  LODWORD(v12) = v5;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v8 + 64),
    4u,
    0xAu,
    0xD8u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v12);
  *(_DWORD *)(v2 + 8 * v4 + 4) = v5;
  _InterlockedOr(v11, 0);
  v9 = a1[1];
  LODWORD(v12) = *(_DWORD *)(v2 + 8 * v4 + 4);
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v9 + 64),
           4u,
           0xAu,
           0xD9u,
           (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
           v12);
}
