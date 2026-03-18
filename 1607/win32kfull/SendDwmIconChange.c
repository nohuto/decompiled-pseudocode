/*
 * XREFs of SendDwmIconChange @ 0x1C00AAFF0
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00937D8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0224590 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0229754 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C006F598 (_HasCaptionIcon.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     xxxGetWindowSmIcon @ 0x1C00AB130 (xxxGetWindowSmIcon.c)
 */

__int64 __fastcall SendDwmIconChange(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  if ( (unsigned int)HasCaptionIcon((__int64)a1) && (*((_BYTE *)a1 + 54) & 8) != 0 && xxxGetWindowSmIcon(a1) )
    xxxGetWindowSmIcon(a1);
  GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  v6 = (void *)ReferenceDwmApiPort(v3, v2, v4, v5);
  return DwmAsyncIconChange(v6);
}
