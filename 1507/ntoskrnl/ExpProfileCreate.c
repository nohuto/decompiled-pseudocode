/*
 * XREFs of ExpProfileCreate @ 0x1406F9A1C
 * Callers:
 *     NtCreateProfile @ 0x1406F9F78 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x1406FA04C (NtCreateProfileEx.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExIsRestrictedCaller @ 0x1404CA200 (ExIsRestrictedCaller.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

int __fastcall ExpProfileCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int Length,
        int a8)
{
  unsigned __int64 v10; // r9
  __int64 v11; // [rsp+68h] [rbp-160h]
  int v12; // [rsp+90h] [rbp-138h]

  v11 = a1;
  if ( !Length )
    return -1073741579;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return -1073741811;
  v10 = a4 >> a5;
  if ( a4 % (1LL << a5) )
    ++v10;
  if ( v10 > (unsigned __int64)Length >> 2 )
    return -1073741789;
  if ( a3 + a4 < a4 )
    return -2147483643;
  v12 = a8;
  off_140321B18();
  return -1073741637;
}
