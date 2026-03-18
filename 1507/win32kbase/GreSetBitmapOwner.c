/*
 * XREFs of GreSetBitmapOwner @ 0x1C0044330
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  _BYTE v11[32]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v12; // [rsp+68h] [rbp-20h]

  v3 = 0;
  SURFREF::SURFREF((SURFREF *)v11);
  v5 = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v9, (struct _ENTRY *)v6, 1, (unsigned __int16)a1, 0);
    if ( v10 && v9 )
    {
      if ( *(_BYTE *)(v6 + 14) == 5 && *(_WORD *)(v6 + 12) == WORD1(a1) )
      {
        v5 = *(_QWORD *)v6;
        ++*(_DWORD *)(*(_QWORD *)v6 + 8LL);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v9);
  }
  v12 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 184) || a2) && (a1 & 0x800000) == 0 )
    {
      v7 = HmgSetOwner(a1, a2, 5u);
      v5 = v12;
      v3 = v7;
    }
    if ( v5 )
      HmgDecrementShareReferenceCount((_DWORD *)v5);
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v11);
  return v3;
}
