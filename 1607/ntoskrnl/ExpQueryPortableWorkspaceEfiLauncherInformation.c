/*
 * XREFs of ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406AC090
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ZwEnumerateBootEntries @ 0x14015BC30 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x14015C7B0 (ZwQueryBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryPortableWorkspaceEfiLauncherInformation(bool *a1, int a2, _DWORD *a3)
{
  unsigned int *v5; // rsi
  ULONG *v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  bool v9; // al
  unsigned int *PoolWithQuotaTag; // rax
  NTSTATUS v11; // eax
  ULONG *v12; // rax
  unsigned int *v13; // rdx
  unsigned int *i; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG Count; // [rsp+28h] [rbp-40h] BYREF
  unsigned int *v19; // [rsp+30h] [rbp-38h]
  ULONG *v20; // [rsp+38h] [rbp-30h]
  ULONG BufferLength; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  if ( dword_1402FD030 != 2 )
  {
    v7 = -1073741821;
    goto LABEL_26;
  }
  if ( a2 != 1 )
  {
    *a3 = 1;
    v7 = -1073741820;
    goto LABEL_26;
  }
  BufferLength = 0;
  v8 = ZwEnumerateBootEntries(0LL, &BufferLength);
  v7 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741789 )
      goto LABEL_26;
    PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, BufferLength, 0x6F666E49u);
    v5 = PoolWithQuotaTag;
    v19 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      goto LABEL_9;
    v7 = ZwEnumerateBootEntries(PoolWithQuotaTag, &BufferLength);
    if ( v7 < 0 )
      goto LABEL_26;
    Count = 0;
    v11 = ZwQueryBootEntryOrder(0LL, &Count);
    v7 = v11;
    if ( v11 >= 0 )
      goto LABEL_6;
    if ( v11 != -1073741789 )
      goto LABEL_26;
    v12 = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 4LL * Count, 0x6F666E49u);
    v6 = v12;
    v20 = v12;
    if ( !v12 )
    {
LABEL_9:
      v7 = -1073741670;
      goto LABEL_26;
    }
    v7 = ZwQueryBootEntryOrder(v12, &Count);
    if ( v7 < 0 )
      goto LABEL_26;
    v13 = 0LL;
    for ( i = v5; ; i = (unsigned int *)((char *)i + v16) )
    {
      if ( i[7] == 16 )
      {
        v15 = *((_QWORD *)i + 4) - PORTABLE_WORKSPACE_LAUNCHER_EFI_ENTRY_ID;
        if ( !v15 )
          v15 = *((_QWORD *)i + 5) - 0x1536958043F38A81LL;
        if ( !v15 )
          break;
      }
      v16 = *i;
      if ( !(_DWORD)v16 )
        goto LABEL_22;
    }
    v13 = i + 1;
LABEL_22:
    if ( v13 )
    {
      v9 = v13[2] == *v6;
      goto LABEL_24;
    }
  }
LABEL_6:
  v9 = 0;
LABEL_24:
  *a1 = v9;
  *a3 = 1;
  v7 = 0;
LABEL_26:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6F666E49u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6F666E49u);
  return (unsigned int)v7;
}
