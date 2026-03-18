/*
 * XREFs of NtGdiEngAssociateSurface @ 0x1C02AB430
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?ValidUmpdHdev@@YAHPEAUHDEV__@@@Z @ 0x1C02AA0C4 (-ValidUmpdHdev@@YAHPEAUHDEV__@@@Z.c)
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C02AA180 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, HDEV a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // edi
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  HDEV v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v6 = 0;
  SURFREF::SURFREF((SURFREF *)v11);
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheckIgnoreStockBit(hsurf, v7);
  v12 = v8;
  if ( v8 && (*(_DWORD *)(v8 + 112) & 0x40000) != 0 && (unsigned int)ValidUmpdHdev(a2) && v13 )
  {
    v9 = a3 & 0xFFFFB7EF;
    if ( (v9 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v13, v9) )
      v6 = EngAssociateSurface(hsurf, a2, v9);
    PDEVOBJ::vUnreferencePdev(&v13, 0LL);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
  return v6;
}
