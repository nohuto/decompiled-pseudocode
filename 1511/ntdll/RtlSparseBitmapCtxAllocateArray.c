/*
 * XREFs of RtlSparseBitmapCtxAllocateArray @ 0x18005ADDC
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180040074 (RtlpSparseBitmapCtxCheckRangeArray.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlSparseBitmapCtxAllocateArray(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // r15
  size_t v4; // rsi
  bool v5; // zf
  int v6; // esi
  size_t v7; // r14
  size_t v8; // rsi
  void *v9; // rax
  void *v10; // r14
  void *v12; // rax
  void *v13; // [rsp+60h] [rbp+30h] BYREF
  size_t Size; // [rsp+68h] [rbp+38h] BYREF

  v1 = *(unsigned int *)(a1 + 52);
  v2 = 0LL;
  v13 = 0LL;
  v4 = 8 * v1;
  v5 = (*(_BYTE *)(a1 + 72) & 2) == 0;
  Size = v4;
  if ( v5 )
  {
    v12 = (void *)(*(__int64 (__fastcall **)(size_t))(a1 + 32))(v4);
    v13 = v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    memset(v12, 0, Size);
    goto LABEL_5;
  }
  v6 = ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &Size, 0x2000, 4);
  if ( v6 >= 0 )
  {
    v7 = Size >> 12;
    v8 = 4 * (((Size >> 12) + 31) >> 5);
    v9 = (void *)(*(__int64 (__fastcall **)(size_t))(a1 + 32))(v8);
    v2 = v9;
    if ( v9 )
    {
      memset(v9, 0, v8);
      *(_DWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 24) = v2;
LABEL_5:
      v10 = 0LL;
      *(_QWORD *)(a1 + 8) = v13;
      v6 = 0;
      v13 = 0LL;
      goto LABEL_6;
    }
    v6 = -1073741670;
  }
  v10 = v13;
LABEL_6:
  if ( v10 )
  {
    if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
    {
      Size = 0LL;
      ZwFreeVirtualMemory(-1LL, &v13, &Size, 0x8000LL);
      if ( v2 )
        (*(void (__fastcall **)(void *))(a1 + 40))(v2);
    }
    else
    {
      (*(void (__fastcall **)(void *))(a1 + 40))(v10);
    }
  }
  return (unsigned int)v6;
}
