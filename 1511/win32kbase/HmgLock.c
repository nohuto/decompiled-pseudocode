/*
 * XREFs of HmgLock @ 0x1C0034CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall HmgLock(int a1, char a2)
{
  __int64 v2; // rbx
  __int16 v4; // edi^2
  struct _ENTRY *v5; // rsi
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
    v5 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v10, v5, 1, (unsigned __int16)a1, 0);
    if ( v11 )
    {
      v6 = v10;
      if ( v10 )
      {
        if ( *((_BYTE *)v5 + 14) == a2 && *((_WORD *)v5 + 6) == v4 )
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
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v13);
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
