/*
 * XREFs of MiRelocateImageAgain @ 0x1403F753C
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140006E30 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140006E80 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiGetControlAreaCfg @ 0x1400367AC (MiGetControlAreaCfg.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiImageUnused @ 0x1400E6C4C (MiImageUnused.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1403C66C8 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1403C6738 (MiSelectImageBase.c)
 *     MiReturnImageBase @ 0x14041B3BC (MiReturnImageBase.c)
 *     MiSwitchBaseAddress @ 0x1404B1F88 (MiSwitchBaseAddress.c)
 *     SeSetImageBaseAddress @ 0x14064D394 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r15
  __int64 v5; // r14
  __int64 *v6; // r13
  unsigned int v7; // r12d
  _QWORD *v8; // rsi
  int updated; // edi
  unsigned __int64 v10; // r8
  char *v12; // rbp
  unsigned int SessionId; // eax
  _QWORD v14[11]; // [rsp+30h] [rbp-58h] BYREF
  char *v15; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+10h]
  char *v17; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  v16 = a2;
  v2 = *(__int64 **)(a1 + 96);
  v5 = *v2;
  if ( !*v2 )
    return 0LL;
  v6 = *(__int64 **)a1;
  v7 = -1;
  v14[1] = 0LL;
  v8 = 0LL;
  v14[0] = 0xFFFFFFFFLL;
  updated = 0;
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( *(int *)(a1 + 92) >= 0 )
  {
    v17 = (char *)v6[4];
    v8 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 1u, v10);
    if ( v8 )
    {
      updated = MiSelectImageBase(v5, (__int64)v6, a2, (*(_DWORD *)(a1 + 56) >> 30) & 1, &v15);
      if ( updated >= 0 )
      {
        *(_DWORD *)(a1 + 92) |= 0x80000000;
        MiGetControlAreaCfg(a1);
        v12 = v15;
        updated = MiUpdateCfgSystemWideBitmap(*v6, (__int64)v15);
        if ( updated >= 0 )
        {
          if ( v12 == v17 )
          {
LABEL_11:
            updated = 0;
            goto LABEL_3;
          }
          if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 )
            updated = SeSetImageBaseAddress(v2[1] & 0xFFFFFFFFFFFFFFF8uLL, v12);
          if ( updated >= 0 )
          {
            if ( !v16 )
            {
              SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
              v12 = v15;
              v7 = SessionId;
            }
            MiSwitchBaseAddress(a1, v12, v8, v7);
            goto LABEL_11;
          }
        }
        MiImageUnused(a1, 0, (__int64)v14);
      }
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v8 )
    MiReleasePtes((__int64)&qword_1402FF7B0, v8, 1u);
  MiReturnImageBase(v14);
  return (unsigned int)updated;
}
