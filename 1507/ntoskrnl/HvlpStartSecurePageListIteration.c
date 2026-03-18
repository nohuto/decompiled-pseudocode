/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x1401F098C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401ECACC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401ECC54 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401EED1C (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401EF9C0 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sub_1401F0638 @ 0x1401F0638 (sub_1401F0638.c)
 *     HvlpSetupPageListIteration @ 0x1401F08F8 (HvlpSetupPageListIteration.c)
 */

__int64 __fastcall HvlpStartSecurePageListIteration(int a1, unsigned int a2)
{
  __int64 v2; // rdi
  NTSTATUS v5; // edx
  _QWORD *v6; // rax
  unsigned __int8 v7[8]; // [rsp+20h] [rbp-88h] BYREF
  _BOOL8 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]

  v2 = a2;
  if ( !HvlpSetupPageListIteration(a1, 1) )
    return 3221225473LL;
  v9 = v2;
  v8 = a1 == 0;
  v5 = HvlpEnterIumSecureMode(1u, 2048, 0, v7);
  if ( v5 < 0 )
  {
    v6 = sub_1401F0638(a1);
    v6[1] = 0LL;
    *(_DWORD *)v6 = 0;
  }
  return (unsigned int)v5;
}
