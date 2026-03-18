/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x1C00057C0
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C0022B10 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C0022B84 (Interrupter_D0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddx @ 0x1C00059E8 (WPP_RECORDER_SF_qqdddx.c)
 *     WPP_RECORDER_SF_x @ 0x1C0008CA4 (WPP_RECORDER_SF_x.c)
 */

_UNKNOWN **__fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+70h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    WPP_RECORDER_SF_qqdddx(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      *(_DWORD *)(v4 + 124),
      *(_QWORD *)(v4 + 144),
      24,
      v12[8],
      v4,
      *(_QWORD *)(v4 + 144),
      *(_DWORD *)(v4 + 120),
      *(_DWORD *)(v4 + 128),
      *(_DWORD *)(v4 + 124),
      *(_BYTE *)(*(_QWORD *)(v4 + 144) + 24LL) + 16 * *(_DWORD *)(v4 + 124));
    *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) = (unsigned __int16)*(_DWORD *)(v4 + 108);
    _InterlockedOr(v12, 0);
    v5 = *(_QWORD *)(v4 + 144);
    v6 = ((unsigned __int8)*(_DWORD *)(v4 + 128) ^ (unsigned __int8)*(_QWORD *)(v5 + 24)) & 7;
    v7 = v6 ^ (*(_QWORD *)(v5 + 24) + 16LL * *(unsigned int *)(v4 + 124)) | 8;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_x(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
        v6,
        8,
        23,
        (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
        v7);
    }
    v8 = (*(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) == 0;
    v9 = *(_QWORD *)(v4 + 24);
    v13 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
    if ( v8 )
    {
      *(_QWORD *)(v9 + 24) = v7;
    }
    else
    {
      *(_DWORD *)(v9 + 24) = v7;
      _InterlockedOr(v12, 0);
      *(_DWORD *)(v9 + 28) = HIDWORD(v7);
    }
    _InterlockedOr(v12, 0);
    v8 = (*(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) == 0;
    v10 = *(_QWORD *)(v4 + 152);
    v14 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
    v11 = *(void **)(v10 + 24);
    result = *(_UNKNOWN ***)(v4 + 24);
    if ( v8 )
    {
      result[2] = v11;
    }
    else
    {
      *((_DWORD *)result + 4) = (_DWORD)v11;
      _InterlockedOr(v12, 0);
      *((_DWORD *)result + 5) = HIDWORD(v11);
    }
    _InterlockedOr(v12, 0);
  }
  return result;
}
