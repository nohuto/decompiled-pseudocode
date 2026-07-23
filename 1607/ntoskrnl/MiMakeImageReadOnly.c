/*
 * XREFs of MiMakeImageReadOnly @ 0x1400FA474
 * Callers:
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  unsigned __int8 v3; // di
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = a1 + 128;
  v3 = 17;
  v15 = 17;
  if ( a1 != -128 )
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
              v1 = MiLockProtoPoolPage(v4, &v15);
              if ( v1 )
                break;
              MmAccessFault(2uLL, v4, 0, 0LL);
            }
            v3 = v15;
          }
          MiLockLeafPage(v4, 0);
          v7 = MI_READ_PTE_LOCK_FREE(v4);
          if ( v8 )
          {
            if ( (v7 & 1) == 0 )
            {
              v12 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)v4 = v12;
              if ( (unsigned int)MiPteInShadowRange(v4, v12) )
                MiWritePteShadow(v14, v13);
              *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v3 = v15;
          }
          else if ( (v7 & 0x400) != 0 || v7 )
          {
            v9 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            *(_QWORD *)v4 = v9;
            if ( (unsigned int)MiPteInShadowRange(v4, v9) )
              MiWritePteShadow(v11, v10);
          }
          v4 += 8LL;
        }
        if ( v3 != 17 )
        {
          MiUnlockProtoPoolPage(v1, v3);
          v3 = 17;
          v15 = 17;
        }
      }
      v2 = *(_QWORD *)(v2 + 16);
    }
    while ( v2 );
  }
}
