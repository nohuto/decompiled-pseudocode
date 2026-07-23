/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x1407A5FDC
 * Callers:
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  unsigned __int64 v3; // rbx
  PVOID v4; // r10
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v3 = (((unsigned __int64)i[6] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(i[6]) )
    {
      v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
      if ( v4 != PsNtosImageBase && v4 != PsHalImageBase )
      {
        _InterlockedExchangeAdd(&dword_140327960, v5);
        qword_140327920 -= (unsigned int)v5;
      }
      v6 = v3 + 8LL * (unsigned int)v5;
      while ( v3 < v6 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v3);
        v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL)
           - 0x58000000000LL;
        if ( v8 >= 0 )
        {
          v9 = 6;
          v10 = ((unsigned int)MiFlags >> 14) & 1;
          if ( v10 )
            v9 = 3;
          *(_QWORD *)(v7 + 16) ^= (*(_DWORD *)(v7 + 16) ^ (32 * v9)) & 0x3E0;
          if ( v10 )
            MiMarkPfnVerified(v7, 0);
        }
        v3 += 8LL;
      }
    }
  }
  MiFlags |= 0x1000u;
}
