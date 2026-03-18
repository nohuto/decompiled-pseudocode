/*
 * XREFs of ACPIEcGetUid @ 0x1C007A02C
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0039DB0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rsi
  int v4; // ebx
  _WORD v5[28]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  result = AMLIGetNamedChild(*(_QWORD *)(a1 + 56), 1145656671);
  v3 = (__int64 *)result;
  if ( result )
  {
    memset(v5, 0, 0x28uLL);
    v5[1] = 0;
    v4 = AMLIEvalNameSpaceObject(v3, v5, 0, 0LL);
    result = AMLIDereferenceHandleEx((volatile signed __int32 *)v3);
    if ( v4 >= 0 )
    {
      if ( v5[1] == 1 )
        *(_DWORD *)(a1 + 16) = LOBYTE(v5[8]);
      return AMLIFreeDataBuffs((__int64)v5);
    }
  }
  return result;
}
