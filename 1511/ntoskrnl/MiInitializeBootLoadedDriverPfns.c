/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x14074B6E4
 * Callers:
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  v2 = *(__int64 **)(a1 + 16);
  if ( v2 != (__int64 *)(a1 + 16) )
  {
    do
    {
      v3 = v2[6];
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( *(char *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >= 0 )
      {
        v5 = ((unsigned __int64)*((unsigned int *)v2 + 16) + 4095) >> 12;
        if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase )
        {
          _InterlockedExchangeAdd(&dword_1402FF858, v5);
          qword_1402FF818 -= (unsigned int)v5;
        }
        v6 = (__int64 *)(v4 + 8LL * (unsigned int)v5);
        while ( v4 < (unsigned __int64)v6 )
        {
          v10 = MI_READ_PTE_LOCK_FREE((__int64 *)v4);
          v7 = v10;
          v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( v7 >= 0 )
          {
            v9 = 6;
            if ( (MiFlags & 0x10000) != 0 )
              v9 = 3;
            *(_QWORD *)(v8 + 16) ^= (*(_DWORD *)(v8 + 16) ^ (32 * v9)) & 0x3E0;
            if ( (MiFlags & 0x10000) != 0 )
              MiMarkPfnVerified(v8, 0);
          }
          v4 += 8LL;
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 != v1 );
  }
  MiFlags |= 0x1000u;
}
