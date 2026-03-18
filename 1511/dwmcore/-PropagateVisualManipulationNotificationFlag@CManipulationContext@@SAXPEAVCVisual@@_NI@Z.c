/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x1800021C8
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180002238 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x18000227C (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
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
        v6 = *((_BYTE *)v4 + 74);
        if ( (v6 & 2) != 0 )
          break;
        *((_BYTE *)v4 + 74) = v6 | 2;
        v4 = (struct CVisual *)*((_QWORD *)v4 + 8);
      }
      while ( v4 );
    }
  }
  else if ( a1 )
  {
    do
    {
      v5 = *((_BYTE *)v4 + 74);
      if ( (v5 & 2) == 0 )
        break;
      if ( CManipulationContext::VisualHasActiveInteraction(v4, a3) )
        break;
      if ( CManipulationContext::VisualHasAnyChildFlagged(v4) )
        break;
      *((_BYTE *)v4 + 74) = v5 & 0xFD;
      v4 = (struct CVisual *)*((_QWORD *)v4 + 8);
    }
    while ( v4 );
  }
}
