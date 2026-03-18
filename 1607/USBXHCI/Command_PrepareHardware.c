/*
 * XREFs of Command_PrepareHardware @ 0x1C004D944
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004E1C0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     RtlStringCchPrintfA @ 0x1C0008ED0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D968 (CommonBuffer_ReleaseBuffer.c)
 */

__int64 __fastcall Command_PrepareHardware(__int64 a1)
{
  __int64 v1; // rax
  KSPIN_LOCK *v3; // rsi
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v11; // rdx
  _DWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  char v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  char pszDest[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(KSPIN_LOCK **)(v1 + 88);
  v4 = *(_QWORD *)(v1 + 80);
  v5 = CommonBuffer_AcquireBuffer(v3, 0x200u, a1, 0x31646D43u);
  *(_QWORD *)(a1 + 120) = v5;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 96) = a1 + 88;
    *(_QWORD *)(a1 + 88) = a1 + 88;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v4 + 32) + 24LL;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(v4 + 48);
    v6 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 64) = 31;
    v7 = *(_QWORD *)(v6 + 16);
    *(_QWORD *)(a1 + 80) = v7;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v6 + 24) + 496LL;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      4u,
      6u,
      0xEu,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      31,
      v7);
    v8 = *(_QWORD *)(a1 + 8);
    v13 = 0LL;
    v12[1] = 0;
    v12[0] = 48;
    pszDest[0] = 0;
    v15 = 16;
    v14 = 0;
    v12[2] = 1024;
    v12[3] = 200;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d CMD", *(_DWORD *)(v8 + 144));
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v12, a1 + 16) < 0 )
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
    *(_DWORD *)(a1 + 32) = 1;
    return 0;
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      6u,
      0xDu,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
    v11 = *(_QWORD *)(a1 + 120);
    v9 = -1073741670;
    if ( v11 )
    {
      CommonBuffer_ReleaseBuffer((__int64)v3, v11);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
  return v9;
}
