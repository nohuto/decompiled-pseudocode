/*
 * XREFs of UmfdTrueTypeFreeGlyphset @ 0x1400D2A18
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400D1C9C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(__int64 a1, int a2, char *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD v8[6]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest(v8, 15LL);
  v8[5] = a1;
  v8[0] = &TrueTypeFreeGlyphsetRequest::`vftable';
  v9 = a2;
  UmfdClientSendAndWaitForCompletion(0LL, v8);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3, v6, v7);
}
