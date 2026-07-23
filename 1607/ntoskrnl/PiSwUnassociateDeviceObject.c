/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140483D1C
 * Callers:
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140483C74 (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwRemovePdoAssociation @ 0x140483CA0 (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceDereference @ 0x1404869A8 (PiSwDeviceDereference.c)
 */

__int64 __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 64);
  v2 = *v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    result = PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
  return result;
}
