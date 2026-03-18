/*
 * XREFs of ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1801391F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  if ( !a2 || (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 77LL) )
  {
    v5 = CVisual::SetContent(this, a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x58u);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x55u);
  }
  return v4;
}
