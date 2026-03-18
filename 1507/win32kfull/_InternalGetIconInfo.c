/*
 * XREFs of _InternalGetIconInfo @ 0x1C0095874
 * Callers:
 *     NtUserGetIconInfo @ 0x1C00936E0 (NtUserGetIconInfo.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0120E0C (-GetCursorHeight@@YAHXZ.c)
 *     _DuplicateCursor @ 0x1C012366C (_DuplicateCursor.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     _GetIconSize @ 0x1C0097BA8 (_GetIconSize.c)
 *     GreCreateDIBitmapReal @ 0x1C0098254 (GreCreateDIBitmapReal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall InternalGetIconInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        _DWORD *a5,
        int a6)
{
  __int64 v8; // rdi
  int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 DIBitmapReal; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // r10d
  int v20; // [rsp+70h] [rbp-B8h] BYREF
  __int64 Bitmap; // [rsp+78h] [rbp-B0h] BYREF
  BOOL v22; // [rsp+80h] [rbp-A8h]
  __int64 v23; // [rsp+88h] [rbp-A0h]
  __int64 v24; // [rsp+90h] [rbp-98h]
  _DWORD *v25; // [rsp+98h] [rbp-90h]
  __int64 v26; // [rsp+A0h] [rbp-88h]
  PUNICODE_STRING DestinationString; // [rsp+A8h] [rbp-80h]
  _QWORD v28[6]; // [rsp+B8h] [rbp-70h] BYREF

  DestinationString = a4;
  v8 = a1;
  v25 = a5;
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    v16 = *(__int64 **)(a1 + 96);
    if ( !v16 )
      return 0LL;
    v8 = *v16;
  }
  GetIconSize(v8, &v20, &Bitmap);
  v22 = v20 != *(_DWORD *)(v8 + 140);
  if ( a6 || !*(_QWORD *)(v8 + 96) )
  {
    v9 = Bitmap;
    v10 = Bitmap;
  }
  else
  {
    v9 = Bitmap;
    v10 = (int)Bitmap / 2;
  }
  Bitmap = GreCreateBitmap((unsigned int)v20, v10, 1LL, 1LL, 0LL);
  if ( !Bitmap )
    return 0LL;
  v11 = 0LL;
  v23 = 0LL;
  if ( *(_QWORD *)(v8 + 96) )
  {
    if ( *(_DWORD *)(v8 + 136) == 32 )
    {
      memset(v28, 0, 0x2CuLL);
      LODWORD(v28[0]) = 40;
      HIDWORD(v28[0]) = v20;
      LODWORD(v28[1]) = v9 / 2;
      *(_QWORD *)((char *)&v28[1] + 4) = 2097153LL;
      HIDWORD(v28[2]) = 0;
      v28[4] = 0LL;
      DIBitmapReal = GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 32LL), 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 32LL), 0LL);
    }
    v11 = DIBitmapReal;
    v23 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0LL;
    }
  }
  v24 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(v8 + 88));
  v26 = GreSelectBitmap(ghdcMem, Bitmap);
  if ( v22 )
  {
    v17 = *(_QWORD *)(v8 + 96);
    if ( !v17 || a6 )
      v18 = *(_DWORD *)(v8 + 144);
    else
      v18 = *(_DWORD *)(v8 + 144) >> 1;
    if ( !v17 || a6 )
      v19 = v9;
    else
      v19 = v9 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v19, ghdcMem2, 0, 0, *(_DWORD *)(v8 + 140), v18, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    if ( a6 || !*(_QWORD *)(v8 + 96) )
      v13 = v9;
    else
      v13 = v9 / 2;
    NtGdiBitBltInternal(ghdcMem, 0, 0, v20, v13, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v11 )
  {
    GreSelectBitmap(ghdcMem2, *(_QWORD *)(v8 + 96));
    GreSelectBitmap(ghdcMem, v11);
    if ( v22 )
      GreStretchBltInternal(
        ghdcMem,
        0,
        0,
        v9 / 2,
        ghdcMem2,
        0,
        0,
        *(_DWORD *)(v8 + 140),
        *(_DWORD *)(v8 + 144) >> 1,
        13369376,
        0,
        0);
    else
      NtGdiBitBltInternal(ghdcMem, 0, 0, v20, v9 / 2, ghdcMem2, 0, 0, 13369376, 0, 0);
  }
  GreSelectBitmap(ghdcMem2, v24);
  GreSelectBitmap(ghdcMem, v26);
  *(_DWORD *)a2 = *(_WORD *)(v8 + 74) == 3;
  *(_DWORD *)(a2 + 4) = *(__int16 *)(v8 + 84);
  *(_DWORD *)(a2 + 8) = *(__int16 *)(v8 + 86);
  *(_QWORD *)(a2 + 16) = Bitmap;
  *(_QWORD *)(a2 + 24) = v11;
  if ( a3 )
  {
    v14 = *(unsigned __int16 *)(v8 + 72);
    if ( (_WORD)v14 )
      *(_WORD *)a3 = UserGetAtomName(v14, *(_QWORD *)(a3 + 8), *(unsigned __int16 *)(a3 + 2) >> 1);
    else
      *(_WORD *)a3 = 0;
  }
  if ( DestinationString )
  {
    if ( (*(_QWORD *)(v8 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(v8 + 56));
    else
      *DestinationString = *(PUNICODE_STRING)(v8 + 56);
  }
  if ( v25 )
    *v25 = *(_DWORD *)(v8 + 136);
  return 1LL;
}
