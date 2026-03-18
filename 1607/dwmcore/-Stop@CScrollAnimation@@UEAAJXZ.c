/*
 * XREFs of ?Stop@CScrollAnimation@@UEAAJXZ @ 0x18015E860
 * Callers:
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x18015D5A0 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180087B00 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  bool v1; // zf

  v1 = (*((_BYTE *)this + 468) & 4) == 0;
  *((_BYTE *)this + 260) = 0;
  if ( !v1 )
  {
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
    *((_BYTE *)this + 468) &= ~4u;
    *((_DWORD *)this + 68) = 16;
  }
  return 0LL;
}
