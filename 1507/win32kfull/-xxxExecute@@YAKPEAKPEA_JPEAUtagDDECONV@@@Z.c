/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB1A8
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB930 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01EA620 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01EB12C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxExecute(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  unsigned int v8; // ebx
  struct tagINTDDEINFO *v9; // rsi
  void *v10; // rax
  void *v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = *((_QWORD *)a3 + 5);
  v4 = 2048;
  v13 = 2048;
  if ( (*(_BYTE *)(v3 + 42) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a3 + 6) + 42LL) & 8) == 0 )
      v4 = 67584;
    v13 = v4;
  }
  v8 = xxxCopyDdeIn(*a2, &v13, &v12, &v14);
  v9 = v14;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
  {
    v8 = 3;
    if ( !v14 )
      return v8;
    Win32FreePool(v14);
  }
  if ( v8 == 2 )
  {
    *a1 |= 0x80000000;
    v10 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxExecuteAck, v12, 0LL, v9, v13);
    *a2 = v10;
    if ( v10 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 448LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 448LL) |= 0x20u;
    }
    else
    {
      return 3;
    }
  }
  return v8;
}
