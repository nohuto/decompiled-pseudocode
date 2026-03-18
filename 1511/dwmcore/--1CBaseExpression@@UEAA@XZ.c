/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x180127F34
 * Callers:
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x180127FB0 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CExpression@@UEAA@XZ @ 0x180129A24 (--1CExpression@@UEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18012B8D8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18011F7F0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180136C70 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_BYTE *)this + 100) == 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  if ( !v1 )
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
  if ( *((_DWORD *)this + 30) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL);
    --*(_DWORD *)(v3 + 176);
    --*(_DWORD *)(v3 + 96);
  }
  CExpressionValue::Reset((CBaseExpression *)((char *)this + 48), 0);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
