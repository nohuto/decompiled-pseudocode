/*
 * XREFs of FeedbackSetWindowSetting @ 0x14000FAA4
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x14000F930 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  char v6; // bl
  __int64 UserSessionState; // rax
  int Prop; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax

  v5 = 1 << a2;
  v6 = a2;
  UserSessionState = W32GetUserSessionState((unsigned int)a2, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41390), 1LL);
  v9 = (unsigned int)(0x10000 << v6);
  v10 = (unsigned int)~v5;
  v11 = v10 & (v9 | Prop);
  v12 = v5 | v11;
  if ( !a3 )
    v12 = v11;
  v13 = W32GetUserSessionState(v10, v9);
  InternalSetProp(a1, *(unsigned __int16 *)(v13 + 41390), v12, 5LL);
  return 1LL;
}
