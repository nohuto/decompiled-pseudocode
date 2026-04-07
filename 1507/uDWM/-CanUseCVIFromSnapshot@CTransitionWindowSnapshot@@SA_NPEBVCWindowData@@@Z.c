/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000958C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800116D0 (-Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18007AB4C (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  const struct tagRECT *v1; // rdx
  char v2; // r10
  CWindowSnapshot *v4; // rcx

  v1 = (const struct tagRECT *)((char *)a1 + 572);
  if ( (*((_DWORD *)a1 + 142) & 0x1000000) == 0 )
    v1 = (const struct tagRECT *)((char *)a1 + 48);
  v2 = 0;
  if ( (*((_BYTE *)a1 + 556) & 0x20) != 0 )
  {
    v4 = (CWindowSnapshot *)*((_QWORD *)a1 + 48);
    if ( v4 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(v4, v1);
  }
  return v2;
}
