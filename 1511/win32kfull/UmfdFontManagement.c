/*
 * XREFs of UmfdFontManagement @ 0x1C02D60F0
 * Callers:
 *     AtmDrvFontManagementRedirector @ 0x1C02A3EE0 (AtmDrvFontManagementRedirector.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A31F0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdFontManagement(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  int v7; // eax
  unsigned int v8; // ecx
  void **v10; // [rsp+20h] [rbp-31h] BYREF
  int v11; // [rsp+28h] [rbp-29h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-21h]
  __int64 v13; // [rsp+38h] [rbp-19h]
  __int64 v14; // [rsp+40h] [rbp-11h]
  int v15; // [rsp+48h] [rbp-9h]
  int v16; // [rsp+4Ch] [rbp-5h]
  __int64 v17; // [rsp+50h] [rbp-1h]
  int v18; // [rsp+58h] [rbp+7h]
  __int64 v19; // [rsp+60h] [rbp+Fh]
  int v20; // [rsp+68h] [rbp+17h]
  __int128 v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+80h] [rbp+2Fh]

  v11 = 13;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = &FontManagementRequest::`vftable';
  v17 = a5;
  v18 = a6;
  v13 = a1;
  v14 = a2;
  v19 = a7;
  v21 = 0LL;
  v15 = a3;
  v16 = a4;
  v20 = -1;
  v7 = UmfdClientSendAndWaitForCompletion(3u, (__int64)&v10);
  v8 = v20;
  if ( v7 < 0 )
    return (unsigned int)-1;
  return v8;
}
