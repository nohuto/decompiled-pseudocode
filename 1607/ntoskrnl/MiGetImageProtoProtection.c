/*
 * XREFs of MiGetImageProtoProtection @ 0x1400BB9E4
 * Callers:
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetImageProtoProtection(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // esi
  unsigned __int64 v5; // rdx
  __int64 v7; // rbp
  unsigned int SessionId; // eax

  v2 = *(__int64 **)(a1 + 72);
  v3 = 0;
  v5 = 0LL;
  while ( v2 )
  {
    if ( (*((_BYTE *)v2 + 34) & 2) != 0 && (v7 = *v2, (*(_DWORD *)(*v2 + 56) & 0x4000000) != 0) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v5 = *(_QWORD *)(MiGetSharedProtos(v7, SessionId, v2) + 32);
    }
    else
    {
      v5 = v2[1];
    }
    if ( a2 >= v5 && a2 < v5 + 8LL * *((unsigned int *)v2 + 11) )
      break;
    v2 = (__int64 *)v2[2];
  }
  if ( (__int64)(a2 - v5) >> 3 < (unsigned __int64)(*((_DWORD *)v2 + 11) - (*((_DWORD *)v2 + 13) & 0x7FFFFFFFu)) )
    return (*((unsigned __int16 *)v2 + 16) >> 1) & 0x1F;
  return v3;
}
