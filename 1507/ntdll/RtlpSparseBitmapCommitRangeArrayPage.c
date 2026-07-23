/*
 * XREFs of RtlpSparseBitmapCommitRangeArrayPage @ 0x180058C6C
 * Callers:
 *     RtlSparseBitmapCtxAllocateRange @ 0x180057BB4 (RtlSparseBitmapCtxAllocateRange.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpSparseBitmapCommitRangeArrayPage(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  NTSTATUS v4; // edi
  unsigned int v5; // ecx
  __int64 v6; // r11
  volatile signed __int32 *v7; // r9
  int v9; // ebx
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2 >> 9;
  v11 = 4096LL;
  v12 = (PVOID)(*(_QWORD *)(a1 + 8) + (a2 >> 9 << 12));
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v12, 0LL, &v11, 0x1000u, 4u);
  if ( v4 >= 0 )
  {
    LOBYTE(v5) = 1;
    v6 = v3 & 0x1F;
    v7 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4 * ((unsigned __int64)v3 >> 5));
    if ( (unsigned __int64)(v6 + 1) > 0x20 )
    {
      v9 = v3 & 0x1F;
      if ( !v9 )
        goto LABEL_10;
      _InterlockedOr(v7++, ((1 << (32 - v9)) - 1) << v6);
      v5 = 1 - (32 - v9);
      if ( v5 >= 0x20 )
      {
        v10 = (unsigned __int64)v5 >> 5;
        do
        {
          *v7 = -1;
          v5 -= 32;
          ++v7;
          --v10;
        }
        while ( v10 );
      }
      if ( v5 )
LABEL_10:
        _InterlockedOr(v7, (1 << v5) - 1);
    }
    else
    {
      _InterlockedOr(v7, 1 << v6);
    }
  }
  return (unsigned int)v4;
}
