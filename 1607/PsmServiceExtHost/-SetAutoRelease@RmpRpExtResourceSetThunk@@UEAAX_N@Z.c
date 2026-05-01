/*
 * XREFs of ?SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z @ 0x180016210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RmpRpExtResourceSetThunk::SetAutoRelease(RmpRpExtResourceSetThunk *this, unsigned __int8 a2)
{
  RmSrvResourceSetSetAutoRelease(*((struct _RM_SERVICE_GLOBALS **)this + 1), *((_QWORD *)this + 2), a2);
}
