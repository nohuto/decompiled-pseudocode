/*
 * XREFs of ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800ABB48
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001BEE0 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x18001D8A0 (-ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x180083908 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z @ 0x1800F9248 (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z.c)
 *     ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180124E10 (-OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180094E98 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 */

__int64 __fastcall CBaseAnimation::RegisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v3 = CComposition::RegisterAnimateResource(this[2], (struct IAnimationResource *)(this + 5));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x7Au);
    else
      *((_BYTE *)this + 80) = 1;
  }
  return v1;
}
