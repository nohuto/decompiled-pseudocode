/*
 * XREFs of SendDwmIconChange @ 0x1C007ED30
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0223A90 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A494 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _HasCaptionIcon @ 0x1C00711D8 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C007EE70 (xxxGetWindowSmIcon.c)
 */

__int64 __fastcall SendDwmIconChange(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(a1 + 54) & 8) != 0 && xxxGetWindowSmIcon(a1, 1LL) )
    xxxGetWindowSmIcon(a1, 1LL);
  GetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  v6 = (void *)ReferenceDwmApiPort(v3, v2, v4, v5);
  return DwmAsyncIconChange(v6);
}
