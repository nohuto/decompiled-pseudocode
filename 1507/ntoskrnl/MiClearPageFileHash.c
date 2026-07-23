/*
 * XREFs of MiClearPageFileHash @ 0x14014ACC8
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 *v5; // rbx
  unsigned __int64 PteShadow; // r8
  int PteTimeStamp; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  _SLIST_ENTRY *v10; // rbp
  _QWORD *v11; // r9
  unsigned int v12; // r14d
  __int64 updated; // rax
  __int64 *v14; // r9
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
  {
    v4 = v3 + 4LL * a2;
    v5 = (__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v5;
    if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v5, *v5);
    v15 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      *(_DWORD *)v4 = 1;
      if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8 )
        PteShadow = MiReadPteShadow(&v15, PteShadow);
      v10 = (_SLIST_ENTRY *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v12 = MiGetPteTimeStamp(v10[1].Next) - 1;
      updated = MiUpdatePageFileHighInPte(*v11, v12);
      v15 = updated;
      *v14 = updated;
      if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v14, updated);
      if ( !v12 )
      {
        --*(_DWORD *)(a1 + 168);
        *v5 = 0LL;
        if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
          MiWritePteShadow(v5, 0LL);
        KeFlushSingleTb(v4, 0, 1);
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), v10);
      }
    }
    else
    {
      PteTimeStamp = MiGetPteTimeStamp(PteShadow);
      v9 = MiUpdatePageFileHighInPte(v8, (unsigned int)(PteTimeStamp - 1));
      v15 = v9;
      *v5 = v9;
      if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v5, v9);
    }
  }
}
