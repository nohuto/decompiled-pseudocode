/*
 * XREFs of ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01FFA88
 * Callers:
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF15C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01FFA14 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall _RemoveNonTaskWindows(struct tagBWL *a1, struct tagWND *a2, unsigned int *a3, HWND **a4)
{
  unsigned int v4; // ebp
  unsigned __int64 *v5; // r14
  HWND *v6; // rdi
  struct tagWND *v10; // rax
  __int64 v11; // r8
  struct tagWND *v12; // rsi
  __int64 v13; // r8
  struct tagWND *v14; // rcx
  __int64 v15; // rax
  struct tagWND *v16; // rdx
  __int64 v17; // rbx
  __int64 result; // rax

  v4 = 0;
  v5 = (unsigned __int64 *)((char *)a1 + 32);
  *a3 = -1;
  v6 = (HWND *)((char *)a1 + 32);
  while ( *v5 != 1 )
  {
    v10 = (struct tagWND *)HMValidateHandleNoSecure(*v5, 1);
    v12 = v10;
    if ( v10 && (unsigned int)_IsTaskWindow(v10, a2, v11) )
    {
      v14 = v12;
      while ( (*((_BYTE *)v14 + 50) & 4) == 0 )
      {
        v15 = *((_QWORD *)v14 + 13);
        if ( !v15 )
          break;
        v16 = v14;
        v14 = (struct tagWND *)*((_QWORD *)v14 + 13);
        if ( *(char *)(v15 + 48) < 0 )
        {
          if ( (*((_BYTE *)v16 + 50) & 1) == 0 || *((_QWORD *)v14 + 13) )
            v14 = 0LL;
          else
            v14 = v12;
          break;
        }
      }
      if ( v14 )
      {
        v17 = *((_QWORD *)v14 + 30);
        if ( v17 )
        {
          do
          {
            if ( (unsigned int)_IsTaskWindow((struct tagWND *)v17, a2, v13) )
              break;
            v17 = *(_QWORD *)(v17 + 104);
          }
          while ( v17 );
          if ( !v17 || (struct tagWND *)v17 == v12 )
          {
            if ( v6 < (HWND *)v5 )
              *v6 = (HWND)*v5;
            if ( a2 == v12 )
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
