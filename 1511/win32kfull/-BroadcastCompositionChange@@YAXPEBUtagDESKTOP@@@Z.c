/*
 * XREFs of ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00D2254
 * Callers:
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageBSM @ 0x1C008D820 (xxxSendMessageBSM.c)
 */

void __fastcall BroadcastCompositionChange(const struct tagDESKTOP *a1)
{
  _DWORD v2[14]; // [rsp+30h] [rbp-38h] BYREF
  char v3; // [rsp+70h] [rbp+8h] BYREF

  v2[0] = 8;
  v2[1] = 178;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  xxxSendMessageBSM(
    *(struct tagWND **)(*((_QWORD *)a1 + 1) + 16LL),
    0x31Eu,
    0LL,
    0LL,
    (struct tagBROADCASTSYSTEMMSGPARAMS *)v2,
    1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v3);
}
