/*
 * XREFs of UmfdQueryAdvanceWidths @ 0x1C02D4FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryAdvanceWidths(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  void **v7; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+28h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-50h]
  __int64 v10; // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  int v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+6Ch] [rbp-14h]
  __int128 v18; // [rsp+70h] [rbp-10h]

  v8 = 8;
  CurrentThread = KeGetCurrentThread();
  v7 = &QueryAdvanceWidthsRequest::`vftable';
  v17 = 0;
  v14 = a5;
  v11 = a2;
  v15 = a6;
  v18 = 0LL;
  v10 = a1;
  v12 = a3;
  v13 = a4;
  v16 = (unsigned int)(a3 != 1) - 1;
  UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL), (__int64)&v7);
  return (unsigned int)v16;
}
