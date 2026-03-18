/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x1C0004F30
 * Callers:
 *     Interrupter_D0Entry @ 0x1C0004E40 (Interrupter_D0Entry.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C00266E0 (Interrupter_ControllerResetPostReset.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddx @ 0x1C0005154 (WPP_RECORDER_SF_qqdddx.c)
 *     WPP_RECORDER_SF_x @ 0x1C00084A4 (WPP_RECORDER_SF_x.c)
 */

_UNKNOWN **__fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v11; // [rsp+60h] [rbp-38h]
  __int128 v12; // [rsp+70h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    WPP_RECORDER_SF_qqdddx(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      *(_DWORD *)(v4 + 132),
      *(_QWORD *)(v4 + 152),
      24,
      v10[8],
      v4,
      *(_QWORD *)(v4 + 152),
      *(_DWORD *)(v4 + 128),
      *(_DWORD *)(v4 + 136),
      *(_DWORD *)(v4 + 132),
      *(_BYTE *)(*(_QWORD *)(v4 + 152) + 24LL) + 16 * *(_DWORD *)(v4 + 132));
    *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) = (unsigned __int16)*(_DWORD *)(v4 + 116);
    _InterlockedOr(v10, 0);
    v5 = *(_QWORD *)(v4 + 152);
    v6 = ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(v5 + 24)) & 7;
    v7 = v6 ^ (*(_QWORD *)(v5 + 24) + 16LL * *(unsigned int *)(v4 + 132)) | 8;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_x(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
        v6,
        8,
        23,
        (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
        v7);
    }
    v11 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
    v8 = *(_QWORD *)(v4 + 24);
    if ( (v11 & 1) != 0 )
    {
      *(_DWORD *)(v8 + 24) = v7;
      _InterlockedOr(v10, 0);
      *(_DWORD *)(v8 + 28) = HIDWORD(v7);
    }
    else
    {
      *(_QWORD *)(v8 + 24) = v7;
    }
    _InterlockedOr(v10, 0);
    v12 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
    v9 = *(void **)(*(_QWORD *)(v4 + 160) + 24LL);
    result = *(_UNKNOWN ***)(v4 + 24);
    if ( (v12 & 1) != 0 )
    {
      *((_DWORD *)result + 4) = (_DWORD)v9;
      _InterlockedOr(v10, 0);
      *((_DWORD *)result + 5) = HIDWORD(v9);
    }
    else
    {
      result[2] = v9;
    }
    _InterlockedOr(v10, 0);
  }
  return result;
}
