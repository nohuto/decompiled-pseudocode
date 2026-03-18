/*
 * XREFs of ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AF670
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02B03C0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0042840 (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C004B524 (GreGetBitmapBitsSize.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EDEF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EDF2C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  unsigned int v8; // r12d
  int v9; // ebp
  int *v11; // rsi
  __int64 v12; // rdi
  BRUSH *v13; // rsi
  unsigned int BitmapBitsSize; // edi
  LONG biHeight; // r9d
  __int64 result; // rax
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  int v18; // [rsp+58h] [rbp-50h]
  int v19; // [rsp+5Ch] [rbp-4Ch]
  BRUSH *v20[9]; // [rsp+60h] [rbp-48h] BYREF

  DIBitsInternal = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    if ( a6 )
    {
      v11 = a7;
      if ( a7 )
      {
        if ( a5 )
        {
          v18 = 0;
          v19 = 0;
          XDCOBJ::vLock((XDCOBJ *)&v17, a1);
          v12 = v17;
          if ( !v17 )
          {
LABEL_24:
            *a6 = v8;
            result = DIBitsInternal;
            *v11 = v9;
            return result;
          }
          if ( (*(_DWORD *)(v17 + 112) & 1) == 0 )
          {
LABEL_23:
            XDCOBJ::vUnlockFast((XDCOBJ *)&v17);
            goto LABEL_24;
          }
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v20, a2);
          v13 = v20[0];
          if ( v20[0] )
          {
            if ( (*((_DWORD *)v20[0] + 12) & 0x80u) != 0 )
            {
              v8 = *((_DWORD *)v20[0] + 22);
              if ( !v8 )
              {
                if ( BRUSH::hFindIcmDIB(v20[0], *(void **)(*(_QWORD *)(v12 + 80) + 112LL)) )
                {
                  v9 = 1;
                }
                else
                {
                  memset(a3, 0, 0x428uLL);
                  a3->bmiHeader.biSize = 44;
                  DIBitsInternal = GreGetDIBitsInternal((__int64)a1, *((_QWORD *)v13 + 4), 0, 0, 0LL, a3, 0, 0, 0x428u);
                  if ( DIBitsInternal )
                  {
                    BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
                    if ( BitmapBitsSize )
                    {
                      if ( a4 )
                      {
                        if ( BitmapBitsSize > *a5 )
                          goto LABEL_22;
                        biHeight = a3->bmiHeader.biHeight;
                        if ( biHeight < 0 )
                          biHeight = -biHeight;
                        DIBitsInternal = GreGetDIBitsInternal(
                                           (__int64)a1,
                                           *((_QWORD *)v13 + 4),
                                           0,
                                           biHeight,
                                           a4,
                                           a3,
                                           0,
                                           BitmapBitsSize,
                                           0x428u);
                      }
                      else
                      {
                        DIBitsInternal = 1;
                      }
                      *a5 = BitmapBitsSize;
                      goto LABEL_22;
                    }
                    DIBitsInternal = 0;
                  }
                }
              }
            }
          }
LABEL_22:
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v20);
          v11 = a7;
          goto LABEL_23;
        }
      }
    }
  }
  return 0LL;
}
