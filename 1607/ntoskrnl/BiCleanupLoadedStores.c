/*
 * XREFs of BiCleanupLoadedStores @ 0x14053C160
 * Callers:
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x14014D8A0 (_wcsnicmp.c)
 *     wcstoul @ 0x14014F48C (wcstoul.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BcdForciblyUnloadStore @ 0x140533BC0 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x140533C28 (BiUnloadHiveByHandle.c)
 *     BiEnumerateSubKeys @ 0x14053C2A0 (BiEnumerateSubKeys.c)
 *     BiOpenKeyNonBcd @ 0x14053C580 (BiOpenKeyNonBcd.c)
 *     BiIsWinPEBoot @ 0x14053CF20 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14053D3D8 (BiIsSystemStore.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
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
      ExFreePoolWithTag(P, 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
