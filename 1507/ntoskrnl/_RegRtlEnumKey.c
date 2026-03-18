/*
 * XREFs of _RegRtlEnumKey @ 0x1405A8C6C
 * Callers:
 *     _PnpCtxRegEnumKey @ 0x14058BF10 (_PnpCtxRegEnumKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405A8114 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405A8A4C (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKey(HANDLE KeyHandle, ULONG a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v7; // rbp
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  ULONG Length; // r15d
  unsigned int *v12; // rsi
  NTSTATUS v13; // eax
  unsigned int *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int *PoolWithTag; // rax
  NTSTATUS v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-B8h] BYREF
  ULONG Index; // [rsp+34h] [rbp-B4h]
  char v23; // [rsp+38h] [rbp-B0h] BYREF

  Index = a2;
  v7 = 0LL;
  if ( a3 )
  {
    v8 = 2LL * *a4;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  else
  {
    LODWORD(v8) = 0;
  }
  Length = 96;
  if ( (unsigned int)v8 <= 0x60 )
  {
    v12 = (unsigned int *)&v23;
  }
  else
  {
    v12 = a3;
    Length = v8;
  }
  v13 = ZwEnumerateKey(KeyHandle, a2, KeyBasicInformation, v12, Length, &ResultLength);
  v9 = v13;
  if ( !v13 || v13 == -2147483643 )
  {
    v14 = v12 + 3;
    v15 = v12[3];
    v16 = v15 + 2;
    if ( v15 + 2 < v15 )
      return (unsigned int)-1073741675;
    v9 = 0;
    *a4 = v16 >> 1;
    if ( v16 > (unsigned int)v8 )
      return (unsigned int)-1073741789;
    if ( ResultLength > Length )
    {
      if ( (unsigned int)v8 >= 0xFFFFFFF0 )
        return (unsigned int)-1073741675;
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v8 + 16), 0x4C474552u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v12 = PoolWithTag;
      v18 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, PoolWithTag, v8 + 16, &ResultLength);
      v9 = v18;
      if ( v18 && v18 != -2147483643 )
        goto LABEL_25;
      v14 = v7 + 3;
      v19 = v7[3];
      v20 = v19 + 2;
      if ( v19 + 2 < v19 )
      {
        v9 = -1073741675;
        goto LABEL_25;
      }
      v9 = 0;
      *a4 = v20 >> 1;
      if ( v20 > (unsigned int)v8 )
      {
        v9 = -1073741789;
        goto LABEL_25;
      }
    }
    memmove(a3, v12 + 4, *v14);
    *((_WORD *)a3 + *a4 - 1) = 0;
LABEL_25:
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  return v9;
}
