/*
 * XREFs of Command_ReleaseHardware @ 0x1C0052EE4
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0054360 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall Command_ReleaseHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int128 v4; // xmm0
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 88);
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    v4 = *(_OWORD *)(v2 + 232);
    v5 = *(_DWORD **)(a1 + 40);
    v9 = v4;
    if ( (v4 & 1) != 0 )
    {
      *v5 = 0;
      _InterlockedOr(v8, 0);
      v5[1] = 0;
    }
    else
    {
      *(_QWORD *)v5 = 0LL;
    }
    _InterlockedOr(v8, 0);
    if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        3u,
        6u,
        0xFu,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
    if ( *(_QWORD *)(a1 + 88) != a1 + 88 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        3u,
        6u,
        0x10u,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
    {
      CommonBuffer_ReleaseBuffer(v3, v6);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 && v7 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) )
    {
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v7);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 32) = 2;
}
