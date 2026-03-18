/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EAC48
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB640 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EBA04 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01EA574 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01EA620 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01EA6A4 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01EA7E4 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01EA824 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01EB12C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0214A98 (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v6; // esi
  struct tagINTDDEINFO *v7; // rdi
  __int16 v8; // ax
  void *v9; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  struct tagXSTATE *v15; // rax
  struct tagINTDDEINFO *v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+18h] BYREF
  void *v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = 131;
  v6 = xxxCopyDdeIn(*a2, &v17, &v18, &v16);
  v7 = v16;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
  {
    v6 = 3;
    if ( !v16 )
      return v6;
    Win32FreePool(v16);
  }
  if ( v6 == 2 )
  {
    v8 = *((_WORD *)v7 + 36);
    if ( (v8 & 0xA000) == 0 )
      *((_WORD *)v7 + 36) = v8 | 0x2000;
    if ( (*((_WORD *)v7 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v7 + 6)) )
      {
        Win32FreePool(v7);
        return 3LL;
      }
      v11 = GiveObject(
              *((unsigned __int16 *)v7 + 37),
              v9,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 384LL) + 56LL));
      v12 = v17;
      if ( v11 )
        v12 = v17 | 0x4000;
      v13 = v12 | 0x400;
    }
    else
    {
      v14 = AddPublicObject(
              *((unsigned __int16 *)v7 + 37),
              *((void **)v7 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 384LL) + 56LL));
      v13 = v17;
      if ( v14 )
        v13 = v17 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v7 + 36) >= 0 )
    {
      xxxClientFreeDDEHandle(v18, v13 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
      {
        *a2 = 0LL;
        return 3;
      }
      v15 = Createpxs(0LL, 0LL, 0LL, v7, v13 | 0x200);
      if ( v15 )
      {
        *((_QWORD *)v15 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v15 = *(struct tagXSTATE **)v15;
      }
    }
    else
    {
      v15 = (struct tagXSTATE *)AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxAdviseDataAck, 0LL, v18, v7, v13);
    }
    *a2 = v15;
    if ( !v15 )
      return 3;
  }
  return v6;
}
