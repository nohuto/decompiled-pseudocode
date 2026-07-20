/*
 * XREFs of sub_14000FC70 @ 0x14000FC70
 * Callers:
 *     sub_14000FE88 @ 0x14000FE88 (sub_14000FE88.c)
 * Callees:
 *     sub_14000F578 @ 0x14000F578 (sub_14000F578.c)
 *     sub_14000F810 @ 0x14000F810 (sub_14000F810.c)
 *     sub_14000F878 @ 0x14000F878 (sub_14000F878.c)
 */

void sub_14000FC70()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( byte_1400204A9 != 1 )
  {
    v0 = 0x40000000LL;
    if ( (unsigned __int64)qword_140020480 > 0x40000000 )
    {
      v0 = ((unsigned __int64)(qword_140020480 - 0x40000000) >> 3) + 0x40000000;
      if ( v0 > 0x800000000LL )
        v0 = 0x800000000LL;
    }
    qword_140020490 = v0;
    qword_140020488 = sub_14000F878();
    qword_140020498 = sub_14000F578();
    qword_1400204A0 = sub_14000F810();
    if ( (int)TpAllocTimer(&v2, sub_140010040, 0LL, &dword_14001FC80) >= 0 )
    {
      v1 = -36000000000LL;
      TpSetTimer(v2, &v1, 3600000LL, 300000LL);
    }
    byte_1400204A9 = 1;
  }
}
