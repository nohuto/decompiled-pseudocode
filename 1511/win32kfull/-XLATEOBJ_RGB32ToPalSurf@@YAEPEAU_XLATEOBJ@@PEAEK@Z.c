/*
 * XREFs of ?XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C02B6D20
 * Callers:
 *     ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02C1BB0 (-vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_RGB32ToPalSurf(struct _XLATEOBJ *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 v4; // r8
  FLONG flXlate; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = a2[(BYTE2(a3) >> 3) | (unsigned __int64)(int)(4 * ((32 * (a3 & 0xF8)) | (a3 >> 8) & 0xF8))];
  flXlate = a1[3].flXlate;
  if ( (flXlate & 0x800) != 0 )
  {
    v6 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v6 == ppalDefault )
    {
      if ( v4 >= 0xAu )
        v4 -= 20;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v7 = *(_QWORD *)(v6 + 80);
      else
        v7 = *(_QWORD *)(v6 + 72);
      return *(_BYTE *)(v7 + v4 + 4);
    }
  }
  return v4;
}
