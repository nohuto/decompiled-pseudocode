/*
 * XREFs of DwmpNotifyUserLogoff @ 0x180003080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_1800043B4 @ 0x1800043B4 (sub_1800043B4.c)
 */

__int64 DwmpNotifyUserLogoff()
{
  unsigned int v0; // ebx
  __int64 v1; // r9
  int v2; // eax

  v0 = 0;
  AcquireSRWLockShared(&SRWLock);
  if ( hTargetProcessHandle )
  {
    v2 = sub_1800043B4();
    v0 = v2;
    if ( v2 < 0 )
      sub_180003A80((unsigned int)v2, 1522LL);
  }
  sub_18000149C(8, v0, 0, v1);
  ReleaseSRWLockShared(&SRWLock);
  return v0;
}
