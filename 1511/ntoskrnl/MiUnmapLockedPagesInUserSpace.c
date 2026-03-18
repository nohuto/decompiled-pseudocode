/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x1401072A0
 * Callers:
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiCheckSecuredVad @ 0x14047BB18 (MiCheckSecuredVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // r15
  __int64 v5; // rsi
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // r12d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rbp
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v3 = (((a2[8] + a2[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = MiObtainReferencedVad(a1, &v13);
  v7 = v6;
  if ( v6 )
  {
    v8 = v6[6];
    v9 = v6[12];
    v10 = (v8 | ((unsigned __int64)*((unsigned __int8 *)v6 + 32) << 32)) << 12;
    if ( (v9 & 7) == 1 && (a1 & 0xFFFFFFFFFFFFF000uLL) == v10 )
    {
      v11 = (v6[7] | ((unsigned __int64)*((unsigned __int8 *)v6 + 33) << 32))
          - (v8 | ((unsigned __int64)*((unsigned __int8 *)v6 + 32) << 32));
      if ( v3 == v11 + 1 )
      {
        v12 = (__int64)a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL;
        while ( 1 )
        {
          v14 = MI_READ_PTE_LOCK_FREE(v5);
          if ( *(_QWORD *)(v5 + v12) != (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFLL) )
            break;
          v5 += 8LL;
          if ( !--v3 )
          {
            if ( (v9 & 0x4000) == 0 || (v13 = MiCheckSecuredVad(v7, v10, (v11 + 1) << 12, 85LL), v13 >= 0) )
            {
              MiUnmapVad(v7, 0LL);
              return;
            }
            break;
          }
        }
      }
    }
    MiUnlockAndDereferenceVad(v7);
  }
}
