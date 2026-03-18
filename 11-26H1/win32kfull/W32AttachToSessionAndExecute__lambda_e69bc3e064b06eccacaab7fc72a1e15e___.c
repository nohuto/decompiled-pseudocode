/*
 * XREFs of W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x1402A67A0
 * Callers:
 *     NtUserSetProcessWin32Capabilities @ 0x1402BD640 (NtUserSetProcessWin32Capabilities.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x1402A66F0 (W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 *     _lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator() @ 0x1402A6864 (_lambda_e69bc3e064b06eccacaab7fc72a1e15e_--operator().c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v10; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v12; // rsi

  v3 = a1;
  if ( (_DWORD)a1 == (unsigned int)W32GetCurrentWin32kSessionId(a1) )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(a2);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v6) < MaxSessionCount && W32GetSessionState(v8, v7) )
      return lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(a2);
    else
      return 3221225485LL;
  }
  else
  {
    v10 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(v3, 1198682965LL, 0LL);
    v12 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v10 = W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v12, 0x47727355u);
    }
    return v10;
  }
}
