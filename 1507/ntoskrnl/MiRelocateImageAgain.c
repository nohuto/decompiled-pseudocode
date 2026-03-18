/*
 * XREFs of MiRelocateImageAgain @ 0x14046B548
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14002D3A4 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14002D414 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiGetControlAreaCfg @ 0x14002D808 (MiGetControlAreaCfg.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiImageUnused @ 0x1401202EC (MiImageUnused.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14046B6E4 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 *     MiSwitchBaseAddress @ 0x14046BCC4 (MiSwitchBaseAddress.c)
 *     MiReturnImageBase @ 0x1404B7DB8 (MiReturnImageBase.c)
 *     SeSetImageBaseAddress @ 0x1406D07CC (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 *v2; // r15
  __int64 v5; // r14
  _QWORD *v6; // r12
  unsigned int v7; // r13d
  __int64 *v8; // rsi
  int updated; // edi
  unsigned __int64 v10; // r8
  __int64 ControlAreaCfg; // rax
  __int64 v13; // rbp
  unsigned int SessionId; // eax
  _QWORD v15[11]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  int v17; // [rsp+98h] [rbp+10h]
  __int64 v18; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  v17 = a2;
  v2 = *(__int64 **)(a1 + 96);
  v5 = *v2;
  if ( !*v2 )
    return 0LL;
  v6 = *(_QWORD **)a1;
  v7 = -1;
  v15[1] = 0LL;
  v8 = 0LL;
  v15[0] = 0xFFFFFFFFLL;
  updated = 0;
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( *(int *)(a1 + 92) >= 0 )
  {
    v18 = v6[4];
    v8 = MiReservePtes((__int64)&qword_14034FC70, 1u, v10);
    if ( v8 )
    {
      updated = MiSelectImageBase(v5, (_DWORD)v6, a2, 0, (__int64)&v16);
      if ( updated >= 0 )
      {
        *(_DWORD *)(a1 + 92) |= 0x80000000;
        ControlAreaCfg = MiGetControlAreaCfg(a1);
        v13 = v16;
        updated = MiUpdateCfgSystemWideBitmap(*v6, v16, ControlAreaCfg);
        if ( updated >= 0 )
        {
          if ( v13 == v18 )
          {
LABEL_11:
            updated = 0;
            goto LABEL_3;
          }
          if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 )
            updated = SeSetImageBaseAddress(v2[1] & 0xFFFFFFFFFFFFFFF8uLL, v13);
          if ( updated >= 0 )
          {
            if ( !v17 )
            {
              SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
              v13 = v16;
              v7 = SessionId;
            }
            MiSwitchBaseAddress(a1, v13, v8, v7);
            goto LABEL_11;
          }
        }
        MiImageUnused(a1, 0, (__int64)v15);
      }
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v8 )
    MiReleasePtes((__int64)&qword_14034FC70, v8, 1u);
  MiReturnImageBase(v15);
  return (unsigned int)updated;
}
