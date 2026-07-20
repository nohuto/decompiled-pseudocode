/*
 * XREFs of sub_14000F878 @ 0x14000F878
 * Callers:
 *     sub_14000FC70 @ 0x14000FC70 (sub_14000FC70.c)
 * Callees:
 *     sub_140010AD0 @ 0x140010AD0 (sub_140010AD0.c)
 */

unsigned __int64 sub_14000F878()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx

  v0 = 0LL;
  byte_1400204A8 = 0;
  if ( byte_140020200 != 1 )
  {
    if ( dword_140020478 != 7 )
    {
      if ( dword_140020478 == 2 )
        goto LABEL_18;
      if ( dword_140020478 != 1 )
        return v0;
      if ( byte_140020201 )
      {
LABEL_18:
        v0 = qword_140020480;
      }
      else
      {
        v0 = 0x40000000LL;
        if ( qword_140020480
           + 0x10000000
           + ((unsigned int)~(dword_140020188 - 1) & ((unsigned int)(dword_140020188 - 1)
                                                    + 8256LL
                                                    + ((unsigned __int64)(unsigned int)(dword_140020194 + 7) >> 3))) > 0x40000000 )
          v0 = qword_140020480
             + 0x10000000
             + ((unsigned int)~(dword_140020188 - 1) & ((unsigned int)(dword_140020188 - 1)
                                                      + 8256LL
                                                      + ((unsigned __int64)(unsigned int)(dword_140020194 + 7) >> 3)));
      }
      byte_1400204A8 = 1;
      return v0;
    }
    v1 = 0x800000000LL;
    if ( (unsigned __int64)qword_140020480 >= 0x100000000LL )
    {
      v2 = 0x800000000LL;
      if ( (unsigned __int64)(qword_140020480 - 0x100000000LL) >> 3 < 0x800000000LL )
        v2 = (unsigned __int64)(qword_140020480 - 0x100000000LL) >> 3;
      v0 = ((unsigned __int64)(qword_140020480 - 0x100000000LL) >> 6) + 715827882 + v2;
    }
    else
    {
      v0 = qword_140020480 / 6uLL;
    }
    if ( v0 < 0x10000000 )
      v0 = 0x10000000LL;
    if ( (unsigned __int64)(MEMORY[0x7FFE0014] - sub_140010AD0()) < 0x1600A3910000LL )
    {
      if ( (unsigned __int64)qword_140020480 < 0x800000000LL )
        v1 = qword_140020480;
      if ( v0 < v1 )
        return v1;
    }
  }
  return v0;
}
