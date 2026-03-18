/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C006E550
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00CA068 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C011BC70 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  memset(Dest, 0, 0x20uLL);
  qword_1C011BC74 = 0LL;
}
