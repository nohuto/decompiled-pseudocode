/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x140099BD4
 * Callers:
 *     <none>
 * Callees:
 *     CcSetAdditionalCacheAttributes @ 0x140099C98 (CcSetAdditionalCacheAttributes.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall CcSetAdditionalCacheAttributesEx(struct _FILE_OBJECT *a1, char a2)
{
  _DWORD *SharedCacheMap; // rbx
  BOOLEAN v4; // dl
  KIRQL v5; // dl
  int v6; // eax

  SharedCacheMap = a1->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = (a2 & 2) != 0;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(a1, v4, (a2 & 4) != 0);
  v5 = KeAcquireQueuedSpinLock(5uLL);
  if ( (a2 & 1) != 0 )
    SharedCacheMap[38] |= 0x800000u;
  else
    SharedCacheMap[38] &= ~0x800000u;
  if ( (a2 & 8) != 0 )
  {
    SharedCacheMap[38] |= 0x4000000u;
  }
  else
  {
    v6 = SharedCacheMap[38];
    if ( (v6 & 0x4000000) != 0 )
      SharedCacheMap[38] = v6 | 0x20000;
    SharedCacheMap[38] &= ~0x4000000u;
  }
  if ( (a2 & 0x10) != 0 )
    SharedCacheMap[38] |= 0x10000000u;
  else
    SharedCacheMap[38] &= ~0x10000000u;
  if ( (a2 & 0x20) != 0 )
    SharedCacheMap[38] |= 0x8000000u;
  else
    SharedCacheMap[38] &= ~0x8000000u;
  KeReleaseQueuedSpinLock(5uLL, v5);
}
