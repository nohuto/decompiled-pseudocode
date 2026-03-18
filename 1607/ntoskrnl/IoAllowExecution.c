/*
 * XREFs of IoAllowExecution @ 0x1400FB67C
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     IopGetDevicePDO @ 0x1400FB6B4 (IopGetDevicePDO.c)
 */

bool __fastcall IoAllowExecution(__int64 a1)
{
  _DWORD *DevicePDO; // rax
  bool v2; // bl

  DevicePDO = (_DWORD *)IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  v2 = 1;
  if ( DevicePDO )
  {
    v2 = (DevicePDO[12] & 0x800000) == 0;
    ObfDereferenceObjectWithTag(DevicePDO, 0x746C6644u);
  }
  return v2;
}
