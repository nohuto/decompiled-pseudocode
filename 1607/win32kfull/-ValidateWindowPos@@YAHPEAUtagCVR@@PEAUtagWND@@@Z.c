/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C007A280
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0078DF8 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  struct tagWND *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  struct tagWND *v9; // r8
  bool v10; // zf
  unsigned __int8 v11; // al
  BOOL v12; // ebp
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int8 v15; // r9
  __int64 v16; // rax
  bool v17; // zf

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(*(_QWORD *)a1, a2);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)a1 + 13) = *(_QWORD *)(v4 + 16);
    if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
      return 1LL;
    DesktopWindow = GetDesktopWindow(v4);
    v10 = v9 == (struct tagWND *)DesktopWindow;
    v11 = *(_BYTE *)(v5 + 43);
    v12 = v10;
    if ( (v11 & 0x80u) == 0 )
    {
      v13 = *((_QWORD *)a1 + 1);
      if ( v13 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v17 = !v10;
      }
      else
      {
        if ( !v13 )
        {
          if ( !v2 )
            return 1LL;
          if ( !v10 || ((*(unsigned __int8 *)(v5 + 48) >> 3) & 1) != ((v11 >> 2) & 1) )
            return !v2 || v2 == v9;
          v16 = *((_QWORD *)v2 + 12);
LABEL_22:
          if ( v16 && ((*(unsigned __int8 *)(v16 + 48) >> 3) & 1) != ((*(unsigned __int8 *)(v16 + 43) >> 2) & 1) )
            return 0LL;
          return !v2 || v2 == v9;
        }
        if ( v13 == 1 )
          return !v2 || v2 == v9;
        LOBYTE(v8) = 1;
        v14 = HMValidateHandleNoSecure(v13, v8);
        if ( !v14 || (v15 = *(_BYTE *)(v14 + 43), (v15 & 0x80u) != 0) )
        {
          UserSetLastError(6LL);
          return 0LL;
        }
        if ( v5 == v14 )
          return 0LL;
        v9 = *(struct tagWND **)(v5 + 88);
        if ( v9 != *(struct tagWND **)(v14 + 88) )
          return 0LL;
        if ( !v2 )
          return 1LL;
        if ( !v12 )
          return !v2 || v2 == v9;
        if ( ((*(unsigned __int8 *)(v5 + 48) >> 3) & 1) == ((*(unsigned __int8 *)(v5 + 43) >> 2) & 1) )
        {
          v16 = *(_QWORD *)(v14 + 72);
          goto LABEL_22;
        }
        v17 = ((*(unsigned __int8 *)(v14 + 48) >> 3) & 1) == ((v15 >> 2) & 1);
      }
      if ( v17 )
        return 0LL;
      return !v2 || v2 == v9;
    }
  }
  return 0LL;
}
