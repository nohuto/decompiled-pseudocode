/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1C00BF660
 * Callers:
 *     <none>
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 result; // rax

  v2 = *(_DWORD **)(a1 + 32);
  if ( v2 )
  {
    result = DEC_SHARE_REF_CNT(v2);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
