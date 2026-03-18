/*
 * XREFs of ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD520
 * Callers:
 *     <none>
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402CC79C (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402CCA14 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1402CD36C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CDD30 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxExecuteAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  bool v3; // zf
  __int64 v8; // r14
  int v9; // ebx
  struct tagINTDDEINFO *v10; // r9
  struct tagXSTATE *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct tagINTDDEINFO *v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1 == 996;
  v14 = 0LL;
  v13 = 6145;
  if ( !v3 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v8 = *((_QWORD *)a3 + 7);
  v9 = xxxCopyDdeIn(*a2, &v13, 0LL, &v14);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || *((_QWORD *)a3 + 7) != v8 )
  {
    v9 = 3;
    if ( v14 )
      Win32FreePool(v14);
    return v9;
  }
  if ( v9 == 2 )
  {
    v10 = v14;
    *((_QWORD *)v14 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 7) + 40LL);
    *((_QWORD *)v10 + 3) = 0LL;
    *((_DWORD *)v10 + 10) = 0;
    *a1 |= 0x80000000;
    v11 = Createpxs(0LL, 0LL, 0LL, v10, 0x201u);
    if ( v11 )
    {
      *((_QWORD *)v11 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
      v12 = *(_QWORD *)v11;
      *a2 = v12;
      if ( v12 )
      {
        PopState(a3);
        return v9;
      }
    }
    else
    {
      *a2 = 0LL;
    }
    return 3;
  }
  return v9;
}
