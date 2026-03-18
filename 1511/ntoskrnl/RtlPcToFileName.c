/*
 * XREFs of RtlPcToFileName @ 0x1401FB4AC
 * Callers:
 *     KitLogFeatureUsage @ 0x140215664 (KitLogFeatureUsage.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x140032BA0 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x140035BB8 (MmUnlockLoadedModuleListShared.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall RtlPcToFileName(unsigned __int64 a1, UNICODE_STRING *a2)
{
  PVOID *v4; // r8
  unsigned int v5; // ebx
  PVOID *v6; // rdx
  PVOID v7; // rcx
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  MmLockLoadedModuleListShared(&v9);
  v4 = (PVOID *)PsLoadedModuleList;
  v5 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v4 != &PsLoadedModuleList )
    {
      v6 = v4;
      v4 = (PVOID *)*v4;
      v7 = v6[6];
      if ( a1 >= (unsigned __int64)v7 && a1 < (unsigned __int64)v7 + *((unsigned int *)v6 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v6 + 11));
        goto LABEL_7;
      }
    }
  }
  v5 = -1073741275;
LABEL_7:
  MmUnlockLoadedModuleListShared(v9);
  return v5;
}
