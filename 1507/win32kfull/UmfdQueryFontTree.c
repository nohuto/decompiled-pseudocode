/*
 * XREFs of UmfdQueryFontTree @ 0x1C02D5270
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdDrvFreeInternal @ 0x1C02D4C20 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFontTree(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 result; // rax
  void **v6; // [rsp+20h] [rbp-50h] BYREF
  int v7; // [rsp+28h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  int v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+4Ch] [rbp-24h]
  __int64 *v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  __int128 v15; // [rsp+60h] [rbp-10h]

  v7 = 1;
  *a5 = 0LL;
  v14 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = a2;
  v6 = &QueryFontTreeRequest::`vftable';
  v15 = 0LL;
  v9 = a1;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a2 + 8), (__int64)&v6) >= 0 )
  {
    result = v14;
    if ( v14 )
      return result;
    if ( *((_QWORD *)&v15 + 1) )
      UmfdDrvFreeInternal(*((__int64 *)&v15 + 1), *v13, *(_DWORD *)(v10 + 8));
  }
  return 0LL;
}
