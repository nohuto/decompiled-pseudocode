/*
 * XREFs of PopProcessorInformation @ 0x140500E84
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmPerfGetCurrentState @ 0x1400F8C78 (PpmPerfGetCurrentState.c)
 *     KeQueryGroupAffinity @ 0x1400F8D14 (KeQueryGroupAffinity.c)
 */

__int64 __fastcall PopProcessorInformation(__int64 a1, __int64 a2, USHORT a3, _DWORD *a4)
{
  KAFFINITY GroupAffinity; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v9; // r15
  unsigned int v10; // ebp
  __int64 Prcb; // r14
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int16 *v16[2]; // [rsp+30h] [rbp-48h] BYREF
  USHORT v17; // [rsp+40h] [rbp-38h]
  ULONG v18; // [rsp+90h] [rbp+18h] BYREF

  GroupAffinity = KeQueryGroupAffinity(a3);
  v8 = 0;
  v9 = (0x101010101010101LL
      * ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (unsigned int)(24 * v9) > 0x600 )
  {
    if ( a4 )
      *a4 = 0;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v9 )
    {
      v10 = 0;
      PopAcquireRwLockShared(&PpmIdlePolicyLock);
      v17 = a3;
      v16[1] = (unsigned __int16 *)GroupAffinity;
      v16[0] = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v16) && v10 < (unsigned int)v9 )
      {
        Prcb = KeGetPrcb(v18);
        *(_DWORD *)(a1 + 24LL * v10) = *(unsigned __int8 *)(Prcb + 1617);
        PpmPerfGetCurrentState(
          Prcb,
          (_DWORD *)(a1 + 8 + 24LL * v10),
          (unsigned int *)(a1 + 12 + 24LL * v10),
          0LL,
          0LL,
          0LL);
        v12 = *(_QWORD *)(Prcb + 24176);
        if ( v12 )
          v13 = *(_DWORD *)(v12 + 300);
        else
          v13 = *(_DWORD *)(Prcb + 1524);
        *(_DWORD *)(a1 + 24LL * v10 + 4) = v13;
        v14 = *(_QWORD *)(Prcb + 23808);
        if ( v14 )
        {
          *(_DWORD *)(a1 + 24LL * v10 + 16) = *(_DWORD *)(v14 + 28);
          *(_DWORD *)(a1 + 24LL * v10 + 20) = *(_DWORD *)(v14 + 12) + 1;
        }
        else
        {
          *(_QWORD *)(a1 + 24LL * v10 + 16) = 0LL;
        }
        ++v10;
      }
      PopReleaseRwLock(&PpmIdlePolicyLock);
    }
    *a4 = 24 * v9;
  }
  return v8;
}
