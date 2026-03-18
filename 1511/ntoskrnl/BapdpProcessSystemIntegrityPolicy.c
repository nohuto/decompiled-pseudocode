/*
 * XREFs of BapdpProcessSystemIntegrityPolicy @ 0x1407688BC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140768658 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140768D64 (BapdpQueryData.c)
 *     SeSystemIntegrityRegisterPolicy @ 0x1407850A8 (SeSystemIntegrityRegisterPolicy.c)
 */

void __fastcall BapdpProcessSystemIntegrityPolicy(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v6[4]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v7[4]; // [rsp+48h] [rbp-18h] BYREF

  v7[0] = -1484001011;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v7[1] = 1222773504;
  v7[2] = -1778765950;
  v7[3] = -887072709;
  v6[0] = -539488817;
  v6[1] = 1293175196;
  v6[2] = -818573922;
  v6[3] = -1023540946;
  if ( (unsigned int)BapdpQueryData(a1, v7, 0LL, 0LL, &NumberOfBytes) != -1073741789 )
  {
    LODWORD(NumberOfBytes) = 0;
    v3 = BapdpQueryData(v2, v6, 0LL, 0LL, &NumberOfBytes);
    if ( v3 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
      if ( !PoolWithTag )
        return;
      v3 = 0;
    }
    if ( v3 >= 0 && (int)BapdpQueryData(v4, v6, 0LL, PoolWithTag, &NumberOfBytes) >= 0 )
      SeSystemIntegrityRegisterPolicy(PoolWithTag, (unsigned int)NumberOfBytes);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
