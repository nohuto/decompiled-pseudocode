/*
 * XREFs of UmfdQueryFontFile @ 0x1401F8250
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0QueryFontFileRequest@@QEAA@_KKKPEAK@Z @ 0x1401F82A0 (--0QueryFontFileRequest@@QEAA@_KKKPEAK@Z.c)
 */

__int64 __fastcall UmfdQueryFontFile(unsigned __int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ecx
  _BYTE v8[40]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  unsigned int v10; // [rsp+70h] [rbp-18h]

  QueryFontFileRequest::QueryFontFileRequest((QueryFontFileRequest *)v8, a1, a2, a3, a4);
  v5 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(v9 + 20), (__int64)v8, v4);
  v6 = v10;
  if ( v5 < 0 )
    return (unsigned int)-1;
  return v6;
}
