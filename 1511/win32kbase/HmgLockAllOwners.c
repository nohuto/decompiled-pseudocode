/*
 * XREFs of HmgLockAllOwners @ 0x1C00B5FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgLockAllOwners(int a1, char a2)
{
  __int16 v3; // edi^2
  __int64 v4; // rbx
  struct _ENTRY *v5; // rsi
  __int16 v6; // cx
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = HIWORD(a1);
  v4 = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)v8, v5, 0, (unsigned __int16)a1, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v8) )
    {
      if ( *((_BYTE *)v5 + 14) == a2 && *((_WORD *)v5 + 6) == v3 )
      {
        v4 = *(_QWORD *)v5;
        v6 = *(_WORD *)(*(_QWORD *)v5 + 12LL);
        if ( !v6 || *(struct _KTHREAD **)(v4 + 16) == KeGetCurrentThread() )
        {
          *(_WORD *)(v4 + 12) = v6 + 1;
          *(_QWORD *)(v4 + 16) = KeGetCurrentThread();
        }
        else
        {
          v4 = 0LL;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v8);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v8);
  }
  return v4;
}
