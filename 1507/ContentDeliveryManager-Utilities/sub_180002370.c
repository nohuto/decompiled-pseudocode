/*
 * XREFs of sub_180002370 @ 0x180002370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002370(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rax
  __int64 v3; // r8

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v2 = *(volatile signed __int32 **)(a2 + 144);
  v3 = *(_QWORD *)(a2 + 152);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 144) = v2;
    *(_QWORD *)(a1 + 152) = v3;
    _InterlockedIncrement(v2);
  }
  return a1;
}
