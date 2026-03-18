/*
 * XREFs of BapdpProcessSecureBootPolicy @ 0x140768BCC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140768658 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140768D64 (BapdpQueryData.c)
 *     SeSecureBootRegisterPolicy @ 0x140768E30 (SeSecureBootRegisterPolicy.c)
 */

void __fastcall BapdpProcessSecureBootPolicy(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  int v2; // eax
  __int64 v3; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v5[0] = 1870866835;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5[1] = 1073762693;
  v5[2] = 1175871128;
  v5[3] = 2025484029;
  v2 = BapdpQueryData(a1, v5, 0LL, 0LL, &NumberOfBytes);
  if ( v2 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
    v2 = 0;
  }
  if ( v2 >= 0 && (int)BapdpQueryData(v3, v5, 0LL, PoolWithTag, &NumberOfBytes) >= 0 )
    SeSecureBootRegisterPolicy((ULONG_PTR)PoolWithTag, (unsigned int)NumberOfBytes);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
