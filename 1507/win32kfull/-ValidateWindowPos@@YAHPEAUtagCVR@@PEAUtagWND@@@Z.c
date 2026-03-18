/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0066998
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0064F04 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
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
  __int64 v15; // rax
  unsigned __int8 v16; // r9
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
          v14 = *((_QWORD *)v2 + 12);
LABEL_20:
          if ( v14 && ((*(unsigned __int8 *)(v14 + 48) >> 3) & 1) != ((*(unsigned __int8 *)(v14 + 43) >> 2) & 1) )
            return 0LL;
          return !v2 || v2 == v9;
        }
        if ( v13 == 1 )
          return !v2 || v2 == v9;
        LOBYTE(v8) = 1;
        v15 = HMValidateHandleNoSecure(v13, v8);
        if ( !v15 || (v16 = *(_BYTE *)(v15 + 43), (v16 & 0x80u) != 0) )
        {
          UserSetLastError(6);
          return 0LL;
        }
        if ( v5 == v15 )
          return 0LL;
        v9 = *(struct tagWND **)(v5 + 88);
        if ( v9 != *(struct tagWND **)(v15 + 88) )
          return 0LL;
        if ( !v2 )
          return 1LL;
        if ( !v12 )
          return !v2 || v2 == v9;
        if ( ((*(unsigned __int8 *)(v5 + 48) >> 3) & 1) == ((*(unsigned __int8 *)(v5 + 43) >> 2) & 1) )
        {
          v14 = *(_QWORD *)(v15 + 72);
          goto LABEL_20;
        }
        v17 = ((*(unsigned __int8 *)(v15 + 48) >> 3) & 1) == ((v16 >> 2) & 1);
      }
      if ( v17 )
        return 0LL;
      return !v2 || v2 == v9;
    }
  }
  return 0LL;
}
