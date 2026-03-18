/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C005594C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0051A2C (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  struct tagWND *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 DesktopWindow; // rax
  __int64 v9; // rdx
  struct tagWND *v10; // r8
  bool v11; // zf
  unsigned __int8 v12; // al
  BOOL v13; // ebp
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16; // r9
  __int64 v17; // rax
  bool v18; // zf

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(*(_QWORD *)a1, a2);
  v6 = v4;
  if ( v4 )
  {
    *((_QWORD *)a1 + 13) = *(_QWORD *)(v4 + 16);
    if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
      return 1LL;
    DesktopWindow = GetDesktopWindow(v4, v5);
    v11 = v10 == (struct tagWND *)DesktopWindow;
    v12 = *(_BYTE *)(v6 + 43);
    v13 = v11;
    if ( (v12 & 0x80u) == 0 )
    {
      v14 = *((_QWORD *)a1 + 1);
      if ( v14 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v18 = !v11;
      }
      else
      {
        if ( !v14 )
        {
          if ( !v2 )
            return 1LL;
          if ( !v11 || ((*(unsigned __int8 *)(v6 + 48) >> 3) & 1) != ((v12 >> 2) & 1) )
            return !v2 || v2 == v10;
          v17 = *((_QWORD *)v2 + 12);
LABEL_20:
          if ( v17 && ((*(unsigned __int8 *)(v17 + 48) >> 3) & 1) != ((*(unsigned __int8 *)(v17 + 43) >> 2) & 1) )
            return 0LL;
          return !v2 || v2 == v10;
        }
        if ( v14 == 1 )
          return !v2 || v2 == v10;
        LOBYTE(v9) = 1;
        v15 = HMValidateHandleNoSecure(v14, v9);
        if ( !v15 || (v16 = *(_BYTE *)(v15 + 43), (v16 & 0x80u) != 0) )
        {
          UserSetLastError(6);
          return 0LL;
        }
        if ( v6 == v15 )
          return 0LL;
        v10 = *(struct tagWND **)(v6 + 88);
        if ( v10 != *(struct tagWND **)(v15 + 88) )
          return 0LL;
        if ( !v2 )
          return 1LL;
        if ( !v13 )
          return !v2 || v2 == v10;
        if ( ((*(unsigned __int8 *)(v6 + 48) >> 3) & 1) == ((*(unsigned __int8 *)(v6 + 43) >> 2) & 1) )
        {
          v17 = *(_QWORD *)(v15 + 72);
          goto LABEL_20;
        }
        v18 = ((*(unsigned __int8 *)(v15 + 48) >> 3) & 1) == ((v16 >> 2) & 1);
      }
      if ( v18 )
        return 0LL;
      return !v2 || v2 == v10;
    }
  }
  return 0LL;
}
