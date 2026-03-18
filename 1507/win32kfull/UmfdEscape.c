/*
 * XREFs of UmfdEscape @ 0x1C02D4C70
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdEscape(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // ecx
  void **v9; // [rsp+20h] [rbp-60h] BYREF
  int v10; // [rsp+28h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-50h]
  __int64 v12; // [rsp+38h] [rbp-48h]
  int v13; // [rsp+40h] [rbp-40h]
  int v14; // [rsp+44h] [rbp-3Ch]
  __int64 v15; // [rsp+48h] [rbp-38h]
  int v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]

  v10 = 14;
  v19 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = &EscapeRequest::`vftable';
  v16 = a5;
  v12 = a1;
  v13 = a2;
  v17 = a6;
  v14 = a3;
  v15 = a4;
  v18 = -1;
  v6 = UmfdClientSendAndWaitForCompletion(3u, (__int64)&v9);
  v7 = v18;
  if ( v6 < 0 )
    return (unsigned int)-1;
  return v7;
}
