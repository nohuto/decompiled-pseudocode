/*
 * XREFs of ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180146EB8
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180088DA0 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180146F10 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180147C7C (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CBaseExpression::GetDebugInfo(CBaseExpression *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 33);
  if ( *(int *)(v1 + 4) >= 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x1000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(const unsigned __int16 **)(i + 4);
}
