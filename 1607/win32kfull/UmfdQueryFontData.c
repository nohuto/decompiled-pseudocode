/*
 * XREFs of UmfdQueryFontData @ 0x1C02D95D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // eax
  unsigned int v8; // ecx
  void **v10; // [rsp+20h] [rbp-60h] BYREF
  int v11; // [rsp+28h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  int v14; // [rsp+40h] [rbp-40h]
  int v15; // [rsp+44h] [rbp-3Ch]
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  int v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+64h] [rbp-1Ch]
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int128 v22; // [rsp+70h] [rbp-10h]

  v11 = 2;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = &QueryFontDataRequest::`vftable';
  v17 = a5;
  v18 = a6;
  v16 = a2;
  v19 = a7;
  v22 = 0LL;
  v13 = a1;
  v14 = a3;
  v15 = a4;
  v20 = -1;
  v7 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL), (__int64)&v10);
  v8 = v20;
  if ( v7 < 0 )
    return (unsigned int)-1;
  return v8;
}
