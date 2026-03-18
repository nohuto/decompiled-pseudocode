/*
 * XREFs of NtGdiGetTextExtentExW @ 0x1C01103F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextExtentExW @ 0x1C01106D0 (GreGetTextExtentExW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        char *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v8; // r14
  HDC v9; // r11
  unsigned int v10; // r15d
  _BYTE *v11; // r13
  __int64 v12; // rsi
  unsigned int TextExtent; // edi
  char *v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rdx
  size_t v17; // r8
  BOOL v18; // eax
  __int64 v20; // [rsp+40h] [rbp-F8h] BYREF
  BOOL v21; // [rsp+48h] [rbp-F0h]
  BOOL v22; // [rsp+4Ch] [rbp-ECh]
  __int64 v23; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-E0h]
  unsigned int v25; // [rsp+60h] [rbp-D8h]
  _BYTE *v26; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v27; // [rsp+70h] [rbp-C8h]
  HDC v28; // [rsp+78h] [rbp-C0h]
  HDC v29; // [rsp+80h] [rbp-B8h]
  char *v30; // [rsp+88h] [rbp-B0h]
  _BYTE v31[64]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v32[32]; // [rsp+D0h] [rbp-68h] BYREF

  v8 = a3;
  v23 = (__int64)a2;
  v9 = a1;
  v28 = a1;
  v29 = a1;
  v25 = a3;
  v30 = a6;
  v27 = a7;
  v10 = 0;
  v20 = 0LL;
  v11 = 0LL;
  v26 = 0LL;
  v12 = 0LL;
  v24 = 0LL;
  v21 = 0;
  v22 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( a3 )
  {
    v21 = a3 <= 0x10;
    v22 = v21;
    if ( a2 )
    {
      if ( a3 > 0x10 )
      {
        if ( a3 <= 0x682AAA )
        {
          v12 = AllocFreeTmpBuffer(6 * a3);
          v24 = (_BYTE *)v12;
          a2 = (char *)v23;
        }
        v11 = (_BYTE *)(v12 + 4 * v8);
        v26 = v11;
      }
      else
      {
        v11 = v32;
        v26 = v32;
        v12 = (__int64)v31;
        v24 = v31;
      }
      if ( v12 )
      {
        v14 = &a2[2 * v8];
        if ( v14 < a2 || (unsigned __int64)v14 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v11, a2, 2 * v8);
        TextExtent = 1;
        HIDWORD(v20) = 1;
      }
      v9 = v28;
    }
    if ( !TextExtent )
      goto LABEL_39;
    TextExtent = GreGetTextExtentExW(
                   v9,
                   (unsigned __int16 *)v11,
                   v8,
                   (__int64)&v20,
                   (int *)(v12 & -(__int64)(a6 != 0LL)),
                   (__int64)&v23,
                   a8);
    HIDWORD(v20) = TextExtent;
    v10 = v20;
    if ( !TextExtent )
      goto LABEL_39;
  }
  else
  {
    LODWORD(v20) = 0;
    v23 = 0LL;
    TextExtent = 1;
  }
  if ( v10 > (unsigned int)v8 )
    TextExtent = 0;
  HIDWORD(v20) = TextExtent;
  if ( TextExtent )
  {
    v15 = (_QWORD *)v27;
    if ( v27 >= W32UserProbeAddress )
      v15 = (_QWORD *)W32UserProbeAddress;
    *v15 = v23;
    v16 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 >= W32UserProbeAddress )
        v16 = (_DWORD *)W32UserProbeAddress;
      *v16 = v10;
    }
    if ( v10 && a6 && v12 )
    {
      v17 = 4LL * v10;
      if ( (unsigned __int64)&a6[v17] > W32UserProbeAddress || &a6[v17] <= a6 || ((unsigned __int8)a6 & 3) != 0 )
        *W32UserProbeAddress = 0;
      memmove(a6, (const void *)v12, v17);
    }
    v18 = v21;
    goto LABEL_35;
  }
LABEL_39:
  v18 = v21;
LABEL_35:
  if ( !v18 && v12 )
    FreeTmpBuffer(v12);
  return TextExtent;
}
