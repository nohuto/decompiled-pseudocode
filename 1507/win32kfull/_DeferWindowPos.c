/*
 * XREFs of _DeferWindowPos @ 0x1C00851D8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88 (xxxDeferWindowPosAndCheckPoint.c)
 *     _DeferWindowPosAndBand @ 0x1C00843D4 (_DeferWindowPosAndBand.c)
 *     xxxSetWindowRgn @ 0x1C00847E8 (xxxSetWindowRgn.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0084C20 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxArrangeIconicWindows @ 0x1C011FC70 (xxxArrangeIconicWindows.c)
 * Callees:
 *     DestroySMWP @ 0x1C0063A00 (DestroySMWP.c)
 *     HWInsertAfter @ 0x1C0085358 (HWInsertAfter.c)
 */

__int64 __fastcall DeferWindowPos(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax

  v10 = 1LL;
  v11 = *(int *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 28) + 1 > (int)v11 )
  {
    v15 = v11 + 4;
    if ( (int)v11 + 4 < (unsigned int)v11
      || v15 > 0xC30C30
      || ((v16 = 168 * v11, v17 = *(_QWORD *)(a1 + 40), v18 = 168LL * v15, (void *const)a1 != gSMWP)
        ? (v19 = UserReAllocPoolWithQuotaZInit(v17, v16, v18, 2004054869LL))
        : (v19 = UserReAllocPoolZInit(v17, v16, v18, 2004054869LL)),
          !v19) )
    {
      DestroySMWP((_DWORD *)a1);
      return 0LL;
    }
    *(_QWORD *)(a1 + 40) = v19;
    *(_DWORD *)(a1 + 32) = v15;
  }
  v20 = *(int *)(a1 + 28);
  v21 = *(_QWORD *)(a1 + 40) + 168 * v20;
  *(_DWORD *)(a1 + 28) = v20 + 1;
  *(_QWORD *)v21 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 44) & 0x20) == 0 )
    v10 = HWInsertAfter(a3);
  *(_DWORD *)(v21 + 20) = a5;
  *(_DWORD *)(v21 + 24) = a6;
  *(_DWORD *)(v21 + 28) = a7;
  *(_QWORD *)(v21 + 8) = v10;
  *(_DWORD *)(v21 + 16) = a4;
  *(_DWORD *)(v21 + 32) = a8;
  *(_QWORD *)(v21 + 112) = 0LL;
  *(_QWORD *)(v21 + 120) = 0LL;
  *(_QWORD *)(v21 + 128) = 0LL;
  *(_DWORD *)(v21 + 140) = 0;
  *(_DWORD *)(v21 + 136) = 0;
  *(_DWORD *)(v21 + 148) = 0;
  *(_DWORD *)(v21 + 144) = 0;
  *(_DWORD *)(v21 + 156) &= 0xFFFFFF1F;
  if ( (a8 & 3) != 3 || (a8 & 4) == 0 && a3 == -1 )
  {
    v22 = *(_QWORD *)(a2 + 352);
    *(_DWORD *)(v21 + 156) |= 0x20u;
    *(_QWORD *)(v21 + 128) = v22;
  }
  *(_DWORD *)(v21 + 156) &= 0xFFFFFFE0;
  *(_DWORD *)(v21 + 152) = a9;
  return a1;
}
