/*
 * XREFs of MiDeleteLeakedSessionPool @ 0x140567DC0
 * Callers:
 *     MiCheckSessionPoolAllocations @ 0x140567CD4 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     RtlFindSetBits @ 0x140062390 (RtlFindSetBits.c)
 *     RtlFindNextForwardRunClear @ 0x140063958 (RtlFindNextForwardRunClear.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiDeleteSessionPoolRange @ 0x14022074C (MiDeleteSessionPoolRange.c)
 */

__int64 MiDeleteLeakedSessionPool()
{
  ULONG v0; // esi
  __int64 v1; // rdi
  ULONG SetBits; // eax
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 result; // rax
  bool v6; // zf
  ULONG SizeOfBitMap; // eax
  unsigned int v8; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+48h] [rbp-8h]
  ULONG StartingRunIndex; // [rsp+60h] [rbp+10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v0 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v1 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  BitMapHeader.Buffer = *(unsigned int **)(v1 + 7704);
  BitMapHeader.SizeOfBitMap = *(_DWORD *)(v1 + 7696);
  do
  {
    SetBits = RtlFindSetBits(&BitMapHeader, 1u, v0);
    v3 = SetBits;
    if ( SetBits == -1 || SetBits < v0 )
      break;
    v6 = RtlFindNextForwardRunClear(&BitMapHeader, SetBits, &StartingRunIndex) == 0;
    SizeOfBitMap = StartingRunIndex;
    if ( v6 )
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v8 = SizeOfBitMap - v3;
    v0 += v8;
    MiDeleteSessionPoolRange(v1, qword_14034EAB0 + (v3 << 21), (unsigned __int64)v8 << 21, &v10);
  }
  while ( v0 < BitMapHeader.SizeOfBitMap );
  v4 = v13;
  result = MiReturnCommit((__int64)MiSystemPartition, v13 - v11);
  *(_QWORD *)(v1 + 2960) -= v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 48), -v4);
  return result;
}
