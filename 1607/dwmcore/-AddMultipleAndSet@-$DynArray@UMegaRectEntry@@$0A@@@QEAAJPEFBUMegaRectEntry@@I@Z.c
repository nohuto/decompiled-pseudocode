/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UMegaRectEntry@@$0A@@@QEAAJPEFBUMegaRectEntry@@I@Z @ 0x18009A224
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<MegaRectEntry,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  int v5; // ebx
  _OWORD *v6; // rcx
  __int128 v7; // xmm0
  _OWORD *v8; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm0
  _OWORD *v13; // [rsp+40h] [rbp+8h] BYREF

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
      v13 = a2;
      v5 = DynArrayImpl<0>::Grow(a1, 224, 1, 0, (__int64)&v13);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
      }
      else
      {
        v10 = v13;
        v11 = (_OWORD *)(*(_QWORD *)a1 + (unsigned int)(224 * *(_DWORD *)(a1 + 24)));
        *v11 = *v13;
        v11[1] = v10[1];
        v11[2] = v10[2];
        v11[3] = v10[3];
        v11[4] = v10[4];
        v11[5] = v10[5];
        v11[6] = v10[6];
        v11 += 8;
        v12 = v10[7];
        v10 += 8;
        *(v11 - 1) = v12;
        *v11 = *v10;
        v11[1] = v10[1];
        v11[2] = v10[2];
        v11[3] = v10[3];
        v11[4] = v10[4];
        v11[5] = v10[5];
        ++*(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + 224 * v2);
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      v6[3] = a2[3];
      v6[4] = a2[4];
      v6[5] = a2[5];
      v6[6] = a2[6];
      v6 += 8;
      v7 = a2[7];
      v8 = a2 + 8;
      *(v6 - 1) = v7;
      *v6 = *v8;
      v6[1] = v8[1];
      v6[2] = v8[2];
      v6[3] = v8[3];
      v6[4] = v8[4];
      v6[5] = v8[5];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return (unsigned int)v5;
}
