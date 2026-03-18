/*
 * XREFs of PciConfigSpaceHandler @ 0x1C001CE10
 * Callers:
 *     <none>
 * Callees:
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall PciConfigSpaceHandler(
        int a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x46706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v14 = gdwfAMLI;
  *(_DWORD *)v13 = a1;
  v13[1] = a2;
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( (v14 & 4) != 0 )
  {
    _InterlockedIncrement(a2 + 2);
    v14 = gdwfAMLI;
  }
  v13[3] = a5;
  *((_DWORD *)v13 + 8) = a6;
  v13[5] = a7;
  v13[6] = a8;
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = a4;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
  v13[7] = v15;
  if ( v15 )
  {
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    if ( (v14 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  }
  v16 = v13[7];
  *((_DWORD *)v13 + 20) = -1;
  return PciConfigSpaceHandlerWorker(v16, 0LL, 0LL, v13);
}
