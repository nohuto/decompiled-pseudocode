/*
 * XREFs of BiGetRegistryValue @ 0x14056F9C4
 * Callers:
 *     BiUnloadHiveByHandle @ 0x1405690B8 (BiUnloadHiveByHandle.c)
 *     BiMarkTreatAsSystemStore @ 0x14056D744 (BiMarkTreatAsSystemStore.c)
 *     BiGetObjectDescription @ 0x14056D7EC (BiGetObjectDescription.c)
 *     BiIsWinPEBoot @ 0x14056F0BC (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14056F55C (BiIsSystemStore.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     BiIsPortableWorkspaceBoot @ 0x14070DE6C (BiIsPortableWorkspaceBoot.c)
 *     BiGetSavedBootEntry @ 0x140710668 (BiGetSavedBootEntry.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     BiZwQueryValueKey @ 0x14014FE38 (BiZwQueryValueKey.c)
 *     BiZwClose @ 0x14014FE44 (BiZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 */

__int64 __fastcall BiGetRegistryValue(HANDLE a1, const WCHAR *a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  const WCHAR *v8; // rax
  unsigned int i; // r15d
  _DWORD *PoolWithTag; // rsi
  __int64 v12; // r8
  NTSTATUS v13; // ebx
  HANDLE v14; // rdi
  __int64 v15; // r8
  PVOID v16; // rax
  ULONG NumberOfBytes; // [rsp+34h] [rbp-64h] BYREF
  ULONG NumberOfBytes_4; // [rsp+38h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v8 = a2;
  for ( i = 0; ; ++i )
  {
    PoolWithTag = 0LL;
    Handle = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v8);
    if ( a3 )
    {
      v13 = BiOpenKey(a1, a3, 131097LL, &Handle);
      v14 = Handle;
      if ( v13 < 0 )
        goto LABEL_10;
    }
    else
    {
      v14 = a1;
    }
    v13 = BiZwQueryValueKey(v14, &DestinationString, v12, 0LL, 0, &NumberOfBytes);
    if ( v13 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_18;
      v13 = BiZwQueryValueKey(v14, &DestinationString, v15, PoolWithTag, NumberOfBytes, &NumberOfBytes_4);
      if ( v13 >= 0 )
      {
        if ( PoolWithTag[1] != a4 )
        {
          v13 = -1073741788;
          goto LABEL_10;
        }
        NumberOfBytes -= 12;
        v16 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
        *a5 = v16;
        if ( !v16 )
        {
LABEL_18:
          v13 = -1073741670;
          goto LABEL_10;
        }
        memmove(v16, PoolWithTag + 3, NumberOfBytes);
        *a6 = NumberOfBytes;
        v13 = 0;
      }
    }
LABEL_10:
    if ( v14 != a1 && v14 )
      BiZwClose(v14);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v13 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v8 = a2;
  }
  return (unsigned int)v13;
}
