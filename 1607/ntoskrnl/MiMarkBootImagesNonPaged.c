/*
 * XREFs of MiMarkBootImagesNonPaged @ 0x1407A5740
 * Callers:
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkBootImagesNonPaged(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // r10
  __int64 *v3; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 16;
  for ( i = *(_QWORD *)(a1 + 16); i != v1; i = *v3 )
  {
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(i + 48)) )
    {
      v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v6 = v5 + 8LL * (unsigned int)(((unsigned __int64)*((unsigned int *)v3 + 16) + 4095) >> 12);
      while ( v5 < v6 )
      {
        v9 = MI_READ_PTE_LOCK_FREE(v5);
        v7 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFLL);
        *(_BYTE *)(8 * v7 - 0x58000000000LL + 35) |= 8u;
        v5 = v8 + 8;
      }
    }
  }
}
