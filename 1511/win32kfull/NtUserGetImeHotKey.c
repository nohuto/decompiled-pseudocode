/*
 * XREFs of NtUserGetImeHotKey @ 0x1C021AA00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C00F68A4 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(int a1, _DWORD *a2, _DWORD *a3, struct _tagIMEHOTKEYOBJ **a4)
{
  unsigned int v8; // ebx
  struct _tagIMEHOTKEYOBJ *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  struct _tagIMEHOTKEYOBJ **v12; // rdx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  struct _tagIMEHOTKEYOBJ *v14; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  struct _tagIMEHOTKEYOBJ **v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v10 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v10 = (_DWORD *)W32UserProbeAddress;
  *v10 = *v10;
  v11 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v11 = (_DWORD *)W32UserProbeAddress;
  *v11 = *v11;
  if ( a4 )
  {
    v12 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v12 = (struct _tagIMEHOTKEYOBJ **)W32UserProbeAddress;
    *v12 = *v12;
    v18 = (struct _tagIMEHOTKEYOBJ **)&v19;
  }
  ImeHotKeyByID = FindImeHotKeyByID(v9, a1);
  v14 = ImeHotKeyByID;
  if ( !ImeHotKeyByID )
  {
    v15 = 1419;
LABEL_11:
    UserSetLastError(v15);
    v8 = 0;
    goto LABEL_18;
  }
  if ( v18 )
  {
    *v18 = (struct _tagIMEHOTKEYOBJ *)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v15 = 87;
    goto LABEL_11;
  }
  v16 = *((unsigned int *)ImeHotKeyByID + 3);
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = v16;
  if ( a4 )
  {
    v14 = *v18;
    *a4 = *v18;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v14, v16);
  return v8;
}
