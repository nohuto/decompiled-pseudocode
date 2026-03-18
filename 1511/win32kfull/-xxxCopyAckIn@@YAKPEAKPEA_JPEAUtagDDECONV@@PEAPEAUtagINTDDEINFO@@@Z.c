/*
 * XREFs of ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01EB500
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB0C0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB350 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EBAA0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EBB60 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EBDF0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01EABB4 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01EACF4 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C01EAE98 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01EB64C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxCopyAckIn(unsigned int *a1, void **a2, struct tagDDECONV *a3, struct tagINTDDEINFO **a4)
{
  __int64 v4; // r14
  unsigned int v9; // edi
  __int64 v10; // rdx
  struct tagINTDDEINFO *v11; // rsi
  __int64 v12; // rdx
  struct tagXSTATE *v13; // rax
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_QWORD *)a3 + 7);
  v15 = 4097;
  v9 = xxxCopyDdeIn(*a2, &v15, 0LL, a4);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0
    || *((_QWORD *)a3 + 7) != v4 )
  {
    v9 = 3;
    if ( !*a4 )
      return v9;
    Win32FreePool(*a4);
  }
  if ( v9 == 2 )
  {
    v10 = *((_QWORD *)a3 + 7);
    v11 = *a4;
    if ( (*(_DWORD *)(v10 + 64) & 0x4000) != 0 && *((__int16 *)v11 + 36) >= 0 )
      GiveObject(
        *(unsigned __int16 *)(*(_QWORD *)(v10 + 56) + 74LL),
        *(void **)(*(_QWORD *)(v10 + 56) + 48LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 376LL) + 56LL));
    v12 = *((_QWORD *)a3 + 7);
    if ( (*(_DWORD *)(v12 + 64) & 0x2000) != 0 )
    {
      RemovePublicObject(*(unsigned __int16 *)(*(_QWORD *)(v12 + 56) + 74LL), *(void **)(*(_QWORD *)(v12 + 56) + 48LL));
      *(_DWORD *)(*((_QWORD *)a3 + 7) + 64LL) &= ~0x2000u;
    }
    v13 = Createpxs(0LL, 0LL, 0LL, v11, v15 | 0x200);
    if ( v13 )
    {
      *((_QWORD *)v13 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
      v13 = *(struct tagXSTATE **)v13;
    }
    *a2 = v13;
    if ( !v13 )
      return 3LL;
    *a1 |= 0x80000000;
  }
  return v9;
}
