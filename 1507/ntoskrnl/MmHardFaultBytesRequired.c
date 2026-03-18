/*
 * XREFs of MmHardFaultBytesRequired @ 0x14049CF40
 * Callers:
 *     CcFetchDataForRead @ 0x140053320 (CcFetchDataForRead.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // r14
  __int64 PteShadow; // rbx
  __int16 v9; // ax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

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
    PteShadow = *v6;
    if ( MiPteInShadowRange((__int64)v6) )
      PteShadow = MiReadPteShadow((__int64)v6, PteShadow);
    if ( (PteShadow & 1) == 0 )
    {
      if ( (PteShadow & 0x400) != 0 )
        break;
      if ( (PteShadow & 0x800) == 0 )
      {
        v9 = MiReverseSwizzleInvalidPte(PteShadow);
        if ( (v9 & 0x400) != 0 || (v9 & 0x800) != 0 || (v9 & 4) != 0 )
          break;
      }
    }
    ++v6;
    if ( !--v3 )
      return 0LL;
  }
  return 1LL;
}
