/*
 * XREFs of ConvertVectorArrayToMatrix @ 0x18009ADA4
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18012DDD4 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 *     ReverseAndLeftShift @ 0x18012E7FC (ReverseAndLeftShift.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertVectorArrayToMatrix(__int64 a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  *(_OWORD *)a1 = xmmword_18016BA30;
  *(_OWORD *)(a1 + 16) = xmmword_18016BA40;
  *(_OWORD *)(a1 + 32) = xmmword_18016BA50;
  *(_OWORD *)(a1 + 48) = xmmword_18016BA60;
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
