/*
 * XREFs of BiGetRegistryValue @ 0x14053DE5C
 * Callers:
 *     BiWasFirmwareModified @ 0x14012E534 (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x140534168 (BiUnloadHiveByHandle.c)
 *     BiMarkTreatAsSystemStore @ 0x14053C01C (BiMarkTreatAsSystemStore.c)
 *     BiIsWinPEBoot @ 0x14053D460 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14053D918 (BiIsSystemStore.c)
 *     BiGetObjectDescription @ 0x14053DD94 (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2C70 (BiIsPortableWorkspaceBoot.c)
 *     BiGetSavedBootEntry @ 0x1406D544C (BiGetSavedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140125318 (BiSanitizeHandle.c)
 *     BiZwQueryValueKey @ 0x14012E5D4 (BiZwQueryValueKey.c)
 *     BiZwClose @ 0x14012E5E8 (BiZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 */

__int64 __fastcall BiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  const WCHAR *v8; // rax
  unsigned int i; // r15d
  _DWORD *PoolWithTag; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  void *v14; // rdi
  NTSTATUS v15; // ebx
  __int64 v16; // r8
  PVOID v17; // rax
  ULONG NumberOfBytes; // [rsp+34h] [rbp-64h] BYREF
  ULONG NumberOfBytes_4; // [rsp+38h] [rbp-60h] BYREF
  void *v21; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v8 = a2;
  for ( i = 0; ; ++i )
  {
    PoolWithTag = 0LL;
    v21 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v8);
    v12 = BiSanitizeHandle(a1);
    a1 = v12;
    if ( a3 )
    {
      v15 = BiOpenKey(v12, a3, 131097LL, &v21);
      v14 = v21;
      if ( v15 < 0 )
        goto LABEL_10;
    }
    else
    {
      v14 = (void *)v12;
    }
    v15 = BiZwQueryValueKey(v14, &DestinationString, v13, 0LL, 0, &NumberOfBytes);
    if ( v15 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_19;
      v15 = BiZwQueryValueKey(v14, &DestinationString, v16, PoolWithTag, NumberOfBytes, &NumberOfBytes_4);
      if ( v15 >= 0 )
      {
        if ( PoolWithTag[1] != a4 )
        {
          v15 = -1073741788;
          goto LABEL_10;
        }
        NumberOfBytes -= 12;
        v17 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
        *a5 = v17;
        if ( !v17 )
        {
LABEL_19:
          v15 = -1073741670;
          goto LABEL_10;
        }
        memmove(v17, PoolWithTag + 3, NumberOfBytes);
        *a6 = NumberOfBytes;
        v15 = 0;
      }
    }
LABEL_10:
    if ( v14 != (void *)a1 && v14 )
      BiZwClose(v14);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    if ( v15 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v8 = a2;
  }
  return (unsigned int)v15;
}
