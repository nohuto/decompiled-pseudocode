/*
 * XREFs of FONTOBJ_vGetInfo @ 0x1C02861F0
 * Callers:
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02AE2F0 (NtGdiFONTOBJ_vGetInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?vGetInfo@RFONTOBJ@@QEAAXPEAU_FONTINFO@@@Z @ 0x1C029B64C (-vGetInfo@RFONTOBJ@@QEAAXPEAU_FONTINFO@@@Z.c)
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
