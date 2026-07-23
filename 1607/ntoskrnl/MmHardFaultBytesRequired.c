/*
 * XREFs of MmHardFaultBytesRequired @ 0x140446420
 * Callers:
 *     CcFetchDataForRead @ 0x140032AD0 (CcFetchDataForRead.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = ((a2 & 0xFFF) + a3 + 4095) >> 12;
  v4 = MiOffsetToProtos(**(_DWORD ***)(a1 + 40), a2, &v14);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = v5 + 8 * v14;
  v7 = v5 + 8LL * *(unsigned int *)(v4 + 44);
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    if ( v6 >= v7 )
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8LL);
    v8 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 0x400) != 0 )
        break;
      if ( (v8 & 0x800) == 0 )
      {
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v8, v9, v10, v11) )
          break;
      }
    }
    v6 = v11 + 8;
    if ( !--v3 )
      return 0LL;
  }
  return 1LL;
}
