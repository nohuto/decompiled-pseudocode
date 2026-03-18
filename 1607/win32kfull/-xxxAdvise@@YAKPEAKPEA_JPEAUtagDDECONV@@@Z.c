/*
 * XREFs of ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1B74
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E29D0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E16B0 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E21B8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxAdvise(unsigned int *a1, void **a2, struct tagDDECONV **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  struct tagINTDDEINFO *v8; // rdi
  __int64 v9; // rdx
  void *v10; // rax
  void *v12; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = 129;
  v6 = xxxCopyDdeIn(*a2, &v13, &v12, &v14);
  v8 = v14;
  v9 = gSharedInfo[1];
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + v9 + 17) & 1) != 0 )
  {
    v6 = 3;
    if ( !v14 )
      return v6;
    Win32FreePool(v14, v9, v7);
  }
  if ( v6 == 2 )
  {
    *a1 |= 0x80000000;
    v10 = AnticipatePost(a3[4], xxxAdviseAck, v12, 0LL, v8, v13);
    *a2 = v10;
    if ( !v10 )
      return 3;
  }
  return v6;
}
