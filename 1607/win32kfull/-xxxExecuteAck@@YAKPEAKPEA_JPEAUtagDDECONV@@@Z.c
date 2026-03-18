/*
 * XREFs of ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2340
 * Callers:
 *     <none>
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E1734 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E1998 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E21B8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2AA4 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

int __fastcall xxxExecuteAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  bool v3; // zf
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // r8
  struct tagINTDDEINFO *v11; // rsi
  __int64 v12; // rdx
  struct tagXSTATE *v13; // rax
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  struct tagINTDDEINFO *v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1 == 996;
  v14 = 6145;
  if ( !v3 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v8 = *((_QWORD *)a3 + 7);
  v9 = xxxCopyDdeIn((void *)*a2, &v14, 0LL, &v15);
  v11 = v15;
  v12 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3;
  if ( (*(_BYTE *)(v12 + gSharedInfo[1] + 17) & 1) == 0 && *((_QWORD *)a3 + 7) == v8 )
    goto LABEL_7;
  v9 = 3;
  if ( v15 )
  {
    Win32FreePool(v15, v12, v10);
LABEL_7:
    if ( v9 == 2 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 7) + 40LL);
      *((_QWORD *)v11 + 3) = 0LL;
      *((_DWORD *)v11 + 10) = 0;
      *a1 |= 0x80000000;
      v13 = Createpxs(0LL, 0LL, 0LL, v11, 0x201u);
      if ( v13 )
      {
        *((_QWORD *)v13 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v13 = *(struct tagXSTATE **)v13;
      }
      *a2 = (__int64)v13;
      if ( v13 )
        PopState(a3);
      else
        return 3;
    }
  }
  return v9;
}
