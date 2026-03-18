/*
 * XREFs of GreCreateDIBBrush @ 0x1C02B0C10
 * Callers:
 *     GreExtCreatePen @ 0x1C00EDBE8 (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C02B0F60 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0009524 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall GreCreateDIBBrush(unsigned int *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rdi
  __int64 v10; // r11
  unsigned int v11; // edx
  int v12; // eax
  char *v13; // rbx
  unsigned int v14; // r14d
  int v15; // r10d
  unsigned int v16; // ecx
  const void *v17; // r13
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  char *v26; // rbx
  int v27; // eax
  __int64 DIBitmapReal; // rax
  __int64 v29; // rdx
  HBITMAP v30; // r15
  __int64 v31; // rax
  __int64 v32; // rcx
  bool v33; // cc
  int v34; // ecx
  __int64 v35; // rbx
  void *v36; // rcx
  ULONG v38; // ecx
  __int64 v39; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v40[2]; // [rsp+80h] [rbp+Fh] BYREF
  int v41; // [rsp+90h] [rbp+1Fh]
  __int64 v42; // [rsp+C8h] [rbp+57h] BYREF

  v6 = 0LL;
  if ( !a1 )
    goto LABEL_59;
  if ( a3 < 0x28 )
    goto LABEL_59;
  v10 = *a1;
  if ( (unsigned int)v10 > a3 )
    goto LABEL_59;
  v11 = 2;
  if ( a2 > 2 )
    goto LABEL_59;
  v12 = *((unsigned __int16 *)a1 + 7);
  v13 = (char *)a1 + v10;
  v14 = a1[8];
  v15 = 4;
  v16 = a1[4];
  v17 = v13;
  switch ( v16 )
  {
    case 3u:
      v14 = 3;
      if ( a2 == 1 )
        a2 = 0;
      if ( ((v12 - 16) & 0xFFFFFFEF) != 0 )
        return 0LL;
      break;
    case 0u:
      v18 = v12 - 1;
      if ( v18 )
      {
        v19 = v18 - 3;
        if ( v19 )
        {
          v20 = v19 - 4;
          if ( v20 )
          {
            v21 = v20 - 8;
            if ( v21 )
            {
              v22 = v21 - 8;
              if ( v22 )
              {
                if ( v22 != 8 )
                  return 0LL;
              }
            }
            v23 = 0;
            if ( a2 == 1 )
              a2 = 0;
            goto LABEL_23;
          }
          v23 = 256;
        }
        else
        {
          v23 = 16;
        }
      }
      else
      {
        v23 = 2;
      }
      if ( v14 && v23 >= v14 )
        break;
LABEL_23:
      v14 = v23;
      break;
    case 2u:
      if ( v12 != 4 )
        return 0LL;
      if ( !v14 )
        v14 = 16;
      break;
    default:
      if ( v16 != 1 || v12 != 8 )
        return 0LL;
      if ( !v14 )
        v14 = 256;
      break;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v15 = 0;
    v11 = v15;
  }
  v24 = v11 * (unsigned __int64)v14;
  if ( v24 > 0xFFFFFFFF || (int)v24 + 3 < (unsigned int)v24 )
  {
    v38 = 534;
LABEL_60:
    EngSetLastError(v38);
    return 0LL;
  }
  v25 = (v24 + 3) & 0xFFFFFFFC;
  if ( v25 > a3 - (unsigned int)v10 )
  {
LABEL_59:
    v38 = 87;
    goto LABEL_60;
  }
  v26 = &v13[v25];
  v27 = 0;
  if ( a2 )
    v27 = 3;
  DIBitmapReal = GreCreateDIBitmapReal(
                   0LL,
                   v25,
                   v26,
                   a1,
                   v27,
                   a3,
                   a3 + (_DWORD)a1 - (_DWORD)v26,
                   0LL,
                   0,
                   0LL,
                   1u,
                   0LL,
                   0LL);
  v30 = (HBITMAP)DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    LOBYTE(v29) = 5;
    v31 = HmgShareLockCheck(DIBitmapReal, v29);
    v39 = v31;
    if ( !v31 )
    {
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v39);
      return 0LL;
    }
    v32 = *(_QWORD *)(v31 + 56);
    v42 = v32;
    if ( (int)v32 > 8 )
      LODWORD(v32) = 8;
    v33 = *(_DWORD *)(v31 + 60) <= 8;
    LODWORD(v42) = v32;
    v34 = HIDWORD(v42);
    if ( !v33 )
      v34 = 8;
    HIDWORD(v42) = v34;
    *(_QWORD *)(v31 + 56) = v42;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v39);
  }
  if ( a2 == 1 )
  {
    LOBYTE(v29) = 5;
    v42 = HmgShareLockCheck(v30, v29);
    v35 = *(_QWORD *)(v42 + 120);
    v36 = *(void **)(v35 + 128);
    *(_DWORD *)(v35 + 24) |= 0x4000u;
    memmove(v36, v17, 2 * v14);
    *(_DWORD *)(v35 + 60) = v14;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v42);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v40, v30, a6, 0, a2, 0x80u, a5);
  if ( v40[0] )
  {
    v41 = 1;
    *(_DWORD *)(v40[0] + 88LL) = a2;
    v6 = *(_QWORD *)v40[0];
  }
  else
  {
    bDeleteSurface(v30);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v40);
  return v6;
}
