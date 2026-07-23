/*
 * XREFs of MiClearPageFileHash @ 0x140123EB0
 * Callers:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r11
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  _SLIST_ENTRY *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  int PteTimeStamp; // eax
  __int64 updated; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r9d
  _QWORD *v22; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 v25; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
  {
    v4 = MI_READ_PTE_LOCK_FREE((((v3 + 4 * (unsigned __int64)a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v25 = v4;
    if ( (v4 & 1) != 0 )
    {
      *v7 = 1;
      v14 = (_SLIST_ENTRY *)MI_GET_PFN_FROM_PTE(&v25);
      PteTimeStamp = MiGetPteTimeStamp(v14[1].Next, v15, v16);
      updated = MiUpdatePageFileHighInPte(v14[1].Next, (unsigned int)(PteTimeStamp - 1));
      v25 = updated;
      v14[1].Next = (_SLIST_ENTRY *)updated;
      if ( (unsigned int)MiPteInShadowRange(&v14[1], updated) )
        MiWritePteShadow(v20, v19);
      if ( !v21 )
      {
        --*(_DWORD *)(a1 + 208);
        *v22 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v22, v19) )
          MiWritePteShadow(v23, 0LL);
        KeFlushSingleTb(v24, 0, 1u);
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v14);
      }
    }
    else
    {
      v8 = MiGetPteTimeStamp(v4, v5, v6);
      v10 = MiUpdatePageFileHighInPte(v9, (unsigned int)(v8 - 1));
      v25 = v10;
      *v11 = v10;
      if ( (unsigned int)MiPteInShadowRange(v11, v10) )
        MiWritePteShadow(v13, v12);
    }
  }
}
