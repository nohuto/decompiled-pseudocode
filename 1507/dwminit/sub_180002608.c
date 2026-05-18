/*
 * XREFs of sub_180002608 @ 0x180002608
 * Callers:
 *     sub_1800026B4 @ 0x1800026B4 (sub_1800026B4.c)
 * Callees:
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_180003430 @ 0x180003430 (sub_180003430.c)
 *     sub_180005908 @ 0x180005908 (sub_180005908.c)
 *     sub_180005A40 @ 0x180005A40 (sub_180005A40.c)
 *     memset @ 0x180007606 (memset.c)
 */

bool sub_180002608()
{
  int v0; // edi
  int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // r9
  GUID v5; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v6, 0, 0x20uLL);
  LODWORD(v6[1]) = 1029;
  v6[0] = 0LL;
  v6[2] = 0LL;
  LODWORD(v6[3]) = 0;
  v0 = D3DKMTEscape(v6);
  if ( v0 >= 0 )
  {
    LOBYTE(v1) = 1;
    sub_180003430((unsigned int)&off_18000C068, 1, 1, v1, 1);
    v5 = ActivityId;
    v2 = sub_180005A40();
    sub_180005908(v2, &v5, (unsigned int)v0);
    sub_18000149C(1, v0 | 0x10000000, dword_18000C698, v3);
  }
  return v0 >= 0;
}
