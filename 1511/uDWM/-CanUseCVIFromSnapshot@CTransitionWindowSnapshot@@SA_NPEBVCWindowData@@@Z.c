/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180012F70
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180012D50 (-Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180082578 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  const struct tagRECT *v1; // rdx
  char v2; // r10
  CWindowSnapshot *v4; // rcx

  v1 = (const struct tagRECT *)((char *)a1 + 580);
  if ( (*((_DWORD *)a1 + 144) & 0x1000000) == 0 )
    v1 = (const struct tagRECT *)((char *)a1 + 48);
  v2 = 0;
  if ( (*((_BYTE *)a1 + 572) & 8) != 0 )
  {
    v4 = (CWindowSnapshot *)*((_QWORD *)a1 + 50);
    if ( v4 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(v4, v1);
  }
  return v2;
}
