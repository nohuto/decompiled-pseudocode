/*
 * XREFs of RtlpStackDbEntryCreate @ 0x180102054
 * Callers:
 *     RtlStackDbStackAdd @ 0x180101814 (RtlStackDbStackAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpStackDbEntryCleanup @ 0x180101FE0 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801022B4 (RtlpStackDbSegmentFindOrCreate.c)
 */

__int64 __fastcall RtlpStackDbEntryCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // edi
  __int64 v12; // rbp
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]

  v4 = (unsigned int)(*(_DWORD *)a2 + 7) >> 3;
  v6 = (void *)((__int64 (__fastcall *)(_QWORD, __int64))qword_1801506D0)(8 * v4 + 24, qword_1801506E0);
  v7 = (__int64)v6;
  if ( !v6 )
    return 0LL;
  memset(v6, 0, 8 * v4 + 24);
  *(_DWORD *)(v7 + 16) &= 0xFF000001;
  v10 = 0;
  *(_DWORD *)(v7 + 16) |= 1u;
  *(_QWORD *)(v7 + 8) = a3;
  *(_BYTE *)(v7 + 19) = *(_BYTE *)a2;
  v11 = *(_DWORD *)a2;
  if ( v4 )
  {
    v12 = 0LL;
    v13 = (__int64 *)(v7 + 24);
    while ( 1 )
    {
      v14 = *(_QWORD *)(a2 + 8) + 8 * v12;
      v18 = v14;
      if ( v11 <= 8 )
      {
        v17 = v11;
      }
      else
      {
        v17 = 8;
        v11 -= 8;
      }
      v15 = RtlpStackDbSegmentFindOrCreate(v14, &v17);
      if ( !v15 )
        break;
      *v13 = v15;
      ++v10;
      ++v13;
      v12 = (unsigned int)(v12 + 8);
      if ( v10 >= v4 )
        goto LABEL_10;
    }
    v8 = 0LL;
  }
  else
  {
LABEL_10:
    v8 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    RtlpStackDbEntryCleanup(v9, v7);
  return v8;
}
