/*
 * XREFs of ?GetOutput@CInteractionContextWrapper@@UEAA?AUInteractionOutput@@XZ @ 0x18009AE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionContextWrapper::GetOutput(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 48);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 16) = v3;
  *(_DWORD *)(a2 + 24) = v2;
  return a2;
}
