/*
 * XREFs of MiRelocateImageAgain @ 0x14042B18C
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140021128 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14002119C (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiImageUnused @ 0x1400A5778 (MiImageUnused.c)
 *     MiGetControlAreaCfg @ 0x1400BE21C (MiGetControlAreaCfg.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiReturnImageBase @ 0x14042DC84 (MiReturnImageBase.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14046D398 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 *     MiSwitchBaseAddress @ 0x1404BC564 (MiSwitchBaseAddress.c)
 *     SeSetImageBaseAddress @ 0x14068CA84 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 *v2; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // r13d
  ULONG_PTR v8; // rsi
  int updated; // edi
  unsigned __int64 v10; // r8
  __int64 ControlAreaCfg; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned int SessionId; // eax
  _QWORD v16[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v2 = *(__int64 **)(a1 + 96);
  v5 = *v2;
  if ( !*v2 )
    return 0LL;
  v6 = *(_QWORD *)a1;
  v16[0] = 0xFFFFFFFFLL;
  v7 = -1;
  v16[1] = 0LL;
  v8 = 0LL;
  updated = 0;
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( *(int *)(a1 + 92) >= 0 )
  {
    v18 = *(_QWORD *)(v6 + 32);
    v8 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v10);
    if ( v8 )
    {
      updated = MiSelectImageBase(v5, v6, a2, 0, (__int64)&v17);
      if ( updated >= 0 )
      {
        *(_DWORD *)(a1 + 92) |= 0x80000000;
        ControlAreaCfg = MiGetControlAreaCfg(a1);
        v13 = v17;
        updated = MiUpdateCfgSystemWideBitmap(v14, v17, ControlAreaCfg);
        if ( updated >= 0 )
        {
          if ( v13 == v18 )
          {
LABEL_11:
            updated = 0;
            goto LABEL_3;
          }
          if ( (MiFlags & 0x80000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 )
            updated = SeSetImageBaseAddress(v2[1] & 0xFFFFFFFFFFFFFFF8uLL, v13);
          if ( updated >= 0 )
          {
            if ( !a2 )
            {
              SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
              v13 = v17;
              v7 = SessionId;
            }
            MiSwitchBaseAddress(a1, v13, v8, v7);
            goto LABEL_11;
          }
        }
        MiImageUnused(a1, 0, (__int64)v16);
      }
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v8 )
    MiReleasePtes((__int64)&qword_1403278B0, v8, 1u);
  MiReturnImageBase(v16);
  return (unsigned int)updated;
}
