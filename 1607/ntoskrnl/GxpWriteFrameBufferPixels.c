/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x140127B08
 * Callers:
 *     BgpGxDrawRectangle @ 0x140127A94 (BgpGxDrawRectangle.c)
 * Callees:
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     BgpGxConvertRectangleEx @ 0x1402394C4 (BgpGxConvertRectangleEx.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall GxpWriteFrameBufferPixels(unsigned int *a1, unsigned int *a2)
{
  unsigned int BitsPerPixel; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r12d
  int v7; // r14d
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  char v14; // cl
  unsigned int v15; // eax
  char *v16; // r13
  unsigned int v17; // r12d
  char *v18; // r15
  unsigned int v19; // edx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // r8d
  size_t v24; // r14
  __int64 v25; // r12
  int v26; // ebx
  unsigned int v27; // eax
  __int64 result; // rax
  unsigned int v29; // r9d
  unsigned int v30; // eax
  unsigned int v31; // eax
  _BYTE *v32; // r14
  __int64 v33; // r9
  int v34; // r14d
  unsigned int v35; // r15d
  unsigned int v36; // edx
  int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // [rsp+20h] [rbp-79h]
  unsigned int v40; // [rsp+24h] [rbp-75h]
  _BYTE *v41; // [rsp+28h] [rbp-71h] BYREF
  unsigned int v42; // [rsp+30h] [rbp-69h]
  unsigned int v43; // [rsp+34h] [rbp-65h]
  unsigned __int64 v44; // [rsp+38h] [rbp-61h] BYREF
  int v45; // [rsp+40h] [rbp-59h]
  unsigned int v46; // [rsp+44h] [rbp-55h]
  __int64 v47; // [rsp+48h] [rbp-51h]
  unsigned __int64 v48; // [rsp+50h] [rbp-49h]
  _BYTE v49[80]; // [rsp+60h] [rbp-39h] BYREF

  BitsPerPixel = BgpGetBitsPerPixel();
  v5 = DWORD2(BgInternal);
  v6 = BitsPerPixel;
  v7 = HIDWORD(BgInternal);
  v48 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v44 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  LODWORD(v41) = HIDWORD(BgInternal);
  if ( !a1 )
    return 3221225485LL;
  v8 = a1[1];
  v40 = v8;
  if ( !v8 )
    return 3221225485LL;
  v9 = *a1;
  v39 = *a1;
  if ( !*a1 || a1[2] != BitsPerPixel || !a2 )
    return 3221225485LL;
  v10 = *a2;
  v11 = a2[1];
  v42 = *a2;
  v43 = v11;
  if ( (dword_1402F9F90 & 2) == 0 )
  {
LABEL_31:
    v26 = -1073741823;
    goto LABEL_29;
  }
  if ( DWORD2(BgInternal) < v10 )
    goto LABEL_79;
  v12 = HIDWORD(v48);
  if ( HIDWORD(v48) < v11 )
    goto LABEL_79;
  if ( v8 > DWORD2(BgInternal) - v10 )
    a1[1] = DWORD2(BgInternal) - v10;
  v13 = v12 - a2[1];
  if ( v9 > v13 )
    *a1 = v13;
  v14 = BYTE2(BgInternal);
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    v29 = a1[1];
    if ( v29 < v8 && BYTE2(BgInternal) == 2 )
      *a2 = 0;
    else
      *a2 = v5 - *a2 - v29;
    if ( *a1 < v9 && BYTE2(BgInternal) == 2 )
      a2[1] = 0;
    else
      a2[1] = v12 - *a1 - a2[1];
    v14 = BYTE2(BgInternal);
  }
  if ( ((v14 - 1) & 0xFD) != 0 || !(_BYTE)BgInternal )
  {
    v5 = HIDWORD(v44);
    LODWORD(v12) = v44;
  }
  else
  {
    if ( v14 == 1 )
    {
      v30 = v11;
      if ( v8 < a1[1] )
        v30 = 0;
      *a2 = v30;
      a2[1] = v5 - a1[1] - v10;
    }
    else
    {
      v31 = v10;
      if ( v9 < *a1 )
        v31 = 0;
      a2[1] = v31;
      *a2 = v12 - *a1 - v11;
    }
    v14 = BYTE2(BgInternal);
  }
  if ( (unsigned int)v12 < *a2 )
    goto LABEL_79;
  v15 = a2[1];
  if ( v5 < v15 )
    goto LABEL_79;
  if ( (_BYTE)BgInternal )
  {
    v16 = (char *)*((_QWORD *)a1 + 3);
    v17 = v6 >> 3;
    v18 = (char *)qword_1402F9F40 + v17 * (*a2 + v7 * v15);
    switch ( v14 )
    {
      case 0:
LABEL_20:
        v19 = *a1;
        v20 = *a1;
        v21 = a1[1];
LABEL_21:
        v22 = v17 * v21;
        v23 = v17 * v7;
        if ( !v14 )
        {
          if ( v20 )
          {
            v24 = v22;
            v25 = v23;
            do
            {
              memmove(v18, v16, v24);
              v16 += v24;
              v18 += v25;
              --v20;
            }
            while ( v20 );
          }
          goto LABEL_25;
        }
        v34 = 0;
        if ( !v19 )
        {
LABEL_25:
          if ( qword_1402FA0E0 )
            ++*(_DWORD *)qword_1402FA0E0;
LABEL_27:
          v26 = 0;
LABEL_28:
          v8 = v40;
          v9 = v39;
LABEL_29:
          v27 = v42;
          *a1 = v9;
          a1[1] = v8;
          *a2 = v27;
          a2[1] = v43;
          return (unsigned int)v26;
        }
        while ( 1 )
        {
          v35 = 0;
          if ( a1[1] )
            break;
LABEL_77:
          if ( ++v34 >= *a1 )
            goto LABEL_25;
        }
        while ( 1 )
        {
          switch ( v14 )
          {
            case 1:
              v37 = v34;
              v38 = v8 - v35;
              break;
            case 2:
              v37 = v8 - v35 - 1;
              v38 = v9 - v34;
              break;
            case 3:
              v36 = v35;
              v37 = v9 - v34 - 1;
              goto LABEL_76;
            default:
              goto LABEL_31;
          }
          v36 = v38 - 1;
LABEL_76:
          memmove((char *)qword_1402F9F40 + v17 * (*a2 + (_DWORD)v41 * (v36 + a2[1]) + v37), v16, v17);
          v14 = BYTE2(BgInternal);
          v16 += v17;
          v9 = v39;
          ++v35;
          v8 = v40;
          if ( v35 >= a1[1] )
            goto LABEL_77;
        }
      case 1:
        goto LABEL_66;
      case 2:
        goto LABEL_20;
      case 3:
LABEL_66:
        v19 = *a1;
        v21 = *a1;
        v20 = a1[1];
        goto LABEL_21;
    }
LABEL_79:
    v26 = -1073741811;
    goto LABEL_29;
  }
  v32 = 0LL;
  v44 = *(_QWORD *)a1;
  v41 = 0LL;
  if ( (dword_1402F9F90 & 8) == 0 )
  {
    v46 = a1[3];
    v47 = *((_QWORD *)a1 + 3);
    v45 = xmmword_1402F9F30;
    goto LABEL_58;
  }
  if ( (dword_1402F9F90 & 0xC00) != 0 )
  {
    v33 = 1LL;
    v41 = v49;
  }
  else
  {
    v33 = 0LL;
  }
  result = BgpGxConvertRectangleEx(a1, 4LL, &v41, v33);
  if ( (int)result >= 0 )
  {
    v32 = v41;
    v46 = *((_DWORD *)v41 + 3);
    v47 = *((_QWORD *)v41 + 3);
    v45 = 1;
LABEL_58:
    v26 = ((__int64 (__fastcall *)(unsigned __int64 *, unsigned int *, _QWORD))qword_1402F9F40)(&v44, a2, 0LL);
    if ( v32 && v32 != v49 )
      BgpGxRectangleDestroy(v32);
    if ( v26 < 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  return result;
}
