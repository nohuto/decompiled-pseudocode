/*
 * XREFs of ??$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z @ 0x1800852BC
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180049B84 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
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
