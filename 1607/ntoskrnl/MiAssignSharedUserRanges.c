/*
 * XREFs of MiAssignSharedUserRanges @ 0x14013D710
 * Callers:
 *     MiInitializeSystemVa @ 0x1407AA428 (MiInitializeSystemVa.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiSystemWorkingSetStructureSize @ 0x140554D00 (MiSystemWorkingSetStructureSize.c)
 */

__int64 __fastcall MiAssignSharedUserRanges(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int16 v4; // ax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-39h] BYREF
  int v7; // [rsp+38h] [rbp-29h]
  _DWORD v8[11]; // [rsp+3Ch] [rbp-25h] BYREF
  _BYTE v9[64]; // [rsp+68h] [rbp+7h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v9, 0, sizeof(v9));
  BitMapHeader.SizeOfBitMap = 512;
  BitMapHeader.Buffer = (unsigned int *)v9;
  RtlSetBits(&BitMapHeader, 0, 1u);
  v7 = 0;
  *(_QWORD *)&v8[3] = MiSystemWorkingSetStructureSize(0x8000000LL);
  v2 = &v8[1];
  v8[5] = 1;
  *(_QWORD *)&v8[9] = 0x80000000LL;
  v3 = 2LL;
  do
  {
    v4 = ExGenRandom(1);
    *v2 = (RtlFindClearBitsAndSet(&BitMapHeader, ((unsigned __int64)(v2[1] + 0x3FFFFFFFLL) >> 30) + 1, v4 & 0x1FF)
         - 8704LL) << 30;
    v2 += 3;
    --v3;
  }
  while ( v3 );
  *((_QWORD *)MiGetAnyMultiplexedVm(1) + 2) = *(_QWORD *)&v8[1];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2576LL) = *(_QWORD *)&v8[7];
  result = *(_QWORD *)&v8[9];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL) = *(_QWORD *)&v8[9];
  return result;
}
