/*
 * XREFs of WmipAllocDataSource @ 0x14053747C
 * Callers:
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     WmipAllocEntry @ 0x1405383A8 (WmipAllocEntry.c)
 */

__int64 WmipAllocDataSource()
{
  __int64 v0; // rax
  __int64 v1; // rbx

  v0 = WmipAllocEntry(&WmipDSChunkInfo);
  v1 = v0;
  if ( v0 )
  {
    *(_QWORD *)(v0 + 48) = v0 + 40;
    *(_QWORD *)(v0 + 40) = v0 + 40;
    *(_DWORD *)(v0 + 64) = 4;
    *(_QWORD *)(v0 + 72) = v0 + 80;
    memset((void *)(v0 + 80), 0, 0x20uLL);
  }
  return v1;
}
