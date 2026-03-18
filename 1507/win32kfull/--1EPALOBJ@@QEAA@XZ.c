/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C00EB20C
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C02B1EB0 (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
