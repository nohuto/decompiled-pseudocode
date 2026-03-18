/*
 * XREFs of GreCreateDIBBrush @ 0x1C02B3ABC
 * Callers:
 *     GreExtCreatePen @ 0x1C010D128 (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C02B3E00 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C02B3A30 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
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
  HSURF DIBitmapReal; // rax
  HSURF v29; // r15
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rbx
  void *v33; // rcx
  ULONG v35; // ecx
  _BYTE v36[32]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v37; // [rsp+98h] [rbp-19h]
  _QWORD v38[6]; // [rsp+A0h] [rbp-11h] BYREF
  int v39; // [rsp+D0h] [rbp+1Fh]
  __int64 v40; // [rsp+108h] [rbp+57h]

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
    v35 = 534;
LABEL_60:
    EngSetLastError(v35);
    return 0LL;
  }
  v25 = (v24 + 3) & 0xFFFFFFFC;
  if ( v25 > a3 - (unsigned int)v10 )
  {
LABEL_59:
    v35 = 87;
    goto LABEL_60;
  }
  v26 = &v13[v25];
  v27 = 0;
  if ( a2 )
    v27 = 3;
  DIBitmapReal = (HSURF)GreCreateDIBitmapReal(
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
  v29 = DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    SURFREF::SURFREF((SURFREF *)v36, DIBitmapReal);
    if ( !v37 )
    {
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v36);
      return 0LL;
    }
    v30 = *(_QWORD *)(v37 + 56);
    if ( (int)v30 > 8 )
      LODWORD(v30) = 8;
    LODWORD(v40) = v30;
    v31 = HIDWORD(*(_QWORD *)(v37 + 56));
    if ( *(int *)(v37 + 60) > 8 )
      v31 = 8;
    HIDWORD(v40) = v31;
    *(_QWORD *)(v37 + 56) = v40;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v36);
  }
  if ( a2 == 1 )
  {
    SURFREF::SURFREF((SURFREF *)v36, v29);
    v32 = *(_QWORD *)(v37 + 120);
    v33 = *(void **)(v32 + 120);
    *(_DWORD *)(v32 + 24) |= 0x4000u;
    memmove(v33, v17, 2 * v14);
    *(_DWORD *)(v32 + 60) = v14;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v36);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v38, (HBITMAP)v29, a6, 0, a2, 0x80u, a5);
  if ( v38[0] )
  {
    v39 = 1;
    *(_DWORD *)(v38[0] + 88LL) = a2;
    v6 = *(_QWORD *)v38[0];
  }
  else
  {
    bDeleteSurface(v29);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v38);
  return v6;
}
