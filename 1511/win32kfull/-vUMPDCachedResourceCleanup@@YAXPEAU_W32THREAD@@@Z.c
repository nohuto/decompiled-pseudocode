/*
 * XREFs of ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F0CF8
 * Callers:
 *     UMPDCachedResourceCleanupWrap @ 0x1C00F0CF0 (UMPDCachedResourceCleanupWrap.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C01460B0 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C014D66C (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02A22A8 (-Close@PROXYPORT@@QEAAXXZ.c)
 */

void __fastcall vUMPDCachedResourceCleanup(struct _W32THREAD *a1)
{
  struct _UMPDHEAP *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _UMPDHEAP *)*((_QWORD *)a1 + 7);
  if ( v2 )
  {
    DestroyUMPDHeap(v2);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( *((_QWORD *)a1 + 8) )
  {
    v3 = *((_QWORD *)a1 + 8);
    PROXYPORT::Close((PROXYPORT *)&v3);
    *((_QWORD *)a1 + 8) = 0LL;
  }
}
