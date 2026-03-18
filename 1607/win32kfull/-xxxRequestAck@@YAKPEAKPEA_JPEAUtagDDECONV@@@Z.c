/*
 * XREFs of ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E26E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01E1604 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E16B0 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E1734 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01E17F0 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01E1874 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01E18B4 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E1998 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1CE0 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E206C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E21B8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2AA4 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEFlags @ 0x1C020D7A0 (xxxClientGetDDEFlags.c)
 */

unsigned int __fastcall xxxRequestAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  void *v7; // rcx
  __int64 v8; // rbx
  __int16 DDEFlags; // ax
  __int64 v10; // r8
  struct tagINTDDEINFO *v11; // rsi
  int v12; // edx
  __int64 v13; // rdx
  __int16 v14; // ax
  void *v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  int v20; // eax
  void *v21; // rax
  struct tagXSTATE *v22; // rax
  __int16 v23; // [rsp+30h] [rbp-20h]
  void *v24; // [rsp+38h] [rbp-18h] BYREF
  struct tagINTDDEINFO *v25[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+30h] BYREF
  int v27; // [rsp+98h] [rbp+48h]

  if ( *a1 == 996 )
  {
    result = xxxCopyAckIn(a1, a2, a3, v25);
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0 )
      result = 0;
    if ( result == 2 )
    {
      PopState(a3);
      return 2;
    }
  }
  else
  {
    if ( *a1 != 997 )
      return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
    v7 = *a2;
    v8 = *((_QWORD *)a3 + 7);
    v26 = 131;
    DDEFlags = xxxClientGetDDEFlags(v7);
    v23 = DDEFlags;
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 17LL) & 1) != 0
      || *((_QWORD *)a3 + 7) != v8 )
    {
      return 3;
    }
    if ( (DDEFlags & 0x1000) == 0 )
      return xxxAdviseData(a1, a2, a3);
    result = xxxCopyDdeIn(*a2, &v26, &v24, v25);
    v11 = v25[0];
    v12 = (unsigned __int16)*(_DWORD *)a3;
    v27 = result;
    v13 = (unsigned int)(LODWORD(gSharedInfo[2]) * v12);
    if ( (*(_BYTE *)(v13 + gSharedInfo[1] + 17) & 1) != 0 || *((_QWORD *)a3 + 7) != v8 )
    {
      result = 3;
      v27 = 3;
      if ( !v25[0] )
        return result;
      Win32FreePool(v25[0], v13, v10);
      result = v27;
    }
    if ( result == 2 )
    {
      v14 = *((_WORD *)v11 + 36);
      if ( (v14 & 0xA000) == 0 )
        *((_WORD *)v11 + 36) = v14 | 0x2000;
      if ( (v23 & 0x2000) != 0 )
      {
        if ( IsObjectPublic(*((void **)v11 + 6)) )
        {
          Win32FreePool(v11, v15, v16);
          return 3;
        }
        v17 = GiveObject(
                *((unsigned __int16 *)v11 + 37),
                v15,
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 376LL) + 56LL));
        v18 = v26;
        if ( v17 )
          v18 = v26 | 0x4000;
        v19 = v18 | 0x400;
      }
      else
      {
        v20 = AddPublicObject(
                *((unsigned __int16 *)v11 + 37),
                *((void **)v11 + 6),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 376LL) + 56LL));
        v19 = v26;
        if ( v20 )
          v19 = v26 | 0x2000;
      }
      *a1 |= 0x80000000;
      if ( v23 < 0 )
      {
        v21 = AnticipatePost(
                *((struct tagDDECONV **)a3 + 4),
                (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
                0LL,
                v24,
                v11,
                v19);
      }
      else
      {
        FreeListAdd(a3, v24, v19 & 0xFFFFFFFE);
        v22 = Createpxs(0LL, 0LL, 0LL, v11, v19 | 0x200);
        if ( v22 )
        {
          *((_QWORD *)v22 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
          v21 = *(void **)v22;
        }
        else
        {
          v21 = 0LL;
        }
      }
      *a2 = v21;
      if ( !v21 )
        return 3;
      PopState(a3);
      return v27;
    }
  }
  return result;
}
