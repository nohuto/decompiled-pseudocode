/*
 * XREFs of RtlpConvertFunctionEntry @ 0x140133FD0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14017B604 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14079A2C4 (CcInitializeBcbProfiler.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = a1;
  if ( a1 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    if ( (v3 & 1) != 0 )
    {
      v2 = v3 + a2 - 1;
      if ( a2 <= (unsigned __int64)MmHighestUserAddress && (v2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  return v2;
}
