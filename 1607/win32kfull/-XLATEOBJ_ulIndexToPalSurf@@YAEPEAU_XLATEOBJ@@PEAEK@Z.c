/*
 * XREFs of ?XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C02B9F40
 * Callers:
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_ulIndexToPalSurf(struct _XLATEOBJ *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v5; // eax
  FLONG flXlate; // r8d
  unsigned __int8 v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rax
  ULONG *pulXlate; // [rsp+30h] [rbp+8h] BYREF

  pulXlate = a1[1].pulXlate;
  v5 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a3);
  flXlate = a1[3].flXlate;
  v7 = a2[(BYTE2(v5) >> 3) | (unsigned __int64)(int)(4 * ((32 * (v5 & 0xF8)) | (v5 >> 8) & 0xF8))];
  if ( (flXlate & 0x800) != 0 )
  {
    v8 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v8 == ppalDefault )
    {
      if ( v7 >= 0xAu )
        v7 -= 20;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v9 = *(_QWORD *)(v8 + 80);
      else
        v9 = *(_QWORD *)(v8 + 72);
      return *(_BYTE *)(v9 + v7 + 4);
    }
  }
  return v7;
}
