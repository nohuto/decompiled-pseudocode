/*
 * XREFs of SendDwmIconChange @ 0x1C007E14C
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0150050 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     xxxGetWindowSmIcon @ 0x1C007E1EC (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C00943D8 (_HasCaptionIcon.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
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
