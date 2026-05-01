/*
 * XREFs of ?ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180016270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmpRpExtResourceSetThunk::ReleaseResources(RmpRpExtResourceSetThunk *this)
{
  return RmSrvResourceSetReleaseResources(*((struct _RM_SERVICE_GLOBALS **)this + 1), *((_QWORD *)this + 2), 0);
}
