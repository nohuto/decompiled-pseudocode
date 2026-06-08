/*
 * XREFs of InitAcpi1ThrottleStates @ 0x1C001B8DC
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C001B74C (InitAcpiThrottleStates.c)
 * Callees:
 *     memset @ 0x1C0006140 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C001C804 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1ThrottleStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbp
  unsigned int v7; // esi
  SIZE_T v8; // r14
  PVOID PoolWithTag; // rax
  unsigned int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // r9
  unsigned int v13; // r8d
  int v14; // eax

  v4 = 0;
  if ( ((unsigned int)dword_1C00093A4 <= 1 || (*(_DWORD *)(a1 + 248) & 0x200000) != 0)
    && (*(_DWORD *)(a1 + 248) & 0x100000) != 0
    && (v6 = a1 + 168, (unsigned __int8)IsValidAcpiGenericAddress(a1 + 168, a2, a3, a4))
    && (unsigned __int8)(byte_1C0009AC6 - 1) <= 3u
    && (unsigned __int8)byte_1C0009AC6 + (unsigned __int8)byte_1C0009AC7 <= 32 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1032), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1036), 4u);
    v7 = 1 << byte_1C0009AC6;
    v8 = (unsigned int)(20 * ((1 << byte_1C0009AC6) - 1) + 24);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72637250u);
    *(_QWORD *)(a1 + 440) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v8);
      v10 = 1;
      **(_DWORD **)(a1 + 440) = v7;
      if ( v7 > 1 )
      {
        v11 = 20LL;
        do
        {
          v12 = *(_QWORD *)(a1 + 440);
          v11 += 20LL;
          v13 = v7 - v10++;
          *(_DWORD *)(v12 + v11 - 16) = 100 * v13 / v7;
          *(_DWORD *)(v12 + v11 - 4) = (v13 << byte_1C0009AC7) | 0x10;
        }
        while ( v10 < v7 );
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 440) + 4LL) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 440) + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 440) + 36LL) & 0xFFFFFFEF;
      v14 = *(_DWORD *)(v6 + 8);
      *(_QWORD *)(a1 + 416) = *(_QWORD *)v6;
      *(_DWORD *)(a1 + 424) = v14;
      *(_QWORD *)(a1 + 428) = 0LL;
      *(_DWORD *)(a1 + 436) = 0;
      *(_DWORD *)(a1 + 448) = 0;
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
  return v4;
}
