/*
 * XREFs of ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0093E04
 * Callers:
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageBSM @ 0x1C009C7E0 (xxxSendMessageBSM.c)
 */

void __fastcall BroadcastCompositionChange(const struct tagDESKTOP *a1)
{
  _DWORD v2[14]; // [rsp+30h] [rbp-38h] BYREF
  char v3; // [rsp+70h] [rbp+8h] BYREF

  v2[0] = 8;
  v2[1] = 178;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, _DWORD *, int))xxxSendMessageBSM)(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL),
    798LL,
    0LL,
    0LL,
    v2,
    1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v3);
}
