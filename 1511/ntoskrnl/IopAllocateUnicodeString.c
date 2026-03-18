/*
 * XREFs of IopAllocateUnicodeString @ 0x140456178
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x140456068 (IopBuildGlobalSymbolicLinkString.c)
 *     PiDeferSetInterfaceState @ 0x1404EA11C (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140508254 (PnpConcatenateUnicodeStrings.c)
 *     IoRequestDeviceRemovalForReset @ 0x140602490 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  *(_WORD *)a1 = 0;
  if ( (unsigned __int16)(a2 + 2) < a2 )
  {
    v2 = -1073741675;
    *(_WORD *)(a1 + 2) = -1;
  }
  else
  {
    *(_WORD *)(a1 + 2) = a2 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(a2 + 2), 0x75737050u);
    *(_QWORD *)(a1 + 8) = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_WORD *)(a1 + 2) = 0;
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
