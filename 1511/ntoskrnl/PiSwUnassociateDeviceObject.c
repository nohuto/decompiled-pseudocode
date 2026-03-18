/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x1404944B8
 * Callers:
 *     PiSwDestroyDeviceObject @ 0x140493B44 (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x140494688 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x140494E9C (PiSwRemovePdoAssociation.c)
 */

__int64 __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 64);
  v2 = *v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    result = PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
  return result;
}
