/*
 * XREFs of NtGdiEngAssociateSurface @ 0x1C02AAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?ValidUmpdHdev@@YAHPEAUHDEV__@@@Z @ 0x1C02A9804 (-ValidUmpdHdev@@YAHPEAUHDEV__@@@Z.c)
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C02A98C0 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, HDEV a2, int a3)
{
  HDEV v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // edi
  HDEV v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v10 = a2;
  LOBYTE(a2) = 5;
  v6 = 0;
  v7 = HmgShareLockCheckIgnoreStockBit(hsurf, a2);
  v11 = v7;
  if ( v7 && (*(_DWORD *)(v7 + 112) & 0x40000) != 0 && (unsigned int)ValidUmpdHdev(v3) && v10 )
  {
    v8 = a3 & 0xFFFFB7EF;
    if ( (v8 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v10, v8) )
      v6 = EngAssociateSurface(hsurf, v3, v8);
    PDEVOBJ::vUnreferencePdev(&v10, 0LL);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v11);
  return v6;
}
