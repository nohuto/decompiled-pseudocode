/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C007467C
 * Callers:
 *     EngCreateDeviceSurface @ 0x1C00745C0 (EngCreateDeviceSurface.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x1C0074610 (EngCreateRedirectionDeviceBitmap.c)
 *     EngCreateBitmap @ 0x1C0074650 (EngCreateBitmap.c)
 *     EngCreateDeviceBitmap @ 0x1C00BF330 (EngCreateDeviceBitmap.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rbx
  __int64 v10; // rdx
  int v11; // r8d
  __int64 *v12; // rcx
  unsigned __int64 v14; // rax
  __int64 *v15; // [rsp+68h] [rbp-1h] BYREF
  char v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+74h] [rbp+Bh]
  unsigned int v18; // [rsp+78h] [rbp+Fh] BYREF
  struct tagSIZE v19; // [rsp+7Ch] [rbp+13h]
  _DWORD v20[5]; // [rsp+84h] [rbp+1Bh]

  v7 = 0LL;
  v19 = a3;
  v20[0] = 0;
  v20[4] = 0;
  v18 = a5 & 0xFFFF7FFF;
  *(_QWORD *)&v20[1] = 0LL;
  v20[3] = a6;
  if ( !a7 || !a4 )
    goto LABEL_11;
  switch ( a5 & 0xFFFF7FFF )
  {
    case 1u:
      v14 = 8LL * a4;
LABEL_21:
      if ( v14 > 0xFFFFFFFF )
        return 0LL;
      v19.cx = v14;
      break;
    case 2u:
      v14 = 2LL * a4;
      goto LABEL_21;
    case 3u:
LABEL_10:
      v19.cx = a4;
      break;
    case 4u:
      a4 >>= 1;
      goto LABEL_10;
    case 5u:
      v19.cx = a4 / 3;
      break;
    case 6u:
      a4 >>= 2;
      goto LABEL_10;
  }
LABEL_11:
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v15,
    (struct _DEVBITMAPINFO *)&v18,
    a7,
    0LL,
    0,
    0LL,
    0LL,
    (a5 & 0x8000) == 0,
    a7 == 0LL,
    0,
    0);
  v12 = v15;
  if ( v15 )
  {
    if ( a1 == 3 )
      *((_DWORD *)v15 + 28) |= 0x400000u;
    if ( a1 )
    {
      *((_DWORD *)v12 + 22) = 0;
      v12[10] = 0LL;
      v12[9] = 0LL;
    }
    *((_DWORD *)v12 + 28) |= 0x200000u;
    v16 |= 1u;
    v12[7] = (__int64)a3;
    v12[3] = (__int64)a2;
    *((_WORD *)v12 + 50) = a1;
    if ( (a5 & 0x8000) != 0 )
      *((_DWORD *)v12 + 28) |= 0x40000u;
    v7 = v12[4];
  }
  SURFMEM::~SURFMEM(&v15, v10, v11);
  return v7;
}
