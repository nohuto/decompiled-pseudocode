/*
 * XREFs of ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E206C
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1C40 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1EC0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2610 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E26E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2970 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E1734 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01E1874 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C01E1A18 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E21B8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxCopyAckIn(unsigned int *a1, void **a2, struct tagDDECONV *a3, struct tagINTDDEINFO **a4)
{
  __int64 v4; // r14
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rdx
  struct tagINTDDEINFO *v13; // rsi
  __int64 v14; // rdx
  struct tagXSTATE *v15; // rax
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_QWORD *)a3 + 7);
  v17 = 4097;
  v10 = xxxCopyDdeIn(*a2, &v17, 0LL, a4);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0
    || *((_QWORD *)a3 + 7) != v4 )
  {
    v10 = 3;
    if ( !*a4 )
      return v10;
    Win32FreePool(*a4, v9, v11);
  }
  if ( v10 == 2 )
  {
    v12 = *((_QWORD *)a3 + 7);
    v13 = *a4;
    if ( (*(_DWORD *)(v12 + 64) & 0x4000) != 0 && *((__int16 *)v13 + 36) >= 0 )
      GiveObject(
        *(unsigned __int16 *)(*(_QWORD *)(v12 + 56) + 74LL),
        *(void **)(*(_QWORD *)(v12 + 56) + 48LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 376LL) + 56LL));
    v14 = *((_QWORD *)a3 + 7);
    if ( (*(_DWORD *)(v14 + 64) & 0x2000) != 0 )
    {
      RemovePublicObject(*(unsigned __int16 *)(*(_QWORD *)(v14 + 56) + 74LL), *(void **)(*(_QWORD *)(v14 + 56) + 48LL));
      *(_DWORD *)(*((_QWORD *)a3 + 7) + 64LL) &= ~0x2000u;
    }
    v15 = Createpxs(0LL, 0LL, 0LL, v13, v17 | 0x200);
    if ( v15 )
    {
      *((_QWORD *)v15 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
      v15 = *(struct tagXSTATE **)v15;
    }
    *a2 = v15;
    if ( !v15 )
      return 3LL;
    *a1 |= 0x80000000;
  }
  return v10;
}
