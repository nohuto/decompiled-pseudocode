/*
 * XREFs of EngAssociateSurface @ 0x1C007ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0073650 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  unsigned int v6; // ebp
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  v6 = (unsigned int)hsurf;
  if ( hdev )
  {
    SURFREF::SURFREF((SURFREF *)v9);
    v7 = HmgShareLockCheckIgnoreStockBit(v6, 5);
    v10 = v7;
    if ( v7 && (*(_DWORD *)(v7 + 112) & 0x200000) != 0 )
    {
      *(_QWORD *)(v7 + 128) = 0LL;
      v3 = 1;
      *(_QWORD *)(v10 + 48) = hdev;
      *(_QWORD *)(v10 + 40) = *((_QWORD *)hdev + 228);
      *(_DWORD *)(v10 + 112) |= v4;
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
  return v3;
}
