/*
 * XREFs of UpdateThreadInputPointerList @ 0x140155F10
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateThreadInputPointerList(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // di
  unsigned int v4; // eax
  int v5; // r8d
  struct tagTHREADINPUTPOINTERLIST *v6; // rbx
  __int64 UserSessionState; // rax

  v2 = *(_DWORD *)(a2 + 8);
  v3 = 0;
  if ( v2 >= 0x241 && v2 <= 0x244 || (v4 = v2 - 581, v4 <= 0x12) && (v5 = 507647, _bittest(&v5, v4)) )
    v3 = *(_WORD *)(a2 + 16);
  v6 = (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1208);
  UserSessionState = W32GetUserSessionState(a1, a2);
  CTouchProcessor::UpdateThreadPointerList(*(CTouchProcessor **)(UserSessionState + 3256), v6, v3);
}
