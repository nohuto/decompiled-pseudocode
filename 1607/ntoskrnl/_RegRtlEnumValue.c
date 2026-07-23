/*
 * XREFs of _RegRtlEnumValue @ 0x1404C26F0
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x1404B90C0 (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        HANDLE KeyHandle,
        ULONG Index,
        void *a3,
        unsigned int *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *ResultLength)
{
  unsigned int *v8; // r15
  unsigned __int64 v9; // rax
  KEY_VALUE_INFORMATION_CLASS v13; // ebp
  ULONG Length; // ebx
  _DWORD *PoolWithTag; // rsi
  NTSTATUS v16; // eax
  unsigned int v17; // edi
  size_t v18; // r8
  __int64 v19; // rbx
  ULONG v21; // ecx
  unsigned int v22; // ebx
  unsigned int v23; // eax
  size_t v24; // r8
  unsigned int v25; // ebx

  v8 = ResultLength;
  v9 = 2LL * *a4;
  if ( !ResultLength )
  {
    v13 = KeyValueBasicInformation;
    if ( v9 <= 0xFFFFFFFF )
    {
      Length = v9 + 16;
      if ( (int)v9 + 16 >= (unsigned int)v9 )
        goto LABEL_4;
    }
    return (unsigned int)-1073741675;
  }
  v13 = KeyValueFullInformation;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v21 = v9 + 24;
  if ( (int)v9 + 24 < (unsigned int)v9 )
    return (unsigned int)-1073741675;
  Length = v21 + *ResultLength;
  if ( Length < v21 )
    return (unsigned int)-1073741675;
LABEL_4:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  v16 = ZwEnumerateValueKey(KeyHandle, Index, v13, PoolWithTag, Length, (PULONG)&ResultLength);
  v17 = v16;
  if ( v16 && v16 != -2147483643 )
    goto LABEL_12;
  if ( v13 )
  {
    if ( a5 )
      *a5 = PoolWithTag[1];
    if ( !v16 )
    {
      v22 = PoolWithTag[4];
      if ( *a4 >= ((unsigned __int64)v22 >> 1) + 1 )
      {
        v23 = PoolWithTag[3];
        if ( *v8 >= v23 )
        {
          *v8 = v23;
          v24 = (unsigned int)PoolWithTag[4];
          v25 = v22 >> 1;
          *a4 = v25;
          memmove(a3, PoolWithTag + 5, v24);
          *((_WORD *)a3 + v25) = 0;
          memmove(a6, (char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3]);
          goto LABEL_12;
        }
      }
    }
    *a4 = (PoolWithTag[4] >> 1) + 1;
    *v8 = PoolWithTag[3];
LABEL_30:
    v17 = -1073741789;
    goto LABEL_12;
  }
  if ( a5 )
    *a5 = PoolWithTag[1];
  if ( v16 || (v18 = (unsigned int)PoolWithTag[2], *a4 < (v18 >> 1) + 1) )
  {
    *a4 = (PoolWithTag[2] >> 1) + 1;
    goto LABEL_30;
  }
  v19 = (unsigned int)v18 >> 1;
  *a4 = v19;
  memmove(a3, PoolWithTag + 3, v18);
  *((_WORD *)a3 + v19) = 0;
LABEL_12:
  ExFreePoolWithTag(PoolWithTag, 0);
  return v17;
}
