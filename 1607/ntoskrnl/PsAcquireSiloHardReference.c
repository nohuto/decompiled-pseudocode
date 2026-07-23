/*
 * XREFs of PsAcquireSiloHardReference @ 0x14020F3DC
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046A30C (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PsAcquireSiloHardReference(_DWORD *Object)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  if ( Object )
  {
    if ( (Object[326] & 0x40000000) == 0 )
      NT_ASSERT("PspJobIsSilo(Silo)");
    _m_prefetchw(Object + 376);
    v2 = *((_QWORD *)Object + 188);
    do
    {
      if ( !v2 )
        return 3221225738LL;
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 188, v2 + 1, v2);
    }
    while ( v3 != v2 );
    ObfReferenceObjectWithTag(Object, 0x486C6953u);
  }
  return 0LL;
}
