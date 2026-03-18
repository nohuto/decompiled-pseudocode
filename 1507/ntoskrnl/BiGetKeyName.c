/*
 * XREFs of BiGetKeyName @ 0x1405693EC
 * Callers:
 *     BiGetObjectIdentifier @ 0x1405693A0 (BiGetObjectIdentifier.c)
 *     BiBindEfiEntryToBcdObject @ 0x14070EC6C (BiBindEfiEntryToBcdObject.c)
 *     BiCreateBootEntry @ 0x14070F33C (BiCreateBootEntry.c)
 * Callees:
 *     BiZwQueryKey @ 0x14014FE30 (BiZwQueryKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetKeyName(HANDLE KeyHandle, _QWORD *a2)
{
  unsigned int i; // r14d
  unsigned int *PoolWithTag; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _WORD *v8; // rax
  _WORD *v9; // r12
  ULONG Length; // [rsp+88h] [rbp+20h] BYREF

  for ( i = 0; ; ++i )
  {
    PoolWithTag = 0LL;
    Length = 0;
    v6 = BiZwQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
    v7 = v6;
    if ( v6 == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Length, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_13;
      v7 = BiZwQueryKey(KeyHandle, KeyBasicInformation, PoolWithTag, Length, &Length);
      if ( v7 < 0 )
        goto LABEL_7;
      v8 = ExAllocatePoolWithTag(PagedPool, PoolWithTag[3] + 2LL, 0x4B444342u);
      v9 = v8;
      if ( v8 )
      {
        memmove(v8, PoolWithTag + 4, PoolWithTag[3]);
        v9[(unsigned __int64)PoolWithTag[3] >> 1] = 0;
        *a2 = v9;
      }
      else
      {
LABEL_13:
        v7 = -1073741670;
      }
    }
    else if ( v6 >= 0 )
    {
      v7 = -1073741811;
    }
LABEL_7:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v7 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v7;
}
