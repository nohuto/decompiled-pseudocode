/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1400C02F0
 * Callers:
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2734 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x1401F2758 (MiMakePrototypePteDirect.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 DemandZeroPte; // rax
  __int64 *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 PrototypePteDirect; // rax
  __int64 *v13; // r11
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  v4 = *(_QWORD *)(a2 + 24);
  v5 = a2;
  if ( v4 )
  {
    ++*(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v4 + 1;
    ++*a4;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte((unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 16)) >> 3, a2, a3, a4);
    *v7 = DemandZeroPte | 8;
    if ( (unsigned int)MiPteInShadowRange(v7, DemandZeroPte | 8) )
      MiWritePteShadow(v9, v8);
    v11 = *(_QWORD *)(v5 + 16) & 0xF800000000000001uLL;
    *(_QWORD *)(v5 + 24) = 1LL;
    *(_QWORD *)(v5 + 16) = v11 | 1;
    ++*(_QWORD *)(v10 + 8);
  }
  PrototypePteDirect = MiMakePrototypePteDirect(v5);
  *v13 = PrototypePteDirect | 8;
  result = MiPteInShadowRange(v13, PrototypePteDirect | 8);
  if ( (_DWORD)result )
    return MiWritePteShadow(v16, v15);
  return result;
}
