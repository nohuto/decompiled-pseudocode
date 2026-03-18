/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C0064A48
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00649C0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  PVOID v0; // rbx

  if ( qword_1C0103EB8 )
    qword_1C0103EB8(qword_1C0103EA8);
  memset(&gDxgkInterface, 0, 0x6F0uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  v0 = 0LL;
  gpDxgkDeviceObject = 0LL;
  gpDxgkFileObject = 0LL;
  if ( qword_1C0103EB8 )
  {
    qword_1C0103EB8(qword_1C0103EA8);
    v0 = gpDxgkFileObject;
  }
  memset(&gDxgkInterface, 0, 0x6F0uLL);
  if ( v0 )
    ObfDereferenceObject(v0);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
