/*
 * XREFs of FONTOBJ_pifi @ 0x1C0283F20
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A519C (UmfdDispatchEscape.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02B0610 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  PVOID pvConsumer; // rax
  IFIMETRICS *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  pvConsumer = pfo[1].pvConsumer;
  if ( pvConsumer )
    v2 = (IFIMETRICS *)*((_QWORD *)pvConsumer + 4);
  else
    v2 = 0LL;
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
