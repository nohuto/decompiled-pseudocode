/*
 * XREFs of FONTOBJ_pifi @ 0x14023A440
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9200 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  PVOID pvProducer; // rax
  IFIMETRICS *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  pvProducer = pfo[1].pvProducer;
  if ( pvProducer )
    v2 = (IFIMETRICS *)*((_QWORD *)pvProducer + 4);
  else
    v2 = 0LL;
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
