/*
 * XREFs of DesktopAlloc @ 0x1C0055B70
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C0052518 (xxxCreateDefaultImeWindow.c)
 *     DefSetText @ 0x1C0054B90 (DefSetText.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0054D4C (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C00551A4 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00557DC (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     CreateProp @ 0x1C0065E08 (CreateProp.c)
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     _InitPwSB @ 0x1C0087CBC (_InitPwSB.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C014E2AC (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DesktopAlloc(__int64 a1, unsigned int a2)
{
  PVOID Heap; // rbx

  if ( (*(_DWORD *)(a1 + 32) & 8) != 0 )
    return 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 120), 0, a2);
  if ( !Heap && (*gpsi & 0x100) != 0 )
  {
    *gpsi &= ~0x100u;
    UserLogError(2147483891LL);
  }
  return Heap;
}
