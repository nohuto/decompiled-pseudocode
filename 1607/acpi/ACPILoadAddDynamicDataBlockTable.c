/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1C00A6E3C
 * Callers:
 *     ACPILoadProcessDSDT @ 0x1C00A668C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1C00A6C1C (ACPILoadProcessRSDT.c)
 * Callees:
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x74706341u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v4[3] = a1;
    v5 = (_QWORD *)qword_1C0074E70;
    if ( *(__int64 **)qword_1C0074E70 != &AcpiDynamicDataBlockTableList )
      __fastfail(3u);
    *v4 = &AcpiDynamicDataBlockTableList;
    v4[1] = v5;
    *v5 = v4;
    qword_1C0074E70 = (__int64)v4;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
