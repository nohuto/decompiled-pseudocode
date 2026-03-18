/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180129560
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18011F7F0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x180129144 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( !*((_BYTE *)this + 100) )
    return 0;
  v4 = CBaseExpression::NotifyAnimationDisconnected(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
    return 0;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x90u);
  return v5;
}
