/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x1402506B0
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r8
  _OWORD v8[5]; // [rsp+28h] [rbp-89h] BYREF
  __int128 v9; // [rsp+78h] [rbp-39h]
  __int128 v10; // [rsp+88h] [rbp-29h]
  _OWORD v11[7]; // [rsp+98h] [rbp-19h] BYREF

  result = ValidateHwnd(*(_QWORD *)(a1 + 16));
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 3256);
    memset_0(v8, 0, 0x70uLL);
    v7 = *(_QWORD *)(a1 + 40);
    LODWORD(v8[0]) = 4;
    *(_QWORD *)&v9 = v5;
    v11[1] = v8[1];
    HIDWORD(v9) = 2;
    v11[0] = v8[0];
    v11[3] = v8[3];
    v11[2] = v8[2];
    v11[5] = v9;
    v11[4] = v8[4];
    v11[6] = v10;
    return CTouchProcessor::DoDeferredPointerActivate(v6, v11, v7);
  }
  return result;
}
