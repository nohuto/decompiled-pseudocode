/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1CE0
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E26E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2AA4 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01E1604 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E16B0 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E1734 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01E1874 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01E18B4 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E21B8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C020D6B0 (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v6; // esi
  __int64 v7; // r8
  struct tagINTDDEINFO *v8; // rdi
  __int64 v9; // rdx
  __int16 v10; // ax
  void *v11; // rdx
  __int64 v12; // r8
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int v17; // eax
  struct tagXSTATE *v18; // rax
  struct tagINTDDEINFO *v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF
  void *v21; // [rsp+88h] [rbp+20h] BYREF

  v20 = 131;
  v6 = xxxCopyDdeIn(*a2, &v20, &v21, &v19);
  v8 = v19;
  v9 = gSharedInfo[1];
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + v9 + 17) & 1) != 0 )
  {
    v6 = 3;
    if ( !v19 )
      return v6;
    Win32FreePool(v19, v9, v7);
  }
  if ( v6 == 2 )
  {
    v10 = *((_WORD *)v8 + 36);
    if ( (v10 & 0xA000) == 0 )
      *((_WORD *)v8 + 36) = v10 | 0x2000;
    if ( (*((_WORD *)v8 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v8 + 6)) )
      {
        Win32FreePool(v8, v11, v12);
        return 3LL;
      }
      v14 = GiveObject(
              *((unsigned __int16 *)v8 + 37),
              v11,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 376LL) + 56LL));
      v15 = v20;
      if ( v14 )
        v15 = v20 | 0x4000;
      v16 = v15 | 0x400;
    }
    else
    {
      v17 = AddPublicObject(
              *((unsigned __int16 *)v8 + 37),
              *((void **)v8 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 376LL) + 56LL));
      v16 = v20;
      if ( v17 )
        v16 = v20 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v8 + 36) >= 0 )
    {
      xxxClientFreeDDEHandle(v21, v16 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
      {
        *a2 = 0LL;
        return 3;
      }
      v18 = Createpxs(0LL, 0LL, 0LL, v8, v16 | 0x200);
      if ( v18 )
      {
        *((_QWORD *)v18 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v18 = *(struct tagXSTATE **)v18;
      }
    }
    else
    {
      v18 = (struct tagXSTATE *)AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxAdviseDataAck, 0LL, v21, v8, v16);
    }
    *a2 = v18;
    if ( !v18 )
      return 3;
  }
  return v6;
}
