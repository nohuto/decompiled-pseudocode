/*
 * XREFs of HmgLock @ 0x1C003BC00
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall HmgLock(int a1, char a2)
{
  __int64 v2; // rbx
  __int16 v4; // edi^2
  __int64 v5; // rsi
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v8; // ax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  unsigned int v12; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v13; // [rsp+44h] [rbp-14h]

  v2 = 0LL;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v10, (struct _ENTRY *)v5, 1, (unsigned __int16)a1, 0);
    if ( v11 )
    {
      v6 = v10;
      if ( v10 )
      {
        if ( *(_BYTE *)(v5 + 14) == a2 && *(_WORD *)(v5 + 12) == v4 )
        {
          CurrentThread = KeGetCurrentThread();
          v2 = *(_QWORD *)v5;
          v8 = *(_WORD *)(*(_QWORD *)v5 + 12LL);
          if ( !v8 || *(struct _KTHREAD **)(v2 + 16) == CurrentThread )
          {
            *(_QWORD *)(v2 + 16) = CurrentThread;
            *(_WORD *)(v2 + 12) = v8 + 1;
          }
          else
          {
            v2 = 0LL;
          }
          v6 = v10;
        }
        if ( (*(_BYTE *)(v6 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v13, 0LL);
        }
        else
        {
          _m_prefetchw((const void *)(v6 + 8));
          v12 = *(_DWORD *)(v6 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v6 + 8), v12);
        }
        v11 = 0;
        v10 = 0LL;
        KeLeaveCriticalRegion();
      }
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v10);
  }
  return v2;
}
