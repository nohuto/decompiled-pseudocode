/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C02D560C
 * Callers:
 *     UmfdLoadFontFile @ 0x1C02D4E30 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1C02D55E0 (UmfdUnloadFontFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  void **v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  unsigned int v8; // [rsp+40h] [rbp-18h]

  v5 = 5;
  CurrentThread = KeGetCurrentThread();
  v4 = &UnloadFontFileRequest::`vftable';
  v7 = a1;
  v8 = 0;
  v1 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), (__int64)&v4);
  v2 = v8;
  if ( v1 < 0 )
    return 0;
  return v2;
}
