/*
 * XREFs of ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180168ACC
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18010B540 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B59C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B6EC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z @ 0x18014BAF0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0 (_lambda_aa746e2ed241174a5cc881b0a8c3db18_--operator().c)
 */

void __fastcall CChainingHelper::StartIdle(CChainingHelper *this, const struct CInteractionTracker *a2)
{
  int v2; // ebx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  const struct CInteractionTracker *v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  v3[2] = this;
  v3[0] = &v4;
  v2 = 0;
  v3[1] = (char *)a2 + 520;
  do
    lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator()((__int64)v3, v2++);
  while ( v2 < 3 );
}
