/*
 * XREFs of ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D6ED0
 * Callers:
 *     UMPDThreadCleanup @ 0x1400D6E20 (UMPDThreadCleanup.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x140235610 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1400D6F20 (-Close@PROXYPORT@@QEAAXXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1400D7BAC (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall vUMPDCachedResourceCleanup(struct _GRETHREAD *a1)
{
  struct _UMPDHEAP *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _UMPDHEAP *)*((_QWORD *)a1 + 6);
  if ( v2 )
  {
    DestroyUMPDHeap(v2);
    *((_QWORD *)a1 + 6) = 0LL;
  }
  if ( *((_QWORD *)a1 + 7) )
  {
    v3 = *((_QWORD *)a1 + 7);
    PROXYPORT::Close((PROXYPORT *)&v3);
    *((_QWORD *)a1 + 7) = 0LL;
  }
}
