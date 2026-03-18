/*
 * XREFs of ComposeWindow @ 0x1C0080214
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C008001C (DecomposeWindowIfNeeded.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetLayeredWindowAttributes @ 0x1C0079C68 (_SetLayeredWindowAttributes.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C007BDC4 (UpdateWindowSpriteDPI.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 */

__int64 __fastcall ComposeWindow(__m128i *a1, char a2)
{
  char v2; // di
  __int32 v5; // ecx
  int v6; // edi
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r8
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
    v9 = ValidateHmonitorNoRip(a1[22].m128i_i64[0]);
    UpdateWindowSpriteDPI(a1->m128i_i64, v9, v10);
    if ( (a1[3].m128i_i8[3] & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
      xxxInternalInvalidate((struct tagWND *)a1, (HRGN)1, 0x485u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v6 = xxxSetLayeredWindow(a1, 0, &v11);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( v6 >= 0 )
  {
    v8 = 4;
    if ( (a2 & 4) != 0 )
      v8 = 20;
    v6 = SetLayeredWindowAttributes((struct tagWND *)a1, 0, 0xFFu, v8);
    if ( v6 < 0 )
      UnsetLayeredWindow((struct tagWND *)a1, 3);
    else
      a1[18].m128i_i32[0] |= 0x20u;
  }
  return (unsigned int)v6;
}
