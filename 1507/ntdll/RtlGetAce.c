/*
 * XREFs of RtlGetAce @ 0x18006BF60
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetAce(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edx

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u && a2 < *(unsigned __int16 *)(a1 + 4) )
  {
    v4 = 0;
    *(_QWORD *)a3 = a1 + 8;
    if ( !a2 )
      return *(_QWORD *)a3 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) ? 0xC000000D : 0;
    while ( *(_QWORD *)a3 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v4;
      *(_QWORD *)a3 += *(unsigned __int16 *)(*(_QWORD *)a3 + 2LL);
      if ( v4 >= a2 )
        return *(_QWORD *)a3 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) ? 0xC000000D : 0;
    }
  }
  return 3221225485LL;
}
