/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1400039D0
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    ++*(_QWORD *)(a2 + 16);
    ++*a4;
    *(_QWORD *)(a2 + 24) = v4 + 1;
  }
  else
  {
    v8 = MiMakeDemandZeroPte((unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 16)) >> 3) | 8;
    *v9 = v8;
    if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(a2, v8);
    v10 = *(_QWORD *)(a2 + 16) & 0xF800000000000001uLL;
    *(_QWORD *)(a2 + 24) = 1LL;
    ++a4[1];
    *(_QWORD *)(a2 + 16) = v10 | 1;
  }
  result = MiMakePrototypePteDirect(a2) | 8;
  *a3 = result;
  if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
    return MiWritePteShadow(a3, result);
  return result;
}
