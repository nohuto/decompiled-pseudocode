/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01E7900
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E7850 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

void __fastcall NormalAPCInvalidateCOMPOSITEDWnd(char *a1, void *a2, void *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), 1);
  if ( v4 && (*(_BYTE *)(v4 + 51) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow((struct tagWND *)v4, (__m128i *)(a1 + 24));
  Win32FreePool(a1 - 88);
  UserSessionSwitchLeaveCrit(v6, v5);
}
