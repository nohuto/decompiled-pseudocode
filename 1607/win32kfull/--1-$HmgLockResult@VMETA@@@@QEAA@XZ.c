/*
 * XREFs of ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C02B4DAC
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1C02B4DE4 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B4F70 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgLockResult<META>::~HmgLockResult<META>(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a1 + 12LL));
    *(_QWORD *)a1 = 0LL;
  }
  return PopThreadGuardedObject(a1 + 8);
}
