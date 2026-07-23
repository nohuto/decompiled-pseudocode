/*
 * XREFs of PspSetNetRateControl @ 0x140680CC4
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1404687F4 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140468810 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x1404D4E7C (PspLockRootJobExclusive.c)
 *     PspNetRateControlDispatch @ 0x1406806BC (PspNetRateControlDispatch.c)
 *     PspSetJobRateControl @ 0x140680B0C (PspSetJobRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1406A1AA8 (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(void *Src, size_t Size, __int64 a3)
{
  __int64 *v3; // rbp
  char v5; // r12
  int v6; // esi
  int v7; // ebx
  int v8; // r14d
  int v9; // r15d
  int v10; // esi
  struct _KTHREAD *CurrentThread; // r13
  bool v12; // r9
  bool v13; // dl
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+70h] [rbp+0h] BYREF

  v3 = (__int64 *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = 0;
  memmove((void *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 48), Src, (unsigned int)Size);
  v6 = *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( (v6 & 0xFFFFFFF8) == 0 )
  {
    v8 = *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) & 1;
    if ( (v6 & 1) == 0
      || ((v6 & 4) == 0 || *(_BYTE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) <= 0x40u)
      && (v6 & 6) != 0 )
    {
      memset(v3 + 1, 0, 0x28uLL);
      *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = a3 + 1240;
      *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
      v9 = v6 & 2;
      if ( (v6 & 2) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) |= 0x10u;
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x30);
      }
      v10 = v6 & 4;
      if ( v10 )
      {
        *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) |= 8u;
        *(_BYTE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = *(_BYTE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x3C);
      }
      CurrentThread = KeGetCurrentThread();
      PspLockRootJobExclusive(a3, (__int64)CurrentThread, (_QWORD *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL));
      PspLockJobConditionally(a3, (_QWORD *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL));
      v12 = (*(_DWORD *)(a3 + 1304) & 0x2000000) != 0;
      v13 = (*(_DWORD *)(a3 + 1304) & 0x4000000) != 0;
      if ( (*(_DWORD *)(a3 + 1304) & 0x4000000) != 0 )
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 56LL);
      if ( v8 )
      {
        if ( v12 )
        {
          if ( v13 )
            *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) |= 2u;
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) |= 1u;
        }
      }
      else if ( v13 )
      {
        *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) |= 4u;
      }
      if ( (*(_BYTE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) & 1) != 0 )
      {
        v7 = PspSetJobRateControl(a3);
        if ( v7 < 0 )
          goto LABEL_37;
        v5 = 1;
        v14 = PspNetRateControlDispatch((__int64)(v3 + 1));
      }
      else
      {
        if ( (*(_BYTE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) & 7) != 0 )
        {
          v7 = PspNetRateControlDispatch((__int64)(v3 + 1));
          if ( v7 < 0 )
            goto LABEL_37;
        }
        v14 = PspSetJobRateControl(a3);
      }
      v7 = v14;
      if ( v14 < 0 )
        goto LABEL_38;
      if ( v8 )
      {
        if ( v9 )
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 1296) + 48LL) |= 1u;
          *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 40LL) = *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                 + 0x18);
        }
        if ( v10 )
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 1296) + 48LL) |= 2u;
          *(_BYTE *)(*(_QWORD *)(a3 + 1296) + 64LL) = *(_BYTE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
        }
        *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 56LL) = *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v15 = *(_QWORD *)(a3 + 1296);
        *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_DWORD *)(v15 + 48);
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v15 + 40);
        *(_BYTE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_BYTE *)(v15 + 64);
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
      }
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(a3, 32, (_DWORD)v3 + 64, 0, v14, 1829);
LABEL_37:
      if ( v7 >= 0 )
      {
LABEL_40:
        PspUnlockJobConditionally(a3, (_QWORD *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFC0uLL));
        PspUnlockJob(*v3, (__int64)CurrentThread);
        return (unsigned int)v7;
      }
LABEL_38:
      if ( v5 )
        PspSetJobRateControl(a3);
      goto LABEL_40;
    }
  }
  return (unsigned int)-1073741811;
}
