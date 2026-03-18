/*
 * XREFs of SetKeyboardRate @ 0x1400CC780
 * Callers:
 *     xxxInitWindowStation @ 0x1400CC898 (xxxInitWindowStation.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetKeyboardRate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int16 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rdx

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = W32GetUserSessionState(v5, v4);
  v9 = W32GetUserSessionState(v8, v7);
  v10 = *(unsigned __int16 *)(v6 + 12842);
  v11 = *(_WORD *)(v9 + 12842);
  LODWORD(v6) = (v2 & 0x1F) * (*(unsigned __int16 *)(UserSessionState + 12848) - (_DWORD)v10);
  LODWORD(v10) = (138547333 * (unsigned __int64)(unsigned int)v6) >> 32;
  *(_WORD *)(W32GetUserSessionState(v12, v10) + 12862) = v11 + (unsigned int)v6 / 0x1F;
  v15 = W32GetUserSessionState(v14, v13);
  v18 = W32GetUserSessionState(v17, v16);
  v21 = W32GetUserSessionState(v20, v19);
  v22 = *(unsigned __int16 *)(v18 + 12844);
  v23 = (v2 >> 5) & 3;
  v24 = v23 * (*(unsigned __int16 *)(v15 + 12850) - (unsigned int)v22);
  LODWORD(v24) = (unsigned __int64)(2863311531LL * v24) >> 32;
  LOWORD(v18) = *(_WORD *)(v21 + 12844) + v23 * (*(unsigned __int16 *)(v15 + 12850) - (unsigned int)v22) / 3;
  *(_WORD *)(W32GetUserSessionState(v22, v24) + 12864) = v18;
  return IoControl(1LL);
}
