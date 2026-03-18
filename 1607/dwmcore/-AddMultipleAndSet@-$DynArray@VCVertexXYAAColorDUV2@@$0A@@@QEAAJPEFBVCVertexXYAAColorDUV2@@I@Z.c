/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCVertexXYAAColorDUV2@@$0A@@@QEAAJPEFBVCVertexXYAAColorDUV2@@I@Z @ 0x18009A3A8
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CVertexXYAAColorDUV2,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ecx
  int v5; // ebx
  _OWORD *v6; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  _OWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v10 = a2;
      v5 = DynArrayImpl<0>::Grow(a1, 64, 1, 0, (__int64)&v10);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
      }
      else
      {
        v8 = v10;
        v9 = (_OWORD *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 24) << 6));
        *v9 = *v10;
        v9[1] = v8[1];
        v9[2] = v8[2];
        v9[3] = v8[3];
        ++*(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + (v2 << 6));
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      v6[3] = a2[3];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return (unsigned int)v5;
}
