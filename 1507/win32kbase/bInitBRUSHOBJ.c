/*
 * XREFs of bInitBRUSHOBJ @ 0x1C0138530
 * Callers:
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C000C2C0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000C498 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     GreCreateBitmap @ 0x1C0044870 (GreCreateBitmap.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C007BBE0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C007BC34 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     bInitBrush @ 0x1C0138488 (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  HBRUSH v10; // rax
  HBITMAP Bitmap; // rax
  struct HOBJ__ *v12; // rbx
  __int64 *v14[6]; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+60h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C00FE0B8, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, (__int64 **)&gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, 0, 0xCu, 1, 0);
  if ( v14[0] )
  {
    v15 = 1;
    BRUSHMEMOBJ::vGlobal(v14);
    *((_DWORD *)v14[0] + 12) |= 0xC00u;
    *((_DWORD *)v14[0] + 40) = 5;
    *((_DWORD *)v14[0] + 38) = 1;
    v0 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    v1 = *v14[0] | 0x300000;
    v2 = 3LL * *(unsigned __int16 *)v14[0];
    *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8 * v2 + 12) = (*(_DWORD *)v14[0] | 0x300000u) >> 16;
    **(_QWORD **)(v0 + 8 * v2) = v1;
    bSetStockObject(*v14[0], 8, 0);
    gpPenNull = (struct PEN *)v14[0];
    BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, 0, 7u, 1, 0);
    if ( v14[0] )
    {
      v15 = 1;
      BRUSHMEMOBJ::vGlobal(v14);
      *((_DWORD *)v14[0] + 12) |= 0xC00u;
      *((_DWORD *)v14[0] + 40) = 0;
      *((_DWORD *)v14[0] + 38) = 0;
      *((_DWORD *)v14[0] + 39) = 0;
      *((_BYTE *)v14[0] + 180) = 0;
      *((_BYTE *)v14[0] + 181) = 0;
      v14[0][21] = 0LL;
      v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
      v4 = *v14[0] | 0x300000;
      *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v4 + 12) = (*(_DWORD *)v14[0] | 0x300000u) >> 16;
      **(_QWORD **)(v3 + 24LL * (unsigned __int16)v4) = v4;
      bSetStockObject(*v14[0], 7, 0);
      v5 = *v14[0];
      qword_1C00FE0C0 = (__int64)v14[0];
      qword_1C00FE258 = v5;
      BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, 0xFFFFFF, 7u, 1, 0);
      if ( v14[0] )
      {
        v15 = 1;
        BRUSHMEMOBJ::vGlobal(v14);
        *((_DWORD *)v14[0] + 12) |= 0xC00u;
        *((_DWORD *)v14[0] + 40) = 0;
        *((_DWORD *)v14[0] + 38) = 0;
        *((_DWORD *)v14[0] + 39) = 0;
        *((_BYTE *)v14[0] + 180) = 0;
        *((_BYTE *)v14[0] + 181) = 0;
        v14[0][21] = 0LL;
        v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
        v7 = *v14[0] | 0x300000;
        *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v7 + 12) = (*(_DWORD *)v14[0] | 0x300000u) >> 16;
        **(_QWORD **)(v6 + 24LL * (unsigned __int16)v7) = v7;
        bSetStockObject(*v14[0], 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, 0, 7u, 1, 0);
        if ( v14[0] )
        {
          v15 = 1;
          BRUSHMEMOBJ::vGlobal(v14);
          *((_DWORD *)v14[0] + 12) |= 0xC00u;
          *((_DWORD *)v14[0] + 40) = 0;
          *((_DWORD *)v14[0] + 38) = 0;
          *((_DWORD *)v14[0] + 39) = 0;
          *((_BYTE *)v14[0] + 180) = 0;
          *((_BYTE *)v14[0] + 181) = 0;
          v14[0][21] = 0LL;
          v8 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
          v9 = *v14[0] | 0x300000;
          *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v9 + 12) = (*(_DWORD *)v14[0] | 0x300000u) >> 16;
          **(_QWORD **)(v8 + 24LL * (unsigned __int16)v9) = v9;
          bSetStockObject(*v14[0], 19, 0);
          gpbrDCPen = (struct BRUSH *)v14[0];
          ghbrDCPen = (HBRUSH)*v14[0];
          BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, 0, 9u, 0, 0);
          if ( v14[0] )
          {
            v15 = 1;
            BRUSHMEMOBJ::vGlobal(v14);
            v10 = (HBRUSH)*v14[0];
            gpbrText = (struct BRUSH *)v14[0];
            ghbrText = v10;
            BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, 0xFFFFFF, 0xBu, 0, 0);
            if ( v14[0] )
            {
              v15 = 1;
              BRUSHMEMOBJ::vGlobal(v14);
              ghbrBackground = (HBRUSH)*v14[0];
              gpbrBackground = (struct BRUSH *)v14[0];
              BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C00FF160);
              v12 = (struct HOBJ__ *)Bitmap;
              if ( !Bitmap )
                return 0LL;
              ghbrGrayPattern = (HBRUSH)GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !ghbrGrayPattern )
                return 0LL;
              GreDeleteObject(v12);
              GreSetBrushOwner(ghbrGrayPattern, 0);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, 0xFFFFFF, 7u, 0, 0);
              if ( v14[0] )
              {
                v15 = 1;
                BRUSHMEMOBJ::vGlobal(v14);
                bSetStockObject(*v14[0], 18, 0);
                gpbrDCBrush = (struct BRUSH *)v14[0];
                ghbrDCBrush = (HBRUSH)*v14[0];
                BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v14);
  return 0LL;
}
