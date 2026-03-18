/*
 * XREFs of ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C02B2C40
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1C02B2C5C (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B2DF0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgLockResult<META>::~HmgLockResult<META>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a1 + 12LL));
    *(_QWORD *)a1 = 0LL;
  }
  return PopThreadGuardedObject(a1 + 8, a2, a3, a4);
}
