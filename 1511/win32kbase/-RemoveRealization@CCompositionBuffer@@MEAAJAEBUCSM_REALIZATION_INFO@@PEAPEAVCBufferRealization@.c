/*
 * XREFs of ?RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C00E1750
 * Callers:
 *     <none>
 * Callees:
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C003E768 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 */

__int64 __fastcall CCompositionBuffer::RemoveRealization(
        CCompositionBuffer *this,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBufferRealization **a3)
{
  __int64 result; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  result = CCompositionBuffer::FindRealization(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v5 = (_QWORD *)(*v4 + 8LL);
    v6 = *v5;
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  return result;
}
