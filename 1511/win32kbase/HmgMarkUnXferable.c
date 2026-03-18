/*
 * XREFs of HmgMarkUnXferable @ 0x1C00B6080
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgMarkUnXferable(int a1, char a2)
{
  unsigned int v2; // esi
  __int16 v4; // ebx^2
  struct _ENTRY *v5; // rdi
  unsigned int v6; // ebx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)v8, v5, 1, (unsigned __int16)a1, 1);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v8) )
    {
      if ( *((_BYTE *)v5 + 14) == a2 && *((_WORD *)v5 + 6) == v4 )
      {
        v6 = *(_DWORD *)(v8[0] + 8LL) & 0xFFFFFFFE;
        if ( v6 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          *((_BYTE *)v5 + 15) &= ~0x20u;
          v2 = 1;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v8);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v8);
  }
  return v2;
}
