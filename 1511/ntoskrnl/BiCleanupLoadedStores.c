/*
 * XREFs of BiCleanupLoadedStores @ 0x1404FB8E4
 * Callers:
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     wcstoul @ 0x1401460B0 (wcstoul.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdForciblyUnloadStore @ 0x1404F4C48 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x1404F4CB0 (BiUnloadHiveByHandle.c)
 *     BiEnumerateSubKeys @ 0x1404FBA20 (BiEnumerateSubKeys.c)
 *     BiOpenKeyNonBcd @ 0x1404FBCF4 (BiOpenKeyNonBcd.c)
 *     BiIsWinPEBoot @ 0x1404FC61C (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1404FCABC (BiIsSystemStore.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  char IsWinPEBoot; // r12
  const wchar_t **v3; // rdi
  __int64 v4; // r14
  char IsSystemStore; // al
  HANDLE v6; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, &P, &v6) >= 0 && (_DWORD)v6 )
    {
      v3 = (const wchar_t **)P;
      v4 = (unsigned int)v6;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &v6) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(v6);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(v6);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(v6, 0);
          }
          else
          {
            BiCloseKey(v6);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  if ( Handle )
    ZwClose(Handle);
}
