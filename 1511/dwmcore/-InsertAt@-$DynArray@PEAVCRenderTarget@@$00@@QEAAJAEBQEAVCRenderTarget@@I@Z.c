/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x1800B308C
 * Callers:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007AE38 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800A1ACC (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CRenderTarget *,1>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v13; // r9
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  if ( a3 > *(_DWORD *)(a1 + 24) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
  }
  else
  {
    v14 = (_QWORD *)a2;
    v6 = DynArrayImpl<1>::Grow(a1, 8u, 1, a4, (unsigned __int64 *)&v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1CDu);
    }
    else
    {
      ++*(_DWORD *)(a1 + 24);
      v8 = *(_QWORD *)a1;
      v9 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
      if ( (unsigned int)v9 > (unsigned int)v5 )
      {
        v13 = (_QWORD *)(v8 + 8 * v9);
        do
        {
          v9 = (unsigned int)(v9 - 1);
          *v13-- = *(_QWORD *)(v8 + 8 * v9);
        }
        while ( (unsigned int)v9 > (unsigned int)v5 );
      }
      v10 = v14;
      v11 = (_QWORD *)(v8 + 8 * v5);
      if ( v14 >= v11 && (unsigned __int64)v14 < v8 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 24) - 1) )
        v10 = v14 + 1;
      *v11 = *v10;
    }
  }
  return v7;
}
