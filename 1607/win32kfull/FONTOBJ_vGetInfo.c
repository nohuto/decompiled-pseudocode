/*
 * XREFs of FONTOBJ_vGetInfo @ 0x1C0284020
 * Callers:
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02B08D0 (NtGdiFONTOBJ_vGetInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?vGetInfo@RFONTOBJ@@QEAAXPEAU_FONTINFO@@@Z @ 0x1C029B1CC (-vGetInfo@RFONTOBJ@@QEAAXPEAU_FONTINFO@@@Z.c)
 */

void __stdcall FONTOBJ_vGetInfo(FONTOBJ *pfo, ULONG cjSize, FONTINFO *pfi)
{
  unsigned int v3; // r9d
  void *v4; // r10
  struct _FONTINFO Src; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = pfo;
  RFONTOBJ::vGetInfo((RFONTOBJ *)&v6, &Src);
  if ( v3 >= 0x1C )
    v3 = 28;
  memmove(v4, &Src, v3);
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
}
