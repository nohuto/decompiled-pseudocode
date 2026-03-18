/*
 * XREFs of UmfdQueryFont @ 0x1400FD550
 * Callers:
 *     <none>
 * Callees:
 *     UmfdDrvFreeInternal @ 0x1400D3888 (UmfdDrvFreeInternal.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdQueryFont(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v8; // r8
  __int64 result; // rax
  _QWORD v10[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  __int64 *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  __int128 v15; // [rsp+70h] [rbp-10h]

  *a4 = 0LL;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v10, 0);
  v10[5] = a1;
  v10[0] = &QueryFontRequest::`vftable';
  v15 = 0LL;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = 0LL;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a2 + 20), (__int64)v10, v8) < 0 )
    return 0LL;
  result = v14;
  if ( !v14 )
  {
    if ( *((_QWORD *)&v15 + 1) )
      UmfdDrvFreeInternal(*((__int64 *)&v15 + 1), *v13, *(_DWORD *)(v11 + 20));
    return 0LL;
  }
  return result;
}
