/*
 * XREFs of UmfdEscape @ 0x14034E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdEscape(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  _QWORD v13[6]; // [rsp+28h] [rbp-29h] BYREF
  int v14; // [rsp+58h] [rbp+7h]
  int v15; // [rsp+5Ch] [rbp+Bh]
  __int64 v16; // [rsp+60h] [rbp+Fh]
  int v17; // [rsp+68h] [rbp+17h]
  __int64 v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+78h] [rbp+27h]
  __int64 v20; // [rsp+80h] [rbp+2Fh]
  __int64 v21; // [rsp+88h] [rbp+37h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v13, 14);
  v20 = 0LL;
  v13[0] = &EscapeRequest::`vftable';
  v17 = a5;
  v18 = a6;
  v21 = 0LL;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v19 = -1;
  v10 = UmfdClientSendAndWaitForCompletion(3LL, (__int64)v13, v9);
  v11 = v19;
  if ( v10 < 0 )
    return (unsigned int)-1073741823;
  return v11;
}
