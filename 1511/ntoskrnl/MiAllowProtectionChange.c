/*
 * XREFs of MiAllowProtectionChange @ 0x1400F5AE4
 * Callers:
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiArbitraryCodeBlocked @ 0x1400F5BF8 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  volatile LONG *v10; // rsi
  unsigned int v11; // ebx
  KIRQL v12; // bp
  unsigned __int64 i; // rax
  int v14; // eax
  _BYTE v16[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  int v19; // [rsp+A0h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 48) & 0xC0) == 0xC0 && (*(_DWORD *)(a3 + 48) & 0x38) != 0 )
    return 3221225541LL;
  v10 = (volatile LONG *)(a1 + 1280);
  v11 = 0;
  v17 = 0LL;
  v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1280));
  for ( i = a5; i <= a6; i = v18 )
  {
    MiQueryAddressState(i, v12, a3, a1, &v17, &v19, (__int64 *)&v18, v16);
    v14 = v19;
    if ( v19 == -1 )
      v14 = 0;
    v19 = v14;
    if ( (v14 & 2) == 0 || (v14 & 2) != 0 && (a4 & 4) != 0 )
    {
      v11 = MiArbitraryCodeBlocked(a2);
      break;
    }
  }
  ExReleaseSpinLockShared(v10, v12);
  return v11;
}
