/*
 * XREFs of AlpcpReferenceBlob @ 0x14040BD4C
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140409458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateRegion @ 0x140409D34 (AlpcpCreateRegion.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040A38C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x14040A7C0 (AlpcpFlushQueue.c)
 *     AlpcpFlushResourcesPort @ 0x14040AA74 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040B998 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpViewSearchCallbackFunction @ 0x14040BC14 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcReferenceBlobByHandle @ 0x14040BC58 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040D220 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14040D720 (AlpcpCreateSecurityContext.c)
 *     AlpcpExposeAttributes @ 0x140449E20 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x14044CD70 (AlpcpReceiveMessagePort.c)
 *     AlpcpCleanupProcessViews @ 0x140460F60 (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404DED00 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140655E2C (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}
