/*
 * XREFs of OutputAATo8BPP_XLATE @ 0x1C02521D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall OutputAATo8BPP_XLATE(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        _UNKNOWN **a9)
{
  _UNKNOWN **result; // rax
  unsigned __int8 *v10; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  v10 = (unsigned __int8 *)(a2 + 4);
  if ( a2 + 4 < a3 )
  {
    result = a9;
    do
    {
      if ( v10[3] )
        *a4 = *((_BYTE *)a9
              + (((*(_DWORD *)(a5 + 4LL * *v10) - *a6) & 0x70000 | (*(_DWORD *)(a5 + 4LL * ((unsigned int)v10[1] + 256))
                                                                  - a6[1]) & 0x380000 | (unsigned __int64)((*(_DWORD *)(a5 + 4LL * ((unsigned int)v10[2] + 512)) - a6[2]) & 0x1C00000)) >> 16));
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      v10 += 4;
    }
    while ( (unsigned __int64)v10 < a3 );
  }
  return result;
}
