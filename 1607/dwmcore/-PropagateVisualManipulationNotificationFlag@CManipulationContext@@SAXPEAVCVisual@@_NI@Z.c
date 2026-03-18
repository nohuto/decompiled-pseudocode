/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180008D54
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180007588 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180008DCC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180008E18 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 */

void __fastcall CManipulationContext::PropagateVisualManipulationNotificationFlag(
        struct CVisual *a1,
        char a2,
        unsigned int a3)
{
  struct CVisual *v4; // rbx
  char v5; // di
  char v6; // al

  v4 = a1;
  if ( a2 )
  {
    if ( a1 )
    {
      do
      {
        v6 = *((_BYTE *)v4 + 154);
        if ( (v6 & 2) != 0 )
          break;
        *((_BYTE *)v4 + 154) = v6 | 2;
        v4 = (struct CVisual *)*((_QWORD *)v4 + 18);
      }
      while ( v4 );
    }
  }
  else if ( a1 )
  {
    do
    {
      v5 = *((_BYTE *)v4 + 154);
      if ( (v5 & 2) == 0 )
        break;
      if ( CManipulationContext::VisualHasActiveInteraction(v4, a3) )
        break;
      if ( CManipulationContext::VisualHasAnyChildFlagged(v4) )
        break;
      *((_BYTE *)v4 + 154) = v5 & 0xFD;
      v4 = (struct CVisual *)*((_QWORD *)v4 + 18);
    }
    while ( v4 );
  }
}
