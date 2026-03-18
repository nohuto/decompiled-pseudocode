/*
 * XREFs of EngAssociateSurface @ 0x1C00771E0
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0071170 (HmgShareLockCheckIgnoreStockBit.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  __int64 v6; // rax
  __int64 v7; // rcx

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  if ( hdev )
  {
    v6 = HmgShareLockCheckIgnoreStockBit((int)hsurf, 5);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 128) = 0LL;
      v3 = 1;
      *(_QWORD *)(v6 + 48) = hdev;
      v7 = *((_QWORD *)hdev + 228);
      *(_DWORD *)(v6 + 112) |= v4;
      *(_QWORD *)(v6 + 40) = v7;
      HmgDecrementShareReferenceCount((_DWORD *)v6);
    }
  }
  return v3;
}
