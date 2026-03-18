/*
 * XREFs of ExpUseSpecialPool @ 0x140262604
 * Callers:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpUseSpecialPool(unsigned __int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rdx
  char v4; // r10
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+18h] [rbp+18h]

  if ( a1 <= 0xFE0 )
  {
    v2 = 0;
    if ( MmSpecialPoolTag )
    {
      if ( a1 )
      {
        v6 = a2;
        v3 = 0LL;
        v7 = MmSpecialPoolTag;
        while ( 1 )
        {
          v4 = *((_BYTE *)&v7 + v3);
          if ( v4 == 42 )
            return 1LL;
          if ( v4 != 63 && (v2 != 3 || (*((_BYTE *)&v6 + v3) & 0x7F) != v4) && *((_BYTE *)&v6 + v3) != v4 )
            break;
          ++v2;
          ++v3;
          if ( v2 >= 4 )
            return 1LL;
        }
        if ( (unsigned int)MmSpecialPoolTag >= a1 + 16 && (unsigned int)MmSpecialPoolTag < a1 + 32 )
          return 1LL;
      }
    }
  }
  return 0LL;
}
