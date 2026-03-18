/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x14024A14C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 */

__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 UserSessionState; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // [rsp+48h] [rbp+10h] BYREF

  v25 = 0x80000000;
  v2 = *((_QWORD *)PtiCurrent(a1) + 58);
  result = IsRemoteConnection(v4, v3);
  if ( !(_DWORD)result )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators", 0x80000000LL, &v25, 0);
    v8 = v25 & 0x80000002;
    v25 = v8;
    if ( v8 == 0x80000000 )
    {
      v8 = *(unsigned __int16 *)(W32GetUserSessionState(v7, v6) + 12858);
      v25 = v8;
    }
    LOBYTE(v7) = *(_BYTE *)(v2 + 316);
    if ( (v8 & 2) != 0 )
    {
      LOBYTE(v7) = v7 | 2;
      *(_BYTE *)(v2 + 316) = v7;
      UserSessionState = W32GetUserSessionState(v7, v6);
      *(_BYTE *)(UserSessionState + 14364) |= 2u;
      v24 = W32GetUserSessionState(v23, v22);
      *(_BYTE *)(v24 + 14428) |= 2u;
    }
    else
    {
      LOBYTE(v7) = v7 & 0xFD;
      *(_BYTE *)(v2 + 316) = v7;
      v9 = W32GetUserSessionState(v7, v6);
      *(_BYTE *)(v9 + 14364) &= ~2u;
      v12 = W32GetUserSessionState(v11, v10);
      *(_BYTE *)(v12 + 14428) &= ~2u;
    }
    *(_BYTE *)(W32GetUserSessionState(v14, v13) + 14324) = 0;
    *(_BYTE *)(v2 + 285) &= ~8u;
    v17 = W32GetUserSessionState(v16, v15);
    *(_BYTE *)(v17 + 14333) &= ~8u;
    v20 = W32GetUserSessionState(v19, v18);
    *(_BYTE *)(v20 + 14397) &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
