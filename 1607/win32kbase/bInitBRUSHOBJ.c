/*
 * XREFs of bInitBRUSHOBJ @ 0x1C0155E74
 * Callers:
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     HmgMarkUndeletable @ 0x1C005B650 (HmgMarkUndeletable.c)
 *     GreCreatePatternBrushInternal @ 0x1C005B700 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005B8D8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005B918 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005B950 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005C1A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C005C300 (HmgModifyHandleType.c)
 *     GreCreateBitmap @ 0x1C005D0D0 (GreCreateBitmap.c)
 *     bInitBrush @ 0x1C0155DCC (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 v0; // rax
  HBITMAP Bitmap; // rax
  struct HOBJ__ *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 *v6[6]; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+60h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C0119008, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 0xCu, 1, 0);
  if ( v6[0] )
  {
    v7 = 1;
    BRUSHMEMOBJ::vGlobal(v6);
    *((_DWORD *)v6[0] + 12) |= 0xC00u;
    *((_DWORD *)v6[0] + 40) = 5;
    *((_DWORD *)v6[0] + 38) = 1;
    HmgModifyHandleType(*v6[0] | 0x300000);
    bSetStockObject(*v6[0], 8, 0);
    gpPenNull = (struct PEN *)v6[0];
    BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 7u, 1, 0);
    if ( v6[0] )
    {
      v7 = 1;
      BRUSHMEMOBJ::vGlobal(v6);
      *((_DWORD *)v6[0] + 12) |= 0xC00u;
      *((_DWORD *)v6[0] + 40) = 0;
      *((_DWORD *)v6[0] + 38) = 0;
      *((_DWORD *)v6[0] + 39) = 0;
      *((_BYTE *)v6[0] + 180) = 0;
      *((_BYTE *)v6[0] + 181) = 0;
      v6[0][21] = 0LL;
      HmgModifyHandleType(*v6[0] | 0x300000);
      bSetStockObject(*v6[0], 7, 0);
      v0 = *v6[0];
      qword_1C0119010 = (__int64)v6[0];
      qword_1C01191A8 = v0;
      BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 7u, 1, 0);
      if ( v6[0] )
      {
        v7 = 1;
        BRUSHMEMOBJ::vGlobal(v6);
        *((_DWORD *)v6[0] + 12) |= 0xC00u;
        *((_DWORD *)v6[0] + 40) = 0;
        *((_DWORD *)v6[0] + 38) = 0;
        *((_DWORD *)v6[0] + 39) = 0;
        *((_BYTE *)v6[0] + 180) = 0;
        *((_BYTE *)v6[0] + 181) = 0;
        v6[0][21] = 0LL;
        HmgModifyHandleType(*v6[0] | 0x300000);
        bSetStockObject(*v6[0], 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 7u, 1, 0);
        if ( v6[0] )
        {
          v7 = 1;
          BRUSHMEMOBJ::vGlobal(v6);
          *((_DWORD *)v6[0] + 12) |= 0xC00u;
          *((_DWORD *)v6[0] + 40) = 0;
          *((_DWORD *)v6[0] + 38) = 0;
          *((_DWORD *)v6[0] + 39) = 0;
          *((_BYTE *)v6[0] + 180) = 0;
          *((_BYTE *)v6[0] + 181) = 0;
          v6[0][21] = 0LL;
          HmgModifyHandleType(*v6[0] | 0x300000);
          bSetStockObject(*v6[0], 19, 0);
          gpbrDCPen = (struct BRUSH *)v6[0];
          BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 9u, 0, 0);
          if ( v6[0] )
          {
            v7 = 1;
            BRUSHMEMOBJ::vGlobal(v6);
            gpbrText = (struct BRUSH *)v6[0];
            BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 0xBu, 0, 0);
            if ( v6[0] )
            {
              v7 = 1;
              BRUSHMEMOBJ::vGlobal(v6);
              gpbrBackground = (struct BRUSH *)v6[0];
              BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C0119748);
              v2 = (struct HOBJ__ *)Bitmap;
              if ( !Bitmap )
                return 0LL;
              ghbrGrayPattern = (HBRUSH)GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !ghbrGrayPattern )
                return 0LL;
              GreDeleteObject(v2);
              GreSetBrushOwner(ghbrGrayPattern, 0);
              v3 = HmgShareLockCheck((unsigned int)ghbrGrayPattern, 16);
              if ( !v3 )
                return 0LL;
              v4 = (unsigned int)ghbrGrayPattern;
              *(_DWORD *)(v3 + 48) |= 0x200u;
              HmgMarkUndeletable(v4, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 7u, 0, 0);
              if ( v6[0] )
              {
                v7 = 1;
                BRUSHMEMOBJ::vGlobal(v6);
                bSetStockObject(*v6[0], 18, 0);
                gpbrDCBrush = (struct BRUSH *)v6[0];
                BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v6);
  return 0LL;
}
