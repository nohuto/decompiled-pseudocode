/*
 * XREFs of UmfdQueryFontTree @ 0x1401F7D30
 * Callers:
 *     <none>
 * Callees:
 *     UmfdDrvFreeInternal @ 0x1400D3888 (UmfdDrvFreeInternal.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdQueryFontTree(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v9; // r8
  __int64 result; // rax
  _QWORD v11[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+5Ch] [rbp-24h]
  __int64 *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int128 v17; // [rsp+70h] [rbp-10h]

  *a5 = 0LL;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v11, 1);
  v11[5] = a1;
  v11[0] = &QueryFontTreeRequest::`vftable';
  v17 = 0LL;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = a5;
  v16 = 0LL;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a2 + 20), (__int64)v11, v9) < 0 )
    return 0LL;
  result = v16;
  if ( !v16 )
  {
    if ( *((_QWORD *)&v17 + 1) )
      UmfdDrvFreeInternal(*((__int64 *)&v17 + 1), *v15, *(_DWORD *)(v12 + 20));
    return 0LL;
  }
  return result;
}
