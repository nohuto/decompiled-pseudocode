/*
 * XREFs of ComposeWindow @ 0x1C0096658
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C0061A28 (ComposeWindowIfNeeded.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C0096460 (DecomposeWindowIfNeeded.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     _SetLayeredWindowAttributes @ 0x1C0061F00 (_SetLayeredWindowAttributes.c)
 *     UpdateWindowSpriteDPI @ 0x1C0062C8C (UpdateWindowSpriteDPI.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall ComposeWindow(__m128i *a1, char a2)
{
  char v2; // di
  __int32 v5; // ecx
  int v6; // edi
  __int64 v8; // r9
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  char v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v2 = 1;
  if ( (a2 & 1) == 0 )
  {
    v5 = a1[18].m128i_i32[0];
    if ( (v5 & 0x20) != 0 )
    {
      if ( (a2 & 0x10) != 0 )
        v2 = 3;
      a1[18].m128i_i32[0] = v5 & 0xFFFFFFDF;
      v6 = UnsetLayeredWindow((struct tagWND *)a1, v2);
    }
    else
    {
      v6 = 0;
    }
    a1[18].m128i_i32[0] &= ~0x40u;
    return (unsigned int)v6;
  }
  if ( (unsigned int)IsDesktopWindow((__int64)a1) && a1[1].m128i_i64[1] != grpdeskRitInput )
    return 0;
  if ( (((a2 & 8) == 0) & (unsigned __int8)~((unsigned __int8)a1[3].m128i_i8[7] >> 4)) != 0 )
    return (a1[3].m128i_i8[2] & 8) == 0 ? 0x3E0001u : 0;
  if ( (a1[3].m128i_i8[2] & 8) != 0 )
  {
    v10 = ValidateHmonitorNoRip(a1[21].m128i_i64[1]);
    UpdateWindowSpriteDPI((__int64)a1, v10);
    if ( (a1[3].m128i_i8[3] & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
      xxxInternalInvalidate((struct tagWND *)a1, (HRGN)1, 0x485u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v6 = xxxSetLayeredWindow(a1, 0LL, &v11, v8);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( v6 >= 0 )
  {
    v9 = 4;
    if ( (a2 & 4) != 0 )
      v9 = 20;
    v6 = SetLayeredWindowAttributes((struct tagWND *)a1, 0, 0xFFu, v9);
    if ( v6 < 0 )
      UnsetLayeredWindow((struct tagWND *)a1, 3);
    else
      a1[18].m128i_i32[0] |= 0x20u;
  }
  return (unsigned int)v6;
}
