/*
 * XREFs of ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CCCA0
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CDC68 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402CC6E8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1402CD36C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxAdvise(unsigned int *a1, void **a2, struct tagDDECONV **a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // eax
  void *v8; // rax
  unsigned int v9; // ecx
  struct tagINTDDEINFO *v11; // [rsp+30h] [rbp-18h] BYREF
  void *v12; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 129;
  v6 = xxxCopyDdeIn(*a2, &v13, &v12, &v11);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
  {
    v6 = 3;
    if ( v11 )
      Win32FreePool(v11);
  }
  else if ( v6 == 2 )
  {
    v7 = v13;
    *a1 |= 0x80000000;
    v8 = AnticipatePost(a3[4], xxxAdviseAck, v12, 0LL, v11, v7);
    v9 = 2;
    *a2 = v8;
    if ( !v8 )
      return 3;
    return v9;
  }
  return v6;
}
