/*
 * XREFs of ?SendWithData@CResource@@QEAAJPEAXI0I@Z @ 0x180017918
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180037730 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x18003BAB8 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800722C4 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089E60 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
