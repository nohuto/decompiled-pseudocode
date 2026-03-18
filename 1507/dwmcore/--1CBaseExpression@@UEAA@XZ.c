/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x18010D564
 * Callers:
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x18010D5C0 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18010EAFC (--1CExpression@@UEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1801104D4 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180102CB8 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 100) == 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  if ( !v1 )
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
  CExpressionValue::Reset((CBaseExpression *)((char *)this + 48), 0);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
