/*
 * XREFs of UmfdGetTrueTypeFile @ 0x1C02D4DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdGetTrueTypeFile(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  void **v5; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-30h]
  _DWORD *v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v6 = 12;
  *a2 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = a2;
  v5 = &GetTrueTypeFileRequest::`vftable';
  v11 = 0LL;
  v8 = a1;
  v10 = 0LL;
  v2 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), (__int64)&v5);
  v3 = v10;
  if ( v2 < 0 )
    return 0LL;
  return v3;
}
