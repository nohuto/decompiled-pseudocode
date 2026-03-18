/*
 * XREFs of ComposeWindow @ 0x1C000B878
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C000B824 (DecomposeWindowIfNeeded.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     ComposeWindowIfNeeded @ 0x1C008227C (ComposeWindowIfNeeded.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0057144 (_SetLayeredWindowAttributes.c)
 *     UpdateWindowSpriteDPI @ 0x1C0058A40 (UpdateWindowSpriteDPI.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  int v6; // ecx
  int v7; // edi
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = a2;
  if ( (a2 & 1) == 0 )
  {
    v6 = *((_DWORD *)a1 + 72);
    if ( (v6 & 0x20) != 0 )
    {
      *((_DWORD *)a1 + 72) = v6 & 0xFFFFFFDF;
      v7 = UnsetLayeredWindow(a1);
    }
    else
    {
      v7 = 0;
    }
    *((_DWORD *)a1 + 72) &= ~0x40u;
    return (unsigned int)v7;
  }
  if ( (unsigned int)IsDesktopWindow(a1, a2, a3, a4) && *((_QWORD *)a1 + 3) != grpdeskRitInput )
    return 0;
  if ( (((v4 & 8) == 0) & (unsigned __int8)~(*((_BYTE *)a1 + 55) >> 4)) != 0 )
    return (*((_BYTE *)a1 + 50) & 8) == 0 ? 0x3E0001u : 0;
  if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
  {
    v9 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
    UpdateWindowSpriteDPI(a1, v9);
    if ( (*((_BYTE *)a1 + 51) & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v7 = xxxSetLayeredWindow(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( v7 >= 0 )
  {
    v7 = SetLayeredWindowAttributes(a1);
    if ( v7 < 0 )
      UnsetLayeredWindow(a1);
    else
      *((_DWORD *)a1 + 72) |= 0x20u;
  }
  return (unsigned int)v7;
}
