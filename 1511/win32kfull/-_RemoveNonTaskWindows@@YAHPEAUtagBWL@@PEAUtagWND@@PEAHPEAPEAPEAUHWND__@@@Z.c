/*
 * XREFs of ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C0200130
 * Callers:
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF80C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C02000BC (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall _RemoveNonTaskWindows(struct tagBWL *a1, struct tagWND *a2, unsigned int *a3, HWND **a4)
{
  unsigned int v4; // ebp
  unsigned __int64 *v5; // r14
  HWND *v6; // rdi
  struct tagWND *v10; // rax
  struct tagWND *v11; // rsi
  struct tagWND *v12; // rcx
  __int64 v13; // rax
  struct tagWND *v14; // rdx
  __int64 v15; // rbx
  __int64 result; // rax

  v4 = 0;
  v5 = (unsigned __int64 *)((char *)a1 + 32);
  *a3 = -1;
  v6 = (HWND *)((char *)a1 + 32);
  while ( *v5 != 1 )
  {
    v10 = (struct tagWND *)HMValidateHandleNoSecure(*v5, 1);
    v11 = v10;
    if ( v10 && (unsigned int)_IsTaskWindow(v10, a2) )
    {
      v12 = v11;
      while ( (*((_BYTE *)v12 + 50) & 4) == 0 )
      {
        v13 = *((_QWORD *)v12 + 13);
        if ( !v13 )
          break;
        v14 = v12;
        v12 = (struct tagWND *)*((_QWORD *)v12 + 13);
        if ( *(char *)(v13 + 48) < 0 )
        {
          if ( (*((_BYTE *)v14 + 50) & 1) == 0 || *((_QWORD *)v12 + 13) )
            v12 = 0LL;
          else
            v12 = v11;
          break;
        }
      }
      if ( v12 )
      {
        v15 = *((_QWORD *)v12 + 30);
        if ( v15 )
        {
          do
          {
            if ( (unsigned int)_IsTaskWindow((struct tagWND *)v15, a2) )
              break;
            v15 = *(_QWORD *)(v15 + 104);
          }
          while ( v15 );
          if ( !v15 || (struct tagWND *)v15 == v11 )
          {
            if ( v6 < (HWND *)v5 )
              *v6 = (HWND)*v5;
            if ( a2 == v11 )
              *a3 = v4;
            ++v4;
            ++v6;
          }
        }
      }
    }
    ++v5;
  }
  *v6 = (HWND)1;
  result = v4;
  *a4 = v6;
  return result;
}
