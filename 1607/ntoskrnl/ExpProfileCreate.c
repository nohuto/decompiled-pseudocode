/*
 * XREFs of ExpProfileCreate @ 0x1406B7C0C
 * Callers:
 *     NtCreateProfile @ 0x1406B810C (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x1406B81E0 (NtCreateProfileEx.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030FF0 (KeCopyAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeVerifyGroupAffinity @ 0x140132BB8 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 *     ObCreateObject @ 0x14047181C (ObCreateObject.c)
 *     ExIsRestrictedCaller @ 0x1404F163C (ExIsRestrictedCaller.c)
 *     xHalSetSystemInformation @ 0x140581940 (xHalSetSystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
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
  off_1402F37E8();
  return -1073741637;
}
