/*
 * XREFs of ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C00FB698
 * Callers:
 *     NtUserUndelegateInput @ 0x1C00FB5F0 (NtUserUndelegateInput.c)
 *     NtUserHandleDelegatedInput @ 0x1C021C960 (NtUserHandleDelegatedInput.c)
 * Callees:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0115CC4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01E1E2C (-_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall _HandleDelegatedInput(__int64 a1, unsigned int a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  struct tagQMSG *i; // rax
  __int64 result; // rax
  struct tagQMSG *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( a3 )
  {
    result = _FindQMsgFromMsg((struct tagTHREADINFO *const)a1, a3, &v8);
    if ( !(_DWORD)result )
      return result;
    v3 = v8;
  }
  for ( i = **(struct tagQMSG ***)(a1 + 392); i != v3; i = _HandleDelegatedInputWorker(
                                                             (struct tagTHREADINFO *)a1,
                                                             a2,
                                                             i) )
    ;
  return 1LL;
}
