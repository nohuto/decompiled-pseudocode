/*
 * XREFs of DrawBox @ 0x1C00B0628
 * Callers:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     FlipUserTextOutW @ 0x1C00B1264 (FlipUserTextOutW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, LPCRECT a2, __int16 a3)
{
  unsigned __int16 *v4; // r14
  BOOL v7; // r13d
  int v8; // eax
  int v9; // ebx
  const wchar_t *v10; // rax
  LONG top; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  LONG v15; // r15d
  LONG v16; // r12d
  unsigned __int16 *v17; // r14
  __int64 i; // rbx
  HBRUSH *v20; // r8
  int v21; // [rsp+50h] [rbp-19h]
  int v22; // [rsp+54h] [rbp-15h]
  _DWORD v23[4]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  int v25; // [rsp+70h] [rbp+7h]
  __int64 v26; // [rsp+74h] [rbp+Bh]
  __int64 v27; // [rsp+7Ch] [rbp+13h]

  v4 = L"nmlkji";
  v7 = (a3 & 0x708) == 1032;
  if ( (a3 & 2) != 0 )
  {
    v20 = (HBRUSH *)ghbrWhite;
    v27 = 0LL;
    v26 = 0LL;
    v25 = 0;
    goto LABEL_20;
  }
  if ( (a3 & 0xC000) != 0 )
  {
    v8 = *(_DWORD *)(gpsi + 4984LL);
    LODWORD(v27) = v8;
    HIDWORD(v26) = v8;
    LODWORD(v26) = v8;
  }
  else
  {
    LODWORD(v26) = *(_DWORD *)(gpsi + 5048LL);
    HIDWORD(v26) = *(_DWORD *)(gpsi + 5044LL);
    LODWORD(v27) = *(_DWORD *)(gpsi + 5040LL);
    v8 = *(_DWORD *)(gpsi + 5024LL);
  }
  HIDWORD(v27) = v8;
  if ( (a3 & 0x300) != 0 )
  {
    v9 = *(_DWORD *)(gpsi + 5020LL);
  }
  else if ( (a3 & 0x708) == 0x408 )
  {
    v9 = *(_DWORD *)(gpsi + 5040LL);
  }
  else
  {
    v9 = *(_DWORD *)(gpsi + 4980LL);
  }
  v25 = v9;
  if ( (a3 & 1) != 0 )
  {
    v20 = (HBRUSH *)ghbrBlack;
LABEL_20:
    FillRect(a1, a2, *v20);
    goto LABEL_10;
  }
  v10 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v10 = L"nmlkji";
  v4 = (unsigned __int16 *)v10;
LABEL_10:
  top = a2->top;
  v12 = a2->bottom - top;
  v13 = a2->right - a2->left;
  v22 = v12;
  v21 = v13;
  v14 = v12;
  if ( v13 < v12 )
    v14 = a2->right - a2->left;
  v15 = a2->left + (v13 - v14) / 2;
  v16 = top + (v12 - v14) / 2;
  if ( v7 && (*(_WORD *)(gpsi + 8676LL) < 8u || *(_DWORD *)(gpsi + 5040LL) == 0xFFFFFF) )
  {
    GreSetBkColor(a1);
    GreSetTextColor(a1);
    v23[0] = v15;
    v23[2] = v21;
    v23[3] = v22;
    v23[1] = v16;
    v24 = *(_QWORD *)(gpsi + 5336LL);
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v23, 1);
    GreSetBkColor(a1);
  }
  else
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v4, 1, 0LL, 0LL, 0);
  }
  v17 = v4 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v17++, 1, 0LL, 0LL, 0);
  }
  if ( (a3 & 0x400) != 0 )
  {
    GreSetTextColor(a1);
    FlipUserTextOutW(a1, v15, v16, v17);
  }
  GreSetTextColor(a1);
  return 1LL;
}
