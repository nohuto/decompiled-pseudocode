/*
 * XREFs of bInitBRUSHOBJ @ 0x1C013A9B0
 * Callers:
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     GreCreateBitmap @ 0x1C00227F0 (GreCreateBitmap.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     GreCreatePatternBrushInternal @ 0x1C005CFD0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005D180 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005D1AC (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005DAB0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     bInitBrush @ 0x1C013A910 (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  struct HOBJ__ **v0; // rbx
  _QWORD **SystemArgument2; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  struct HOBJ__ **v4; // rbx
  _QWORD **v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  struct HOBJ__ **v8; // rbx
  _QWORD **v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  struct HOBJ__ **v12; // rbx
  _QWORD **v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  struct BRUSH *v16; // rbx
  struct BRUSH *v17; // rbx
  HBITMAP Bitmap; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 *v21; // rbx
  struct HOBJ__ **v23[2]; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+40h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C0101088, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v23, 0, 0xCu, 1, 0);
  v0 = v23[0];
  if ( v23[0] )
  {
    v24 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v23);
    *((_DWORD *)v0 + 12) |= 0xC00u;
    *((_DWORD *)v0 + 40) = 5;
    *((_DWORD *)v0 + 38) = 1;
    SystemArgument2 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
    v2 = (unsigned __int64)*v0 | 0x300000;
    v3 = 3LL * *(unsigned __int16 *)v0;
    *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 4 * v3 + 6) = (*(_DWORD *)v0 | 0x300000u) >> 16;
    *SystemArgument2[v3] = v2;
    bSetStockObject((unsigned __int64)*v0, 8, 0);
    gpPenNull = (struct PEN *)v0;
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v23, 0, 7u, 1, 0);
    v4 = v23[0];
    if ( v23[0] )
    {
      v24 = 1;
      BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v23);
      *((_DWORD *)v4 + 12) |= 0xC00u;
      *(struct HOBJ__ **)((char *)v4 + 156) = 0LL;
      *((_DWORD *)v4 + 38) = 0;
      *((_WORD *)v4 + 90) = 0;
      v4[21] = 0LL;
      v5 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
      v6 = (unsigned __int64)*v4 | 0x300000;
      v7 = 3LL * *(unsigned __int16 *)v4;
      *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 4 * v7 + 6) = (*(_DWORD *)v4 | 0x300000u) >> 16;
      *v5[v7] = v6;
      bSetStockObject((unsigned __int64)*v4, 7, 0);
      qword_1C0101228 = (__int64)*v4;
      qword_1C0101090 = (__int64)v4;
      BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v23, 0xFFFFFF, 7u, 1, 0);
      v8 = v23[0];
      if ( v23[0] )
      {
        v24 = 1;
        BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v23);
        *((_DWORD *)v8 + 12) |= 0xC00u;
        *(struct HOBJ__ **)((char *)v8 + 156) = 0LL;
        *((_DWORD *)v8 + 38) = 0;
        *((_WORD *)v8 + 90) = 0;
        v8[21] = 0LL;
        v9 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
        v10 = (unsigned __int64)*v8 | 0x300000;
        v11 = 3LL * *(unsigned __int16 *)v8;
        *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 4 * v11 + 6) = (*(_DWORD *)v8 | 0x300000u) >> 16;
        *v9[v11] = v10;
        bSetStockObject((unsigned __int64)*v8, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v23, 0, 7u, 1, 0);
        v12 = v23[0];
        if ( v23[0] )
        {
          v24 = 1;
          BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v23);
          *((_DWORD *)v12 + 12) |= 0xC00u;
          *(struct HOBJ__ **)((char *)v12 + 156) = 0LL;
          *((_DWORD *)v12 + 38) = 0;
          *((_WORD *)v12 + 90) = 0;
          v12[21] = 0LL;
          v13 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
          v14 = (unsigned __int64)*v12 | 0x300000;
          v15 = 3LL * *(unsigned __int16 *)v12;
          *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 4 * v15 + 6) = (*(_DWORD *)v12 | 0x300000u) >> 16;
          *v13[v15] = v14;
          bSetStockObject((unsigned __int64)*v12, 19, 0);
          ghbrDCPen = (HBRUSH)*v12;
          gpbrDCPen = (struct BRUSH *)v12;
          BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v23, 0, 9u, 0, 0);
          v16 = (struct BRUSH *)v23[0];
          if ( v23[0] )
          {
            v24 = 1;
            BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v23);
            ghbrText = *(HBRUSH *)v16;
            gpbrText = v16;
            BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v23, 0xFFFFFF, 0xBu, 0, 0);
            v17 = (struct BRUSH *)v23[0];
            if ( v23[0] )
            {
              v24 = 1;
              BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v23);
              ghbrBackground = *(HBRUSH *)v17;
              gpbrBackground = v17;
              BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C0102108);
              v19 = (__int64)Bitmap;
              if ( !Bitmap )
                return 0LL;
              ghbrGrayPattern = (HBRUSH)GreCreatePatternBrushInternal(Bitmap, 0LL, 0LL);
              if ( !ghbrGrayPattern )
                return 0LL;
              GreDeleteObject(v19, v20);
              GreSetBrushOwner(ghbrGrayPattern, 0);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v23, 0xFFFFFF, 7u, 0, 0);
              v21 = (unsigned __int64 *)v23[0];
              if ( v23[0] )
              {
                v24 = 1;
                BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v23);
                bSetStockObject(*v21, 18, 0);
                ghbrDCBrush = (HBRUSH)*v21;
                gpbrDCBrush = (struct BRUSH *)v21;
                BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v23);
  return 0LL;
}
