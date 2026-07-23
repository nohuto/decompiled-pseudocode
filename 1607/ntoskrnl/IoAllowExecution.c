/*
 * XREFs of IoAllowExecution @ 0x1400F9408
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IopGetDevicePDO @ 0x1400F9440 (IopGetDevicePDO.c)
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
