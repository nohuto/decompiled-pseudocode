/*
 * XREFs of MmHardFaultBytesRequired @ 0x14047A7F0
 * Callers:
 *     CcFetchDataForRead @ 0x1400A3590 (CcFetchDataForRead.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = ((a2 & 0xFFF) + a3 + 4095) >> 12;
  v4 = MiOffsetToProtos(**(_DWORD ***)(a1 + 40), a2, &v11);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = (__int64 *)(v5 + 8 * v11);
  v7 = (__int64 *)(v5 + 8LL * *(unsigned int *)(v4 + 44));
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    if ( v6 >= v7 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      v6 = *(__int64 **)(v4 + 8);
      v7 = &v6[*(unsigned int *)(v4 + 44)];
    }
    v8 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 0x400) != 0 )
        break;
      if ( (v8 & 0x800) == 0 )
      {
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v8) )
          break;
      }
    }
    ++v6;
    if ( !--v3 )
      return 0LL;
  }
  return 1LL;
}
