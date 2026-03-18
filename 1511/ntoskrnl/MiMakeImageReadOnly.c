/*
 * XREFs of MiMakeImageReadOnly @ 0x1400E7680
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  unsigned __int8 v3; // si
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = a1 + 120;
  v3 = 17;
  v11 = 17;
  if ( a1 != -120 )
  {
    do
    {
      if ( (*(_WORD *)(v2 + 32) & 0x3E) != 2 )
      {
        v4 = *(_QWORD *)(v2 + 8);
        v5 = *(unsigned int *)(v2 + 44);
        *(_WORD *)(v2 + 32) = *(_WORD *)(v2 + 32) & 0xFFC1 | 2;
        v6 = v4 + 8 * v5;
        while ( v4 < v6 )
        {
          if ( (v4 & 0xFFF) == 0 || v3 == 17 )
          {
            if ( v3 != 17 )
              MiUnlockProtoPoolPage(v1, v3);
            while ( 1 )
            {
              v1 = MiLockProtoPoolPage(v4, &v11);
              if ( v1 )
                break;
              MmAccessFault(2uLL, v4, 0, 0LL);
            }
            v3 = v11;
          }
          v7 = MiLockLeafPage(v4, 0);
          v8 = MI_READ_PTE_LOCK_FREE(v4);
          if ( v7 )
          {
            if ( (v8 & 1) == 0 )
            {
              v10 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)v4 = v10;
              if ( (unsigned int)MiPteInShadowRange(v4) )
                MiWritePteShadow(v4, v10);
              *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v3 = v11;
          }
          else if ( (v8 & 0x400) != 0 || v8 )
          {
            v9 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            *(_QWORD *)v4 = v9;
            if ( (unsigned int)MiPteInShadowRange(v4) )
              MiWritePteShadow(v4, v9);
          }
          v4 += 8LL;
        }
        if ( v3 != 17 )
        {
          MiUnlockProtoPoolPage(v1, v3);
          v3 = 17;
          v11 = 17;
        }
      }
      v2 = *(_QWORD *)(v2 + 16);
    }
    while ( v2 );
  }
}
