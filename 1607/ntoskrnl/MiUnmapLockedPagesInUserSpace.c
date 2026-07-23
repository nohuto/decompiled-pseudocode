/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x14010EE28
 * Callers:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSecuredVad @ 0x14040B2AC (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x14042DDC0 (MiUnmapVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // rdx
  int v8; // r14d
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (((a2[8] + a2[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = MiObtainReferencedVad(a1, &v13);
  v6 = (char *)v5;
  if ( v5 )
  {
    v7 = *(unsigned int *)(v5 + 24);
    v8 = *(_DWORD *)(v5 + 48);
    if ( (v8 & 7) == 1
      && (a1 & 0xFFFFFFFFFFFFF000uLL) == (v7 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12
      && v2 == (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
             - (v7 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
             + 1 )
    {
      while ( 1 )
      {
        v13 = MI_READ_PTE_LOCK_FREE(v4);
        v9 = MI_READ_PTE_LOCK_FREE(&v13);
        if ( *(_QWORD *)(v12 + v4) != ((v9 >> 12) & 0xFFFFFFFFFLL) )
          break;
        v4 += 8LL;
        if ( !--v2 )
        {
          if ( (v8 & 0x4000) == 0 || (int)MiCheckSecuredVad(v6, v11, (v10 + 1) << 12, 85LL) >= 0 )
          {
            MiUnmapVad(v6, 0LL);
            return;
          }
          break;
        }
      }
    }
    MiUnlockAndDereferenceVad(v6);
  }
}
