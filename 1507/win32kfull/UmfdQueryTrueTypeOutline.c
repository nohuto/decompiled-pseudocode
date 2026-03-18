/*
 * XREFs of UmfdQueryTrueTypeOutline @ 0x1C02D53C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryTrueTypeOutline(__int64 a1, __int64 a2, int a3, int a4, void *a5, int a6, __int64 a7)
{
  int v11; // eax
  unsigned int v12; // ecx
  void **v14; // [rsp+28h] [rbp-41h] BYREF
  int v15; // [rsp+30h] [rbp-39h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-31h]
  __int64 v17; // [rsp+40h] [rbp-29h]
  __int64 v18; // [rsp+48h] [rbp-21h]
  int v19; // [rsp+50h] [rbp-19h]
  int v20; // [rsp+54h] [rbp-15h]
  void *v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  int v24; // [rsp+70h] [rbp+7h]
  __int128 v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+88h] [rbp+1Fh]

  if ( a5 )
    memset(a5, 0, 0x40uLL);
  v15 = 11;
  v26 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v14 = &QueryTrueTypeOutlineRequest::`vftable';
  v22 = a6;
  v21 = a5;
  v23 = a7;
  v25 = 0LL;
  v17 = a1;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  v24 = -1;
  v11 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL), (__int64)&v14);
  v12 = v24;
  if ( v11 < 0 )
    return (unsigned int)-1;
  return v12;
}
