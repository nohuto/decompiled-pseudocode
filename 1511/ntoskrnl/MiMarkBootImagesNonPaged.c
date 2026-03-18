/*
 * XREFs of MiMarkBootImagesNonPaged @ 0x14074AE40
 * Callers:
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkBootImagesNonPaged(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  unsigned __int64 v3; // rbx
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v3 = i[6];
    if ( (*(_BYTE *)(8 * ((v3 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
      || (*(_BYTE *)(((v3 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
      || (*(_BYTE *)(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) != 0x81 )
    {
      v4 = (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v5 = &v4[(unsigned int)(((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12)];
      while ( v4 < v5 )
      {
        v7 = MI_READ_PTE_LOCK_FREE(v4);
        v6 = 3 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v7) >> 12) & 0xFFFFFFFFFLL);
        *(_BYTE *)(16 * v6 - 0x58000000000LL + 35) |= 8u;
        ++v4;
      }
    }
  }
}
