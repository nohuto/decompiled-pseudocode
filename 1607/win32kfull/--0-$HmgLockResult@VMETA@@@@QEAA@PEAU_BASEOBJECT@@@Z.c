/*
 * XREFs of ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C02B4D60
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1C02B4DE4 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B4F70 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

_QWORD *__fastcall HmgLockResult<META>::HmgLockResult<META>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdx

  *a1 = a2;
  v2 = a1 + 1;
  memset(a1 + 1, 0, 0x20uLL);
  v4 = 0LL;
  if ( v2 )
    v4 = v2 - 1;
  PushThreadGuardedObject(
    v2,
    v4,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
