/*
 * XREFs of ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180082D64
 * Callers:
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18004212C (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x18007D7B4 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180082D10 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowSnapshot::HasCVIOfCompatibleSize(CWindowSnapshot *this, const struct tagRECT *a2)
{
  char v2; // r8
  _DWORD *v3; // r9
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 6) && *((_QWORD *)this + 5) )
  {
    v3 = (_DWORD *)*((_QWORD *)this + 4);
    v4 = v3[14] - v3[12];
    if ( v4 < 0 )
      v4 = 0;
    v5 = a2->right - a2->left;
    if ( v5 < 0 )
      v5 = 0;
    if ( v4 == v5 )
    {
      v6 = v3[15] - v3[13];
      if ( v6 < 0 )
        v6 = 0;
      v7 = a2->bottom - a2->top;
      if ( v7 < 0 )
        v7 = 0;
      if ( v6 == v7 )
        return 1;
    }
  }
  return v2;
}
