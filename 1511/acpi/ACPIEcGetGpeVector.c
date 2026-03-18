/*
 * XREFs of ACPIEcGetGpeVector @ 0x1C007A0E0
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C003A9C0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00079D0 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIEcGetGpeVector(__int64 a1)
{
  __int64 *v2; // rdi
  int v4; // esi
  _WORD v5[28]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 56), 1162889055);
  if ( !v2 )
    return 3221225524LL;
  memset(v5, 0, 0x28uLL);
  v5[1] = 0;
  v4 = AMLIEvalNameSpaceObject(v2, v5, 0, 0LL);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v2);
  if ( v4 >= 0 )
  {
    if ( v5[1] != 1 )
    {
      AMLIFreeDataBuffs((__int64)v5);
      return 3222536207LL;
    }
    *(_DWORD *)(a1 + 48) = LOBYTE(v5[8]);
    AMLIFreeDataBuffs((__int64)v5);
  }
  return (unsigned int)v4;
}
