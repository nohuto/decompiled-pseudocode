/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140539D20
 * Callers:
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140539CF4 (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x140539DD0 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x140539F50 (PiSwRemovePdoAssociation.c)
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
