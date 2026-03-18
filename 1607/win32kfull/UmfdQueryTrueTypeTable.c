/*
 * XREFs of UmfdQueryTrueTypeTable @ 0x1C02D9930
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v8; // eax
  unsigned int v9; // ecx
  void **v11; // [rsp+20h] [rbp-39h] BYREF
  int v12; // [rsp+28h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-29h]
  __int64 v14; // [rsp+38h] [rbp-21h]
  int v15; // [rsp+40h] [rbp-19h]
  int v16; // [rsp+44h] [rbp-15h]
  int v17; // [rsp+48h] [rbp-11h]
  int v18; // [rsp+4Ch] [rbp-Dh]
  __int64 v19; // [rsp+50h] [rbp-9h]
  _QWORD *v20; // [rsp+58h] [rbp-1h]
  _DWORD *v21; // [rsp+60h] [rbp+7h]
  int v22; // [rsp+68h] [rbp+Fh]
  __int128 v23; // [rsp+70h] [rbp+17h]
  __int64 v24; // [rsp+80h] [rbp+27h]

  if ( a7 )
    *a7 = 0LL;
  if ( a8 )
    *a8 = 0;
  v12 = 10;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = &QueryTrueTypeTableRequest::`vftable';
  v18 = a5;
  v15 = a2;
  v19 = a6;
  v23 = 0LL;
  v14 = a1;
  v16 = a3;
  v17 = a4;
  v20 = a7;
  v21 = a8;
  v22 = -1;
  v8 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), (__int64)&v11);
  v9 = v22;
  if ( v8 < 0 )
    return (unsigned int)-1;
  return v9;
}
