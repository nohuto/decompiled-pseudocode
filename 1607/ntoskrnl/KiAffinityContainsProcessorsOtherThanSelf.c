/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x140030A00
 * Callers:
 *     KiIpiSendRequestEx @ 0x140030940 (KiIpiSendRequestEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAffinityContainsProcessorsOtherThanSelf(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax

  v2 = 0;
  if ( !*a2 )
    return 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)&a2[4 * v2 + 4];
    v4 = (0x101010101010101LL
        * ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
          + ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (unsigned __int8)v4 > 1u
      || (_BYTE)v4 == 1 && (*(unsigned __int8 *)(a1 + 1616) != v2 || (v3 & *(_QWORD *)(a1 + 1608)) == 0) )
    {
      break;
    }
    if ( ++v2 >= *a2 )
      return 0LL;
  }
  return 1LL;
}
