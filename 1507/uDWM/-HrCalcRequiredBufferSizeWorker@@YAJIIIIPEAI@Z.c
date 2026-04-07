/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x18003D944
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18003D8FC (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009D0E8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r10
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a2;
  v7 = 0;
  if ( !a4 )
    goto LABEL_7;
  v8 = (unsigned int)(a4 - 1);
  v9 = a3 * (unsigned __int64)a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v13 = 1593;
LABEL_14:
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, v13);
    return v5;
  }
  if ( (int)v9 + 7 < (unsigned int)v9 )
  {
    v13 = 1594;
    goto LABEL_14;
  }
  v10 = (unsigned int)(v9 + 7) >> 3;
  if ( (unsigned int)v6 < v10 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x63Fu);
    return v5;
  }
  v11 = v6 * v8;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = 1602;
    goto LABEL_14;
  }
  v7 = v11 + v10;
  if ( (unsigned int)v11 + v10 < (unsigned int)v11 )
  {
    v13 = 1603;
    goto LABEL_14;
  }
LABEL_7:
  *a5 = v7;
  return v5;
}
