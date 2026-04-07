/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18004212C
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000A280 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000C0E0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180082D64 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  const struct tagRECT *v1; // rdx
  char v2; // r10
  CWindowSnapshot *v4; // rcx

  v1 = (const struct tagRECT *)((char *)a1 + 588);
  if ( (*((_DWORD *)a1 + 146) & 0x1000000) == 0 )
    v1 = (const struct tagRECT *)((char *)a1 + 48);
  v2 = 0;
  if ( (*((_BYTE *)a1 + 580) & 8) != 0 )
  {
    v4 = (CWindowSnapshot *)*((_QWORD *)a1 + 51);
    if ( v4 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(v4, v1);
  }
  return v2;
}
