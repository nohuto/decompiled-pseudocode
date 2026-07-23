/*
 * XREFs of PipCreateComputerId @ 0x14079A240
 * Callers:
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     RtlGenerateClass5Guid @ 0x1405506EC (RtlGenerateClass5Guid.c)
 */

__int64 __fastcall PipCreateComputerId(HANDLE KeyHandle, unsigned __int16 **a2, unsigned int a3, int *a4)
{
  unsigned int v4; // ebp
  unsigned __int16 **v8; // r14
  unsigned __int16 v9; // bx
  unsigned int v10; // ecx
  unsigned __int16 **v11; // r8
  unsigned __int16 *v12; // rax
  unsigned __int16 v13; // bx
  UCHAR *PoolWithTag; // rax
  UCHAR *Data; // rdi
  UCHAR *v16; // rsi
  unsigned __int16 v17; // ax
  ULONG DataSize; // esi
  int Class5Guid; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-A8h] BYREF
  WCHAR SourceString[40]; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v11 = a2;
  do
  {
    if ( v10 )
      v9 += 2;
    v12 = *v11;
    ++v10;
    ++v11;
    v9 += *v12;
  }
  while ( v10 < a3 );
  if ( v9 > 2u )
  {
    v13 = v9 + 2;
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(PagedPool, v13, 0x6E697050u);
    Data = PoolWithTag;
    if ( PoolWithTag )
    {
      v16 = PoolWithTag;
      do
      {
        if ( v4 )
        {
          *(_WORD *)v16 = 38;
          v16 += 2;
        }
        v17 = **v8;
        if ( v17 )
        {
          memmove(v16, *((const void **)*v8 + 1), v17);
          v16 += 2 * ((unsigned __int64)**v8 >> 1);
        }
        ++v4;
        ++v8;
      }
      while ( v4 < a3 );
      *(_WORD *)v16 = 0;
      DataSize = v13;
      Class5Guid = RtlGenerateClass5Guid((__int64)&PnpComputerIdNamespaceGuid, Data, (unsigned int)v13 - 2, (__int64)a4);
      if ( Class5Guid >= 0 )
      {
        Class5Guid = PnpStringFromGuid(a4, SourceString);
        if ( Class5Guid >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          Class5Guid = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, Data, DataSize);
        }
      }
      ExFreePoolWithTag(Data, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Class5Guid;
}
