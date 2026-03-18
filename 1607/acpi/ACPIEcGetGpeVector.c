/*
 * XREFs of ACPIEcGetGpeVector @ 0x1C009AE70
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C004CE80 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00080D4 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIEcGetGpeVector(__int64 a1)
{
  __int64 *v2; // rdi
  int v4; // esi
  __int64 v5; // rdx
  _WORD v6[28]; // [rsp+20h] [rbp-38h] BYREF

  v2 = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1162889055);
  if ( !v2 )
    return 3221225524LL;
  memset(v6, 0, 0x28uLL);
  v6[1] = 0;
  v4 = AMLIEvalNameSpaceObject(v2, v6, 0, 0LL);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v2, v5);
  if ( v4 >= 0 )
  {
    if ( v6[1] != 1 )
    {
      AMLIFreeDataBuffs((__int64)v6);
      return 3222536207LL;
    }
    *(_DWORD *)(a1 + 48) = LOBYTE(v6[8]);
    AMLIFreeDataBuffs((__int64)v6);
  }
  return (unsigned int)v4;
}
