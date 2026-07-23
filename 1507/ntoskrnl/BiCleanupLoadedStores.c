/*
 * XREFs of BiCleanupLoadedStores @ 0x14056DE7C
 * Callers:
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     wcstoul @ 0x1401740E0 (wcstoul.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BcdForciblyUnloadStore @ 0x140569050 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x1405690B8 (BiUnloadHiveByHandle.c)
 *     BiEnumerateSubKeys @ 0x14056DFB8 (BiEnumerateSubKeys.c)
 *     BiOpenKeyNonBcd @ 0x14056E31C (BiOpenKeyNonBcd.c)
 *     BiIsWinPEBoot @ 0x14056F0BC (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14056F55C (BiIsSystemStore.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  char IsWinPEBoot; // r12
  const wchar_t **v3; // rdi
  __int64 v4; // r14
  char IsSystemStore; // al
  HANDLE BcdStoreHandle; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, &P, &BcdStoreHandle) >= 0 && (_DWORD)BcdStoreHandle )
    {
      v3 = (const wchar_t **)P;
      v4 = (unsigned int)BcdStoreHandle;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &BcdStoreHandle) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(BcdStoreHandle);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(BcdStoreHandle);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(BcdStoreHandle, 0);
          }
          else
          {
            BiCloseKey(BcdStoreHandle);
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
