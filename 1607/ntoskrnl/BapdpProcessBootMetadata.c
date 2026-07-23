/*
 * XREFs of BapdpProcessBootMetadata @ 0x1407A9C58
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1407A92C0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     KsrInitPageDatabase_0 @ 0x1400012C8 (KsrInitPageDatabase_0.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x1407A9868 (BapdpQueryData.c)
 */

void __fastcall BapdpProcessBootMetadata(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *PoolWithTag; // rdi
  unsigned int v3; // [rsp+30h] [rbp-20h] BYREF
  __int64 v4; // [rsp+38h] [rbp-18h] BYREF
  int v5; // [rsp+40h] [rbp-10h]
  int v6; // [rsp+44h] [rbp-Ch]

  ExSoftRebootFlags = 0;
  ExBootLoaderMetadata = 0LL;
  v4 = 0x479C9BC55B043C6CLL;
  v5 = 1736995215;
  v6 = 1054971003;
  if ( (qword_1402FD038 & 4) != 0 )
  {
    v3 = 0;
    ExSoftRebootFlags = 2;
    if ( (unsigned int)BapdpQueryData(a1, &v4, 0, 0LL, &v3) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 + 4LL, 0x64506142u);
      if ( PoolWithTag )
      {
        BapdpQueryData(v1, &v4, 0, PoolWithTag + 1, &v3);
        *PoolWithTag = v3;
        ExBootLoaderMetadata = (__int64)PoolWithTag;
        if ( (int)KsrInitPageDatabase_0() >= 0 )
          ExSoftRebootFlags |= 4u;
      }
    }
  }
}
