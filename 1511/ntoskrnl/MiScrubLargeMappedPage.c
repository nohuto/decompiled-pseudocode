/*
 * XREFs of MiScrubLargeMappedPage @ 0x1401E5BA4
 * Callers:
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiMakePageBad @ 0x1401E5A10 (MiMakePageBad.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile LONG *v4; // r15
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  BOOL v16; // r12d
  _KPROCESS *v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v24; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-D8h]
  volatile LONG *v26; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v27; // [rsp+38h] [rbp-C8h]
  __int64 v28; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v32; // [rsp+64h] [rbp-9Ch]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]

  v4 = (volatile LONG *)(a3 + 1280);
  v5 = 0;
  v6 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 26;
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v28 = a2;
  v8 = (unsigned __int64)*(unsigned int *)(a1 + 28) >> 6;
  v30 = a4;
  v9 = v7 << 12;
  v33 = 20LL;
  v31 = 1;
  v27 = ((v8 | v6) & 0x3FFFFFF8) - 0x904C0000000LL;
  v32 = 0;
  v34 = 0LL;
  v10 = (__int64 *)(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v35 = 0LL;
  v26 = (volatile LONG *)(a3 + 1280);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a3 + 1280));
  if ( (unsigned __int64)v10 > v27 )
  {
LABEL_19:
    v5 = 1;
  }
  else
  {
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v10);
      v24 = v14;
      *v10 = 0LL;
      v15 = v14;
      v16 = MiPteInShadowRange((__int64)v10);
      if ( v16 )
        MiWritePteShadow((__int64)v10, 0LL);
      MiInsertTbFlushEntry((__int64)&v31, v9, 1LL, 1);
      MiFlushTbList((__int64)&v31, v17);
      v29 = v9 + 0x200000;
      v18 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v24) - 0x58000000000LL;
      v19 = v18 + 24576;
      v25 = v18 + 24576;
      if ( v18 < v18 + 24576 )
      {
        v20 = v28;
        do
        {
          if ( *(_WORD *)(v18 + 32) == 2 )
          {
            if ( (int)MiScrubPage(v20, *(_QWORD *)(v20 + 24), v18) < 0 )
            {
              v21 = (unsigned __int8)MiLockPageInline(v18);
              MiMakePageBad(v18, 0);
              _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v21);
            }
            v19 = v25;
          }
          v18 += 48LL;
        }
        while ( v18 < v19 );
        v4 = v26;
        v15 = v24;
      }
      v22 = v15 | 0x20;
      v24 = v22;
      *v10 = v22;
      if ( v16 )
        MiWritePteShadow((__int64)v10, v22);
      ++v10;
      if ( *(_DWORD *)(v30 + 4) )
        break;
      if ( (*v4 & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
        LOBYTE(v11) = v13;
        MiUnlockWorkingSetExclusive((__int64)v4, v11, v12);
        v13 = ExAcquireSpinLockExclusive(v4);
      }
      v9 = v29;
      if ( (unsigned __int64)v10 > v27 )
        goto LABEL_19;
    }
  }
  LOBYTE(v11) = v13;
  MiUnlockWorkingSetExclusive((__int64)v4, v11, v12);
  return v5;
}
