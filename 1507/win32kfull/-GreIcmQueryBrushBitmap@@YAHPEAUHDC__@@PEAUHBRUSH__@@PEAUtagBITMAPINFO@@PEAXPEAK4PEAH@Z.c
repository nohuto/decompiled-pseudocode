/*
 * XREFs of ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B0454
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02B11C0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0016330 (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C0098AFC (GreGetBitmapBitsSize.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E5208 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E5234 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreIcmQueryBrushBitmap(
        HDC a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        unsigned __int8 *a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int DIBitsInternal; // ebx
  unsigned int v8; // r15d
  int v9; // ebp
  BRUSH *v12; // rax
  unsigned int BitmapBitsSize; // eax
  unsigned int v14; // edi
  LONG biHeight; // r9d
  BRUSH *v17[6]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v18[13]; // [rsp+80h] [rbp-68h] BYREF

  DIBitsInternal = 0;
  v8 = 0;
  v9 = 0;
  if ( !a3 || !a6 || !a7 || !a5 )
    return 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( v18[0] && (*(_DWORD *)(v18[0] + 112LL) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v17, a2);
    if ( v17[0] )
    {
      if ( (*((_DWORD *)v17[0] + 12) & 0x80u) != 0 )
      {
        v8 = *((_DWORD *)v17[0] + 22);
        if ( !v8 )
        {
          if ( BRUSH::hFindIcmDIB(v17[0], *(void **)(*(_QWORD *)(v18[0] + 80LL) + 112LL)) )
          {
            v9 = 1;
          }
          else
          {
            memset(a3, 0, 0x428uLL);
            v12 = v17[0];
            a3->bmiHeader.biSize = 44;
            DIBitsInternal = GreGetDIBitsInternal(a1, *((HSURF *)v12 + 4), 0, 0, 0LL, a3, 0, 0, 0x428u);
            if ( DIBitsInternal )
            {
              BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
              v14 = BitmapBitsSize;
              if ( BitmapBitsSize )
              {
                if ( a4 )
                {
                  if ( BitmapBitsSize <= *a5 )
                  {
                    biHeight = a3->bmiHeader.biHeight;
                    if ( biHeight < 0 )
                      biHeight = -biHeight;
                    DIBitsInternal = GreGetDIBitsInternal(
                                       a1,
                                       *((HSURF *)v17[0] + 4),
                                       0,
                                       biHeight,
                                       a4,
                                       a3,
                                       0,
                                       BitmapBitsSize,
                                       0x428u);
                    *a5 = v14;
                  }
                }
                else
                {
                  *a5 = BitmapBitsSize;
                  DIBitsInternal = 1;
                }
              }
              else
              {
                DIBitsInternal = 0;
              }
            }
          }
        }
      }
    }
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v17);
  }
  *a6 = v8;
  *a7 = v9;
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return DIBitsInternal;
}
