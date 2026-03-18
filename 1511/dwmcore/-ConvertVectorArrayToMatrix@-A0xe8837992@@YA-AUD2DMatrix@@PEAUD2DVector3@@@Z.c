/*
 * XREFs of ?ConvertVectorArrayToMatrix@?A0xe8837992@@YA?AUD2DMatrix@@PEAUD2DVector3@@@Z @ 0x1800BDA14
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x180141D70 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 *     ?ReverseAndLeftShift@?A0xe8837992@@YA?AUD2DMatrix@@AEBU2@@Z @ 0x180142C90 (-ReverseAndLeftShift@-A0xe8837992@@YA-AUD2DMatrix@@AEBU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall `anonymous namespace'::ConvertVectorArrayToMatrix(__int64 a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  *(_OWORD *)a1 = xmmword_18017A840;
  *(_OWORD *)(a1 + 16) = xmmword_18017A850;
  *(_OWORD *)(a1 + 32) = xmmword_18017A860;
  *(_OWORD *)(a1 + 48) = xmmword_18017A870;
  *(_DWORD *)a1 = v2;
  *(_DWORD *)(a1 + 16) = a2[1];
  *(_DWORD *)(a1 + 32) = a2[2];
  *(_DWORD *)(a1 + 4) = a2[3];
  *(_DWORD *)(a1 + 20) = a2[4];
  *(_DWORD *)(a1 + 36) = a2[5];
  *(_DWORD *)(a1 + 8) = a2[6];
  *(_DWORD *)(a1 + 24) = a2[7];
  *(_DWORD *)(a1 + 40) = a2[8];
  return a1;
}
