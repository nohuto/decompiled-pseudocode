/*
 * XREFs of UmfdQueryTrueTypeOutline @ 0x1400FD620
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UmfdQueryTrueTypeOutline(__int64 a1, __int64 a2, int a3, int a4, void *a5, int a6, __int64 a7)
{
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  _QWORD v15[7]; // [rsp+28h] [rbp-51h] BYREF
  int v16; // [rsp+60h] [rbp-19h]
  int v17; // [rsp+64h] [rbp-15h]
  void *v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+80h] [rbp+7h]
  __int128 v22; // [rsp+88h] [rbp+Fh]
  __int64 v23; // [rsp+98h] [rbp+1Fh]

  if ( a5 )
    memset_0(a5, 0, 0x40uLL);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v15, 11);
  v18 = a5;
  v15[0] = &QueryTrueTypeOutlineRequest::`vftable';
  v19 = a6;
  v20 = a7;
  v22 = 0LL;
  v23 = 0LL;
  v15[5] = a1;
  v15[6] = a2;
  v16 = a3;
  v17 = a4;
  v21 = -1;
  v12 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 20LL), (__int64)v15, v11);
  v13 = v21;
  if ( v12 < 0 )
    return (unsigned int)-1;
  return v13;
}
