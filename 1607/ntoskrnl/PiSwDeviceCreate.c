/*
 * XREFs of PiSwDeviceCreate @ 0x140487BA0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceCreate(_QWORD *a1)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC8uLL, 0x57706E50u);
  *a1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xC8uLL);
    *(_DWORD *)*a1 = 1;
    v4 = (_QWORD *)(*a1 + 128LL);
    v4[1] = v4;
    *v4 = v4;
    v5 = (_QWORD *)(*a1 + 184LL);
    v5[1] = v5;
    *v5 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
