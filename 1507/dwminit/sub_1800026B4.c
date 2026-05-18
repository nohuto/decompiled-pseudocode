/*
 * XREFs of sub_1800026B4 @ 0x1800026B4
 * Callers:
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 * Callees:
 *     sub_1800022FC @ 0x1800022FC (sub_1800022FC.c)
 *     sub_180002608 @ 0x180002608 (sub_180002608.c)
 */

bool __fastcall sub_1800026B4(__int64 a1)
{
  bool v1; // cl
  char v2; // r8
  unsigned __int64 v3; // rdx
  int v4; // eax
  bool v5; // zf

  if ( !sub_1800022FC() )
  {
    v2 = byte_18000C764;
    if ( byte_18000C764
      && (v3 = (a1 - qword_18000C768) / 0x989680uLL,
          byte_18000C764 &= -(v3 < 0x3C),
          ((unsigned __int8)v2 & (unsigned __int8)-(v3 < 0x3C)) != 0) )
    {
      v4 = dword_18000C698;
      if ( dword_18000C698 >= 7 )
      {
        v5 = !sub_180002608();
        v4 = dword_18000C698;
        v1 = v5;
LABEL_9:
        dword_18000C698 = v4 + 1;
        return v1;
      }
    }
    else
    {
      byte_18000C764 = 1;
      v4 = 0;
      qword_18000C768 = a1;
    }
    v1 = 0;
    goto LABEL_9;
  }
  return 0;
}
