/*
 * XREFs of FilterCreate @ 0x1C0014BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FilterCreate(_QWORD *a1)
{
  PKSDEVICE Device; // rax

  Device = KsGetDevice(a1);
  a1[2] = Device;
  return Device == 0LL ? 0xC000000D : 0;
}
