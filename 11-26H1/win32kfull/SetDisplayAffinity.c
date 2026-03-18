/*
 * XREFs of SetDisplayAffinity @ 0x1401FF0D8
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1401FEFE0 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1401FF1C0 (GetDisplayAffinity.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1402417DC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 UserSessionState; // rax
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  v14 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1, 1);
  if ( (unsigned int)GetDisplayAffinity(a1, &v14) )
  {
    v7 = *(unsigned __int16 *)(W32GetUserSessionState(v6, v5) + 41400);
    if ( (_DWORD)v3 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, v7, v3, 5u) )
        return v2;
    }
    else
    {
      InternalRemoveProp((__int64)a1, v7, 1u);
    }
    v8 = v3 & 0x11;
    v2 = 1;
    if ( (v14 & 0x11) != v8 )
    {
      v2 = ChangeWindowTreeProtection(a1, v8);
      if ( !v2 )
      {
        v12 = v14;
        UserSessionState = W32GetUserSessionState(v11, v10);
        InternalSetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41400), v12, 5u);
      }
    }
  }
  return v2;
}
