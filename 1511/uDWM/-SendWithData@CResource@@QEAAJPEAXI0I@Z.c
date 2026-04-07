/*
 * XREFs of ?SendWithData@CResource@@QEAAJPEAXI0I@Z @ 0x180012270
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000C200 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180011CB4 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18007A4A4 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D930 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CResource::SendWithData(CResource *this, _DWORD *a2, unsigned int a3, void *a4, unsigned int a5)
{
  int v7; // eax
  unsigned int v8; // ebx

  a2[1] = *((_DWORD *)this + 6);
  v7 = MilChannel_BeginCommand(*((struct MIL_CHANNEL__ **)this + 2), a2, a3, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xD9u);
  }
  else
  {
    MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)this + 2), a4, a5);
    MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)this + 2));
  }
  return v8;
}
