/*
 * XREFs of InitializePerfOptions @ 0x1C00039C4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00044F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall InitializePerfOptions(__int64 a1)
{
  _QWORD v3[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(v3, 0, 40);
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  v3[0] = 0x2800000004LL;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 1LL, v3)
    || (v3[1] & 1) == 0
    || (v3[1] & 2) == 0
    || (v3[1] & 4) == 0
    || (v3[1] & 8) == 0 )
  {
    return 0;
  }
  memset(v3, 0, 0x28uLL);
  v3[0] = 0x2800000004LL;
  LODWORD(v3[1]) = 15;
  if ( *(_WORD *)(a1 + 192) <= 1u )
  {
    v3[2] = 0LL;
  }
  else
  {
    HIDWORD(v3[2]) = *(unsigned __int16 *)(a1 + 226);
    LODWORD(v3[2]) = 1;
  }
  HIDWORD(v3[1]) = *(unsigned __int16 *)(a1 + 154);
  v3[4] = *(_QWORD *)(a1 + 208);
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 0LL, v3) )
    return 0;
  *(_DWORD *)(a1 + 164) = v3[3];
  return 1;
}
