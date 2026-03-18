/*
 * XREFs of IsPointerPrimary @ 0x1402AA494
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 * Callees:
 *     <none>
 */

int __fastcall IsPointerPrimary(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  struct tagTHREADINPUTPOINTERLIST *v3; // rbx
  __int64 UserSessionState; // rax
  unsigned __int64 ThreadPointerData; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax

  v2 = a2;
  v3 = (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1208);
  UserSessionState = W32GetUserSessionState(a1, a2);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        *(CTouchProcessor **)(UserSessionState + 3256),
                        v3,
                        v2,
                        0LL,
                        0LL,
                        0LL);
  v8 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v9 = W32GetUserSessionState(v7, v6);
    LODWORD(ThreadPointerData) = CTouchProcessor::IsPointerPrimary(*(CTouchProcessor **)(v9 + 3256), v8);
  }
  return ThreadPointerData;
}
