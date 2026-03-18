/*
 * XREFs of RtlPcToFileName @ 0x1401486E8
 * Callers:
 *     KitLogFeatureUsage @ 0x14022F738 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F2E38 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140014A04 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14001F5A0 (MmLockLoadedModuleListShared.c)
 *     RtlCopyUnicodeString @ 0x14002DD60 (RtlCopyUnicodeString.c)
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
        goto LABEL_8;
      }
    }
  }
  v5 = -1073741275;
LABEL_8:
  MmUnlockLoadedModuleListShared(v9);
  return v5;
}
