/*
 * XREFs of PiSwCloseDecendents @ 0x140538D44
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x1405386E4 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDecendents @ 0x140538D44 (PiSwCloseDecendents.c)
 *     PiSwIrpCleanup @ 0x140539078 (PiSwIrpCleanup.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140538A4C (PiSwFindBusRelations.c)
 *     PiSwCloseDecendents @ 0x140538D44 (PiSwCloseDecendents.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwCloseDecendents(__int128 *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi

  result = (__int64)PiSwFindBusRelations(a1);
  if ( result )
  {
    v2 = (_QWORD *)(result + 16);
    v3 = *(_QWORD **)(result + 16);
    while ( v3 != v2 )
    {
      v4 = v3 - 12;
      v3 = (_QWORD *)*v3;
      result = *((unsigned int *)v4 + 1);
      if ( (result & 1) == 0 )
      {
        PiSwCloseDecendents(v4 + 9);
        result = PiSwCloseDevice(v4);
      }
    }
  }
  return result;
}
