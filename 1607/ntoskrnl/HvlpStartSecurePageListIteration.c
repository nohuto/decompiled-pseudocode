/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x1401C2098
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401BEE4C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401BEFDC (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401BFFCC (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401C0710 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpGetPageListIterator @ 0x1401C1E64 (HvlpGetPageListIterator.c)
 *     HvlpSetupPageListIteration @ 0x1401C2004 (HvlpSetupPageListIteration.c)
 */

__int64 __fastcall HvlpStartSecurePageListIteration(int a1, unsigned int a2)
{
  __int64 v2; // rdi
  NTSTATUS v5; // edx
  _QWORD *PageListIterator; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  _BOOL8 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]

  v2 = a2;
  if ( !HvlpSetupPageListIteration(a1, 1) )
    return 3221225473LL;
  v9 = v2;
  v8 = a1 == 0;
  v5 = VslpEnterIumSecureMode(1, 2048LL, 0LL, (__int64)v7);
  if ( v5 < 0 )
  {
    PageListIterator = HvlpGetPageListIterator(a1);
    PageListIterator[1] = 0LL;
    *(_DWORD *)PageListIterator = 0;
  }
  return (unsigned int)v5;
}
