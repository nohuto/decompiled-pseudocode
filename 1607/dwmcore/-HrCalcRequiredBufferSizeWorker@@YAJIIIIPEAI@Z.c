/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x18009EBD4
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18009EB8C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009F55C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a2;
  v7 = 0;
  if ( !a4 )
    goto LABEL_7;
  v8 = (unsigned int)(a4 - 1);
  v9 = a3 * (unsigned __int64)a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v14 = 1593;
LABEL_11:
    v13 = -2147024362;
    v5 = -2147024362;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
    return v5;
  }
  if ( (int)v9 + 7 < (unsigned int)v9 )
  {
    v14 = 1594;
    goto LABEL_11;
  }
  v10 = (unsigned int)(v9 + 7) >> 3;
  if ( (unsigned int)v6 < v10 )
  {
    v5 = -2147024809;
    v14 = 1599;
    v13 = -2147024809;
    goto LABEL_13;
  }
  v11 = v6 * v8;
  if ( v11 > 0xFFFFFFFF )
  {
    v14 = 1602;
    goto LABEL_11;
  }
  v7 = v11 + v10;
  if ( (unsigned int)v11 + v10 < (unsigned int)v11 )
  {
    v14 = 1603;
    goto LABEL_11;
  }
LABEL_7:
  *a5 = v7;
  return v5;
}
