/*
 * XREFs of ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E24AC
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E29D0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01E1604 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E16B0 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01E1874 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01E18B4 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E21B8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxPoke(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  struct tagINTDDEINFO *v8; // rbx
  __int64 v9; // rdx
  void *v10; // rdx
  __int64 v11; // r8
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  void *v16; // rax
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v19; // [rsp+88h] [rbp+20h] BYREF

  v18 = 131;
  v6 = xxxCopyDdeIn(*a2, &v18, &v17, &v19);
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
    if ( (*((_WORD *)v8 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v8 + 6)) )
      {
        Win32FreePool(v8, v10, v11);
        return 3LL;
      }
      v13 = (unsigned int)GiveObject(
                            *((unsigned __int16 *)v8 + 37),
                            v10,
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 376LL) + 56LL)) == 0;
      v14 = v18;
      if ( !v13 )
        v14 = v18 | 0x4000;
      v15 = v14 | 0x400;
    }
    else
    {
      v13 = (unsigned int)AddPublicObject(
                            *((unsigned __int16 *)v8 + 37),
                            *((void **)v8 + 6),
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 376LL) + 56LL)) == 0;
      v15 = v18;
      if ( !v13 )
        v15 = v18 | 0x2000;
    }
    *a1 |= 0x80000000;
    v16 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxPokeAck, v17, 0LL, v8, v15);
    *a2 = v16;
    if ( !v16 )
      return 3;
  }
  return v6;
}
