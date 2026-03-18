/*
 * XREFs of NtGdiGetTextExtentExW @ 0x1C0022700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GreGetTextExtentExW @ 0x1C01523C4 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        char *Src,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        char *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v8; // r14
  HDC v10; // r10
  unsigned int v11; // r13d
  unsigned __int16 *v12; // rdx
  _BYTE *v13; // rsi
  int v14; // r12d
  unsigned int TextExtent; // ebx
  unsigned __int16 *v16; // r9
  char *v17; // rax
  int *v18; // rcx
  unsigned int *v19; // r15
  _QWORD *v20; // rax
  size_t v21; // r8
  __int64 v23; // [rsp+40h] [rbp-108h] BYREF
  int v24; // [rsp+48h] [rbp-100h]
  _BYTE *v25; // [rsp+50h] [rbp-F8h]
  __int64 v26; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-E8h]
  unsigned __int16 *v28; // [rsp+68h] [rbp-E0h]
  unsigned __int16 *v29; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v30; // [rsp+78h] [rbp-D0h]
  HDC v31; // [rsp+80h] [rbp-C8h]
  HDC v32; // [rsp+88h] [rbp-C0h]
  char *v33; // [rsp+90h] [rbp-B8h]
  _BYTE v34[64]; // [rsp+A0h] [rbp-A8h] BYREF
  _BYTE v35[32]; // [rsp+E0h] [rbp-68h] BYREF

  v8 = a3;
  v10 = a1;
  v31 = a1;
  v32 = a1;
  v27 = a3;
  v33 = a6;
  v30 = a7;
  v11 = 0;
  v23 = 0LL;
  v12 = 0LL;
  v28 = 0LL;
  v13 = 0LL;
  v25 = 0LL;
  v14 = 0;
  v24 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( a3 )
  {
    LOBYTE(v14) = a3 <= 0x10;
    v24 = v14;
    if ( Src )
    {
      if ( v14 )
      {
        v16 = (unsigned __int16 *)v35;
        v28 = (unsigned __int16 *)v35;
        v13 = v34;
        v25 = v34;
      }
      else
      {
        if ( a3 <= 0x682AAA )
        {
          v13 = (_BYTE *)AllocFreeTmpBuffer(6 * a3);
          v25 = v13;
        }
        v16 = (unsigned __int16 *)&v13[4 * v8];
        v28 = v16;
      }
      v29 = v16;
      if ( v13 )
      {
        v17 = &Src[2 * v8];
        if ( v17 < Src || (unsigned __int64)v17 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v16, Src, 2 * v8);
        TextExtent = 1;
        HIDWORD(v23) = 1;
      }
      v12 = v29;
      v10 = v31;
    }
    if ( TextExtent )
    {
      if ( a6 )
        v18 = (int *)v13;
      else
        v18 = 0LL;
      v19 = a5;
      TextExtent = GreGetTextExtentExW(v10, v12, v8, (__int64)&v23, v18, (__int64)&v26, a8);
      HIDWORD(v23) = TextExtent;
      v11 = v23;
    }
    else
    {
      v19 = a5;
    }
    if ( !TextExtent )
      goto LABEL_35;
  }
  else
  {
    v23 = 0x100000000LL;
    v26 = 0LL;
    TextExtent = 1;
    v19 = a5;
  }
  if ( v11 > (unsigned int)v8 )
  {
    TextExtent = 0;
  }
  else
  {
    v20 = (_QWORD *)v30;
    if ( v30 >= W32UserProbeAddress )
      v20 = (_QWORD *)W32UserProbeAddress;
    *v20 = v26;
    if ( v19 )
    {
      if ( (unsigned __int64)v19 >= W32UserProbeAddress )
        v19 = (unsigned int *)W32UserProbeAddress;
      *v19 = v11;
    }
    if ( v11 && a6 && v13 )
    {
      v21 = 4LL * v11;
      if ( (unsigned __int64)&a6[v21] > W32UserProbeAddress || &a6[v21] <= a6 || ((unsigned __int8)a6 & 3) != 0 )
        *W32UserProbeAddress = 0;
      memmove(a6, v13, v21);
    }
  }
LABEL_35:
  if ( !v14 && v13 )
    FreeTmpBuffer(v13);
  return TextExtent;
}
