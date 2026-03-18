/*
 * XREFs of ExpProfileCreate @ 0x1406752BC
 * Callers:
 *     NtCreateProfile @ 0x1406757B4 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x140675888 (NtCreateProfileEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KeVerifyGroupAffinity @ 0x1401230CC (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExIsRestrictedCaller @ 0x1404C69D4 (ExIsRestrictedCaller.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  off_1402D29C8();
  return -1073741637;
}
