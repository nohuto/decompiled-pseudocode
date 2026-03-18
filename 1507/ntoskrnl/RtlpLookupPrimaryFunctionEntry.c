/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x140134CBC
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14017B604 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14079A2C4 (CcInitializeBcbProfiler.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // r11d
  _BYTE *v5; // r9
  int v7; // eax

  v4 = 0;
  while ( 1 )
  {
    v5 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (*v5 & 0x20) == 0 )
      break;
    v7 = (unsigned __int8)v5[2];
    if ( (v7 & 1) != 0 )
      ++v7;
    ++v4;
    a1 = &v5[2 * v7 + 4];
    if ( v4 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
