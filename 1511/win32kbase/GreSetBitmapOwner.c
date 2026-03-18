/*
 * XREFs of GreSetBitmapOwner @ 0x1C0023A30
 * Callers:
 *     <none>
 * Callees:
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  struct _ENTRY *v6; // r14
  __int64 v7; // r8
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v5 = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v6 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v9, v6, 1, (unsigned __int16)a1, 0);
    if ( v10 && v9 )
    {
      if ( *((_BYTE *)v6 + 14) == 5 && *((_WORD *)v6 + 6) == WORD1(a1) )
      {
        v5 = *(_QWORD *)v6;
        ++*(_DWORD *)(*(_QWORD *)v6 + 8LL);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v9);
    if ( v5 )
    {
      if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 184) || a2) && (a1 & 0x800000) == 0 )
      {
        LOBYTE(v7) = 5;
        v2 = HmgSetOwner(a1, a2, v7);
      }
      HmgDecrementShareReferenceCount(v5);
    }
  }
  return v2;
}
