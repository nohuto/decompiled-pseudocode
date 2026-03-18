/*
 * XREFs of ??$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z @ 0x1800488EC
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18003706C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CInteraction>(CResource *a1, struct CResource **a2)
{
  struct CResource *v3; // rdx

  v3 = *a2;
  if ( v3 )
    v3 = (struct CResource *)((char *)v3 + 8);
  CResource::UnRegisterNotifierInternal(a1, v3);
  *a2 = 0LL;
}
