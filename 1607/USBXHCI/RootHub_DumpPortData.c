/*
 * XREFs of RootHub_DumpPortData @ 0x1C0008A20
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0027520 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_PrepareHardware @ 0x1C004CCE0 (RootHub_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0004950 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall RootHub_DumpPortData(unsigned int *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+38h] [rbp-10h]
  __int64 v21; // [rsp+38h] [rbp-10h]
  __int64 v22; // [rsp+38h] [rbp-10h]
  __int64 v23; // [rsp+38h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-10h]
  __int64 v25; // [rsp+38h] [rbp-10h]
  __int64 v26; // [rsp+38h] [rbp-10h]

  v3 = *a1;
  v12 = *a1;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(a2 + 64),
    a2,
    0xAu,
    0xCu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    a1,
    v12);
  v20 = (v3 >> 3) & 1;
  LODWORD(v13) = (v3 >> 1) & 1;
  LODWORD(v5) = v3 & 1;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a2 + 64),
    4u,
    0xAu,
    0xDu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v5,
    v13,
    v20);
  LODWORD(v21) = (v3 >> 5) & 0xF;
  LODWORD(v14) = (v3 >> 9) & 1;
  LODWORD(v6) = (v3 >> 4) & 1;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a2 + 64),
    4u,
    0xAu,
    0xEu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v6,
    v14,
    v21);
  LODWORD(v22) = HIWORD(v3) & 1;
  LODWORD(v15) = (unsigned __int16)v3 >> 14;
  LODWORD(v7) = (v3 >> 10) & 0xF;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a2 + 64),
    4u,
    0xAu,
    0xFu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v7,
    v15,
    v22);
  LODWORD(v23) = (v3 >> 20) & 1;
  LODWORD(v16) = (v3 >> 18) & 1;
  LODWORD(v8) = (v3 >> 17) & 1;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a2 + 64),
    4u,
    0xAu,
    0x10u,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v8,
    v16,
    v23);
  LODWORD(v24) = (v3 >> 22) & 1;
  LODWORD(v17) = (v3 >> 21) & 1;
  LODWORD(v9) = (v3 >> 19) & 1;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a2 + 64),
    4u,
    0xAu,
    0x11u,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v9,
    v17,
    v24);
  LODWORD(v25) = (v3 >> 26) & 1;
  LODWORD(v18) = (v3 >> 25) & 1;
  LODWORD(v10) = (v3 >> 23) & 1;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a2 + 64),
    4u,
    0xAu,
    0x12u,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v10,
    v18,
    v25);
  LODWORD(v26) = v3 >> 31;
  LODWORD(v19) = (v3 >> 30) & 1;
  LODWORD(v11) = (v3 >> 27) & 1;
  return WPP_RECORDER_SF_ddd(
           *(_QWORD *)(a2 + 64),
           4u,
           0xAu,
           0x13u,
           (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
           v11,
           v19,
           v26);
}
