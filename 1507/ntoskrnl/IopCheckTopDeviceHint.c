/*
 * XREFs of IopCheckTopDeviceHint @ 0x14052D3D4
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140113AAC (IopVerifyDeviceObjectOnStack.c)
 *     FsRtlFindExtraCreateParameter @ 0x1404A5750 (FsRtlFindExtraCreateParameter.c)
 */

__int64 __fastcall IopCheckTopDeviceHint(unsigned int **a1, __int64 a2, char a3, const UNICODE_STRING *a4)
{
  unsigned int *v4; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  struct _ECP_LIST *v11; // rcx
  _DWORD *v12; // rbx
  UNICODE_STRING *v13; // rcx
  int v14; // eax
  PVOID EcpContext; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( a3 )
    return 3221225485LL;
  v8 = v4[18];
  if ( (unsigned int)v8 > 0x35 )
    return 3221225485LL;
  v9 = 0x20000100121108LL;
  if ( !_bittest64(&v9, v8) )
    return 3221225485LL;
  if ( IopVerifyDeviceObjectOnStack((__int64)v4, *(_QWORD *)(a2 + 168), 1) )
  {
    *a1 = *(unsigned int **)(a2 + 168);
    return 0LL;
  }
  else
  {
    v11 = *(struct _ECP_LIST **)(a2 + 160);
    if ( v11 && FsRtlFindExtraCreateParameter(v11, &GUID_ECP_IO_DEVICE_HINT, &EcpContext, 0LL) >= 0 )
    {
      ObfReferenceObject(v4);
      v12 = EcpContext;
      v13 = (UNICODE_STRING *)((char *)EcpContext + 8);
      *(_QWORD *)EcpContext = v4;
      RtlCopyUnicodeString(v13, a4);
      *(v12 - 6) |= 8u;
    }
    v14 = *(_DWORD *)(a2 + 144);
    if ( (v14 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 144) = v14 & 0xFFFFFFEF;
      return 3221226344LL;
    }
    else
    {
      return 3221226345LL;
    }
  }
}
