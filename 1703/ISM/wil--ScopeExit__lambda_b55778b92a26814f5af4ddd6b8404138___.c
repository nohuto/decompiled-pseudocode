/*
 * XREFs of wil::ScopeExit__lambda_b55778b92a26814f5af4ddd6b8404138___ @ 0x18009B598
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x18009AD5C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ScopeExit__lambda_b55778b92a26814f5af4ddd6b8404138___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int128 v4; // xmm1

  v2 = *a2;
  *(_BYTE *)(a1 + 40) = 1;
  result = a1;
  v4 = a2[1];
  *(_OWORD *)a1 = v2;
  *(_QWORD *)&v2 = *((_QWORD *)a2 + 4);
  *(_OWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 32) = v2;
  return result;
}
