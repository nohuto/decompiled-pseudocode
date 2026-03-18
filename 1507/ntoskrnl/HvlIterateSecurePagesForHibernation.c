/*
 * XREFs of HvlIterateSecurePagesForHibernation @ 0x1401ECC54
 * Callers:
 *     PopWriteSecurePages @ 0x14023B064 (PopWriteSecurePages.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x1401F04E0 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401F064C (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401F098C (HvlpStartSecurePageListIteration.c)
 *     PopWriteSecurePagesCallback @ 0x14023B104 (PopWriteSecurePagesCallback.c)
 */

__int64 __fastcall HvlIterateSecurePagesForHibernation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int SecurePageList; // ebx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  result = HvlpStartSecurePageListIteration(0LL, 3LL);
  if ( (int)result >= 0 )
  {
    do
    {
      SecurePageList = HvlpGetSecurePageList(0, 0, (unsigned int)&v9, 0, (__int64)&v10);
      if ( SecurePageList >= 0 )
        PopWriteSecurePagesCallback(a2, v9);
    }
    while ( !SecurePageList );
    HvlpEndSecurePageListIteration(0LL, a3, a4);
    if ( SecurePageList == -2147483622 )
      return 0;
    return (unsigned int)SecurePageList;
  }
  return result;
}
