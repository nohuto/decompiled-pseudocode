/*
 * XREFs of ?RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z @ 0x1801248C0
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1800F9040 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterVisualGroup@CVisual@@QEAAJPEAVCVisualGroup@@@Z @ 0x180120BA4 (-RegisterVisualGroup@CVisual@@QEAAJPEAVCVisualGroup@@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CVisualGroup@@AEAAXPEAPEAVCVisual@@I@Z @ 0x1801249AC (-UnRegisterNNotifiersInternal@CVisualGroup@@AEAAXPEAPEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CVisualGroup::RegisterNNotifiersInternal(CVisualGroup *this, struct CVisual **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  CVisual **i; // rsi
  int v9; // eax

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    for ( i = a2; ; ++i )
    {
      v9 = CVisual::RegisterVisualGroup(*i, this);
      v3 = v9;
      if ( v9 < 0 )
        break;
      if ( ++v4 >= a3 )
        return v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x12Eu);
    CVisualGroup::UnRegisterNNotifiersInternal(this, a2, v4);
  }
  return v3;
}
