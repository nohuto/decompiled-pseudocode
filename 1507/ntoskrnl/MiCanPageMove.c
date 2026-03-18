/*
 * XREFs of MiCanPageMove @ 0x14005ABF0
 * Callers:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiObtainTransitionPage @ 0x14005A730 (MiObtainTransitionPage.c)
 *     MiImagePageOk @ 0x1400790FC (MiImagePageOk.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiReferenceInPageFile @ 0x140088848 (MiReferenceInPageFile.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 * Callees:
 *     MI_IS_PFN_FILE_ONLY @ 0x14005AC60 (MI_IS_PFN_FILE_ONLY.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *PrototypePteDirect; // rax
  __int64 v6; // rdx

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    return 1LL;
  if ( (unsigned int)MI_IS_PFN_FILE_ONLY(a1) == 1 )
    return 0LL;
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v3 + 16), v2, v3, v4);
  v6 = *PrototypePteDirect;
  if ( PrototypePteDirect == (_QWORD *)(*PrototypePteDirect + 120LL) || (*(_DWORD *)(v6 + 56) & 0x20) == 0 )
    return 1LL;
  return (*(_DWORD *)(v6 + 92) & 0x10000000) == 0;
}
