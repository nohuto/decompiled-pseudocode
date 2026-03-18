/*
 * XREFs of PcisuppIsPciDevice @ 0x1C0069F6C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqArbCommitAllocation @ 0x1C0069DA0 (IrqArbCommitAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C006B740 (IrqArbGetNextAllocationRange.c)
 *     IrqArbFindSuitableRange @ 0x1C006C1A0 (IrqArbFindSuitableRange.c)
 *     IrqArbQueryConflict @ 0x1C0080870 (IrqArbQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     PcisuppGetProgConfigHeader @ 0x1C00728E0 (PcisuppGetProgConfigHeader.c)
 */

__int64 __fastcall PcisuppIsPciDevice(__int64 a1, bool *a2)
{
  int v4; // edi
  int ProgConfigHeader; // eax
  char v7; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v8[3]; // [rsp+61h] [rbp-18h] BYREF
  int v9; // [rsp+64h] [rbp-15h] BYREF
  int v10; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v11[64]; // [rsp+70h] [rbp-9h] BYREF

  v7 = 0;
  v8[0] = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
  if ( InterruptRouting )
  {
    v10 = -1;
    v9 = -1;
    v4 = (*((__int64 (__fastcall **)(__int64, int *, int *, _QWORD, _QWORD, char *, _BYTE *, _QWORD, _QWORD, _QWORD, _QWORD))InterruptRouting
          + 4))(
           a1,
           &v10,
           &v9,
           0LL,
           0LL,
           &v7,
           v8,
           0LL,
           0LL,
           0LL,
           0LL);
  }
  else
  {
    v4 = -1073741823;
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  *a2 = v4 >= 0
     && (v7 != 1
      || v8[0] != 1
      || (ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v11), ProgConfigHeader < 0 || (v11[9] & 5) != 0));
  return 0LL;
}
