/*
 * XREFs of MiCleanPhysicalProcessPages @ 0x1406A5EEC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x14008D1B8 (MiReturnProcessCommitment.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     RtlFindSetBitsEx @ 0x14014CF00 (RtlFindSetBitsEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall MiCleanPhysicalProcessPages(__int64 a1)
{
  _RTL_BITMAP_EX *v1; // r14
  __int64 v2; // rsi
  ULONG64 *v3; // r12
  __int64 v4; // rdi
  ULONG64 SetBits; // r15
  ULONG64 v6; // r13
  __int16 *ProcessPartition; // [rsp+28h] [rbp-E0h]
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+40h] [rbp-C8h]
  __int64 v11; // [rsp+58h] [rbp-B0h]
  __int64 v12; // [rsp+60h] [rbp-A8h]
  _BYTE v13[512]; // [rsp+68h] [rbp-A0h] BYREF

  v1 = **(_RTL_BITMAP_EX ***)(a1 + 1032);
  if ( v1 && *(_QWORD *)(a1 + 1576) )
  {
    v2 = 0LL;
    v3 = (ULONG64 *)v13;
    v4 = 0LL;
    ProcessPartition = MiGetProcessPartition(a1);
    SetBits = RtlFindSetBitsEx(v1, 1uLL, 0LL);
    do
    {
      if ( SetBits == -1LL )
        break;
      *v3 = SetBits;
      ++v4;
      ++v3;
      if ( v4 == 64 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)ProcessPartition + 719, 0xFFFFFFFFFFFFFFC0uLL);
        v9 = 0LL;
        v10 = 560;
        v11 = 0LL;
        v12 = 0x40000LL;
        MiFreePagesFromMdl((__int64)ProcessPartition, (ULONG_PTR)&v9, 1u);
        v2 += 64LL;
        v3 = (ULONG64 *)v13;
        v4 = 0LL;
      }
      v6 = SetBits + 1;
      if ( SetBits + 1 >= v1->SizeOfBitMap )
        break;
      SetBits = RtlFindSetBitsEx(v1, 1uLL, SetBits + 1);
    }
    while ( SetBits >= v6 );
    if ( v4 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)ProcessPartition + 719, -v4);
      v9 = 0LL;
      v11 = 0LL;
      v12 = (unsigned int)((_DWORD)v4 << 12);
      v10 = (unsigned __int16)(8 * (((unsigned __int64)((v4 << 12) + 4095) >> 12) + 6));
      MiFreePagesFromMdl((__int64)ProcessPartition, (ULONG_PTR)&v9, 1u);
      v2 += v4;
    }
    if ( v2 )
    {
      *(_QWORD *)(a1 + 1576) = 0LL;
      MiReturnProcessCommitment(a1, v2);
    }
  }
}
