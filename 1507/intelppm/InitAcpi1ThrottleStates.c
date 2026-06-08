/*
 * XREFs of InitAcpi1ThrottleStates @ 0x1C001339C
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C00132DC (InitAcpiThrottleStates.c)
 * Callees:
 *     memset @ 0x1C00025C0 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C0013424 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1ThrottleStates(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbp
  unsigned int v5; // esi
  SIZE_T v6; // r14
  PVOID PoolWithTag; // rax
  unsigned int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // r9
  unsigned int v11; // r8d
  int v12; // eax

  v1 = 0;
  if ( ((unsigned int)dword_1C000D9C4 <= 1 || (*(_DWORD *)(a1 + 248) & 0x200000) != 0)
    && (*(_DWORD *)(a1 + 248) & 0x100000LL) != 0
    && (v3 = a1 + 168, (unsigned __int8)IsValidAcpiGenericAddress(a1 + 168))
    && (unsigned __int8)(byte_1C000DF66 - 1) <= 3u
    && (unsigned __int8)byte_1C000DF66 + (unsigned __int8)byte_1C000DF67 <= 32 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 4u);
    v5 = 1 << byte_1C000DF66;
    v6 = (unsigned int)(20 * ((1 << byte_1C000DF66) - 1) + 24);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
    *(_QWORD *)(a1 + 448) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      v8 = 1;
      **(_DWORD **)(a1 + 448) = v5;
      if ( v5 > 1 )
      {
        v9 = 20LL;
        do
        {
          v10 = *(_QWORD *)(a1 + 448);
          v9 += 20LL;
          v11 = v5 - v8++;
          *(_DWORD *)(v10 + v9 - 16) = 100 * v11 / v5;
          *(_DWORD *)(v10 + v9 - 4) = (v11 << byte_1C000DF67) | 0x10;
        }
        while ( v8 < v5 );
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 448) + 4LL) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 448) + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 36LL) & 0xFFFFFFEF;
      v12 = *(_DWORD *)(v3 + 8);
      *(_QWORD *)(a1 + 424) = *(_QWORD *)v3;
      *(_DWORD *)(a1 + 432) = v12;
      *(_QWORD *)(a1 + 436) = 0LL;
      *(_DWORD *)(a1 + 444) = 0;
      *(_DWORD *)(a1 + 456) = 0;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
