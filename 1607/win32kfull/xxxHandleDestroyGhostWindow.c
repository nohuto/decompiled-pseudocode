/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C0152B90
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  struct tagWND *v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = InternalRemoveProp();
  if ( v2 || (v2 = InternalRemoveProp()) != 0LL )
  {
    LOBYTE(v3) = 1;
    v7 = HMValidateHandleNoSecure((unsigned __int64)v2, v3, v4, v5);
    if ( v7 )
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v11;
      ++*(_DWORD *)(v7 + 8);
      v11[1] = v7;
      InternalRemoveProp();
      xxxHideGhostWindow(a1, v8);
      ThreadUnlock1(v10, v9);
    }
  }
  return 0LL;
}
