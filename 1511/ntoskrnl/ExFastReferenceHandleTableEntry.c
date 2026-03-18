/*
 * XREFs of ExFastReferenceHandleTableEntry @ 0x14008E230
 * Callers:
 *     ObpReferenceObjectByHandle @ 0x140436BA0 (ObpReferenceObjectByHandle.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExFastReferenceHandleTableEntry(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned __int64 v6; // rax
  __int128 v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(a2);
  *a3 = *a2;
  a3[1] = a2[1];
  if ( (*(_DWORD *)a3 & 0x1FFFE) == 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( (*a3 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(a1, a2, *a3);
      _m_prefetchw(a2);
      *a3 = *a2;
      a3[1] = a2[1];
      goto LABEL_7;
    }
    v7 = *(_OWORD *)a3;
    v8 = _InterlockedCompareExchange128(a2, *((signed __int64 *)&v7 + 1), *a3 - 2, (signed __int64 *)&v7);
    v6 = v7;
    *(_OWORD *)a3 = v7;
    if ( v8 )
      break;
LABEL_7:
    if ( (*(_DWORD *)a3 & 0x1FFFE) == 0 )
      return 0xFFFFFFFFLL;
  }
  if ( (unsigned __int16)(v6 >> 1) != 16 )
    return 0LL;
  *a3 = v6 ^ ((unsigned int)v6 ^ (2 * (unsigned int)(v6 >> 1) - 2)) & 0x1FFFE;
  return 32752LL;
}
