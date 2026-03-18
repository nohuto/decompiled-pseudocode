/*
 * XREFs of _RegRtlEnumValue @ 0x14058B9D0
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x140588CBC (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x14017F250 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  ULONG v14; // ecx
  ULONG Length; // ebx
  unsigned int v16; // edi
  _DWORD *PoolWithTag; // rsi
  NTSTATUS v19; // eax
  size_t v20; // r8
  __int64 v21; // rbx
  unsigned int v22; // ebx
  unsigned int v23; // eax
  size_t v24; // r8
  unsigned int v25; // ebx

  v8 = ResultLength;
  v9 = 2LL * *a4;
  if ( !ResultLength )
  {
    v13 = KeyValueBasicInformation;
    if ( v9 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    Length = v9 + 16;
    if ( (int)v9 + 16 < (unsigned int)v9 )
      return (unsigned int)-1073741675;
LABEL_9:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v19 = ZwEnumerateValueKey(KeyHandle, Index, v13, PoolWithTag, Length, (PULONG)&ResultLength);
    v16 = v19;
    if ( !v19 || v19 == -2147483643 )
    {
      if ( v13 )
      {
        if ( a5 )
          *a5 = PoolWithTag[1];
        if ( !v19 )
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
              goto LABEL_28;
            }
          }
        }
        *a4 = (PoolWithTag[4] >> 1) + 1;
        *v8 = PoolWithTag[3];
      }
      else
      {
        if ( a5 )
          *a5 = PoolWithTag[1];
        if ( !v19 )
        {
          v20 = (unsigned int)PoolWithTag[2];
          if ( *a4 >= (v20 >> 1) + 1 )
          {
            v21 = (unsigned int)v20 >> 1;
            *a4 = v21;
            memmove(a3, PoolWithTag + 3, v20);
            *((_WORD *)a3 + v21) = 0;
            goto LABEL_28;
          }
        }
        *a4 = (PoolWithTag[2] >> 1) + 1;
      }
      v16 = -1073741789;
    }
LABEL_28:
    ExFreePoolWithTag(PoolWithTag, 0);
    return v16;
  }
  v13 = KeyValueFullInformation;
  if ( v9 <= 0xFFFFFFFF )
  {
    v14 = v9 + 24;
    if ( (int)v9 + 24 >= (unsigned int)v9 )
    {
      Length = v14 + *ResultLength;
      if ( Length >= v14 )
        goto LABEL_9;
    }
  }
  return (unsigned int)-1073741675;
}
