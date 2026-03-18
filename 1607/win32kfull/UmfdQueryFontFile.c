/*
 * XREFs of UmfdQueryFontFile @ 0x1C02D9680
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryFontFile(__int64 a1, int a2, int a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ecx
  void **v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+44h] [rbp-1Ch]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v8 = 6;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = a2;
  v7 = &QueryFontFileRequest::`vftable';
  v10 = a1;
  v12 = a3;
  v13 = a4;
  v14 = -1;
  v4 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), (__int64)&v7);
  v5 = v14;
  if ( v4 < 0 )
    return (unsigned int)-1;
  return v5;
}
