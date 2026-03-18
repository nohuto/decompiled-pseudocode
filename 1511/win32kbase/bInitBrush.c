/*
 * XREFs of bInitBrush @ 0x1C013A910
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005D180 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005D1AC (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005DAB0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, struct HOBJ__ ***a4, int a5)
{
  struct HOBJ__ **v7; // rbx
  unsigned int v8; // edi
  struct HOBJ__ **v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v10, a2, a3, 0, 0);
  v7 = v10[0];
  if ( v10[0] )
  {
    v8 = 1;
    v11 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v10);
    if ( a5 )
      *((_DWORD *)v7 + 12) |= 4u;
    if ( a4 )
      *a4 = v7;
    bSetStockObject((unsigned __int64)*v7, a1, 0);
    if ( !a1 )
      qword_1C0101220 = (__int64)*v7;
  }
  else
  {
    v8 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v10);
  return v8;
}
