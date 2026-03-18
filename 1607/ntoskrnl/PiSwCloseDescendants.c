/*
 * XREFs of PiSwCloseDescendants @ 0x1404C6390
 * Callers:
 *     PiSwIrpCleanup @ 0x1404C3820 (PiSwIrpCleanup.c)
 *     PiSwProcessParentRemoveIrp @ 0x1404C62E4 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x1404C6390 (PiSwCloseDescendants.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1403F1AB4 (PiSwFindBusRelations.c)
 *     PiSwCloseDevice @ 0x1404C3900 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x1404C6390 (PiSwCloseDescendants.c)
 */

_QWORD *__fastcall PiSwCloseDescendants(__int128 *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rsi

  result = PiSwFindBusRelations(a1);
  if ( result )
  {
    v2 = result + 2;
    v3 = (_QWORD *)result[2];
    while ( v3 != v2 )
    {
      v4 = (__int64)(v3 - 12);
      v3 = (_QWORD *)*v3;
      result = (_QWORD *)*(unsigned int *)(v4 + 4);
      if ( ((unsigned __int8)result & 1) == 0 )
      {
        PiSwCloseDescendants(v4 + 72);
        result = PiSwCloseDevice(v4);
      }
    }
  }
  return result;
}
