/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1C0072B80
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C006AA50 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalSetFlags @ 0x1C00044E0 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIQueryCacheCoherencyAttribute(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rax
  int v5; // edi
  _BYTE v7[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v8; // [rsp+32h] [rbp-36h]
  char v9; // [rsp+40h] [rbp-28h]

  if ( (*(_QWORD *)BugCheckParameter2 & 0x8000000000000LL) != 0 )
    return 0;
  v2 = ACPIInternalSetFlags((void *)(BugCheckParameter2 + 904), 0x1000000uLL);
  if ( (v2 & v3) != 0 )
    return 0;
  v4 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(BugCheckParameter2 + 704), 1094927199);
  if ( !v4 )
  {
    *(_DWORD *)(BugCheckParameter2 + 884) = 1;
    return 0;
  }
  v5 = AMLIEvalNameSpaceObject(v4, v7, 0, 0LL);
  if ( v5 >= 0 )
  {
    if ( v8 != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 704), v8);
    if ( (v9 & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 884) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 884) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs((__int64)v7);
  }
  return (unsigned int)v5;
}
