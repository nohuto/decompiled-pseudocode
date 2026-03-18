/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1C0085F4C
 * Callers:
 *     ACPILoadProcessDSDT @ 0x1C0085CF0 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1C0085DA4 (ACPILoadProcessRSDT.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1)
{
  unsigned int v2; // edi
  __int64 *PoolWithTag; // rax
  __int64 *v4; // rbx
  __int64 **v5; // rax

  v2 = 0;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x74706341u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v4[3] = a1;
    v5 = (__int64 **)qword_1C005A9F0;
    *v4 = (__int64)&AcpiDynamicDataBlockTableList;
    v4[1] = (__int64)v5;
    if ( *v5 != &AcpiDynamicDataBlockTableList )
      __fastfail(3u);
    *v5 = v4;
    qword_1C005A9F0 = (__int64)v4;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
