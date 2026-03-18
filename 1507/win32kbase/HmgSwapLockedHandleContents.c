/*
 * XREFs of HmgSwapLockedHandleContents @ 0x1C005E4B0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgSwapLockedHandleContents(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5)
{
  int v5; // r14d
  unsigned int v8; // ebx
  struct _ENTRY *v9; // rsi
  __int64 v10; // rdi
  __int128 *v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 *v15; // rcx
  __int128 v16; // xmm2
  __int64 v17; // xmm3_8
  _OWORD *v18; // rax
  __int16 v19; // r9
  __int16 v20; // dx
  _QWORD v22[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF

  v5 = a3;
  v8 = 0;
  v9 = (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * a1);
  v10 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * a3;
  HANDLELOCK::vLockHandle((HANDLELOCK *)v23, v9, 0, a1, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v23) )
  {
    HANDLELOCK::vLockHandle((HANDLELOCK *)v22, (struct _ENTRY *)v10, 0, v5, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v22) )
    {
      if ( *(_DWORD *)(*(_QWORD *)v23[0] + 8LL) == a2
        && *((_BYTE *)v9 + 14) == a5
        && *(_DWORD *)(*(_QWORD *)v22[0] + 8LL) == a4
        && *(_BYTE *)(v10 + 14) == a5 )
      {
        v11 = *(__int128 **)v9;
        *(_QWORD *)v9 = *(_QWORD *)v10;
        v8 = 1;
        v12 = *(_OWORD **)(v10 + 16);
        *(_QWORD *)v10 = v11;
        v13 = (_OWORD *)*((_QWORD *)v9 + 2);
        *((_QWORD *)v9 + 2) = v12;
        v14 = *(_OWORD **)v10;
        *(_QWORD *)(v10 + 16) = v13;
        v15 = *(__int128 **)v9;
        v16 = *(_OWORD *)*(_QWORD *)v9;
        v17 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
        *v15 = *v14;
        *((_QWORD *)v15 + 2) = *((_QWORD *)v14 + 2);
        v18 = *(_OWORD **)v10;
        *v18 = v16;
        *((_QWORD *)v18 + 2) = v17;
        v19 = *(_WORD *)(*(_QWORD *)v10 + 14LL);
        v20 = *(_WORD *)(*(_QWORD *)v9 + 14LL) & 0x8000 | v19 & 0x4000;
        *(_WORD *)(*(_QWORD *)v9 + 14LL) = v19 & 0x8000 | *(_WORD *)(*(_QWORD *)v9 + 14LL) & 0x4000;
        *(_WORD *)(*(_QWORD *)v10 + 14LL) = v20;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v22);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)v23);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v22);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v23);
  return v8;
}
