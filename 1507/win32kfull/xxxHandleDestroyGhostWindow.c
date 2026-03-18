/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C0124440
 * Callers:
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // edi
  _QWORD *v3; // rax
  __int64 v4; // r11
  __int64 v6; // rax
  __int16 v7; // dx
  LARGE_INTEGER *v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = InternalRemoveProp((__int64)a1, *(_WORD *)(gpsi + 884LL), 1);
  if ( !v3 )
  {
    v3 = InternalRemoveProp((__int64)a1, *(_WORD *)(*(_QWORD *)v4 + 1362LL), 1);
    if ( !v3 )
      return 0LL;
    v1 = 1;
  }
  v6 = HMValidateHandleNoSecure((unsigned __int64)v3, 1);
  if ( v6 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v11;
    ++*(_DWORD *)(v6 + 8);
    v11[1] = v6;
    if ( v1 )
      v7 = *(_WORD *)(gpsi + 1362LL);
    else
      v7 = *(_WORD *)(gpsi + 884LL);
    InternalRemoveProp(v6, v7, 1);
    xxxHideGhostWindow(a1, v8);
    ThreadUnlock1(v10, v9);
  }
  return 0LL;
}
