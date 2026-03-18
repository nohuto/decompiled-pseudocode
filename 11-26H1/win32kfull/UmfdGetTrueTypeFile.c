/*
 * XREFs of UmfdGetTrueTypeFile @ 0x140223FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0GetTrueTypeFileRequest@@QEAA@_KPEAK@Z @ 0x140223FE8 (--0GetTrueTypeFileRequest@@QEAA@_KPEAK@Z.c)
 */

__int64 __fastcall UmfdGetTrueTypeFile(unsigned __int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-20h]

  *a2 = 0;
  GetTrueTypeFileRequest::GetTrueTypeFileRequest((GetTrueTypeFileRequest *)v6, a1, a2);
  v3 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(v7 + 20), (__int64)v6, v2);
  v4 = v8;
  if ( v3 < 0 )
    return 0LL;
  return v4;
}
