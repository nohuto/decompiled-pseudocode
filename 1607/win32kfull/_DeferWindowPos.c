/*
 * XREFs of _DeferWindowPos @ 0x1C00A6664
 * Callers:
 *     xxxSetWindowRgn @ 0x1C00A592C (xxxSetWindowRgn.c)
 *     _DeferWindowPosAndBand @ 0x1C00A5BBC (_DeferWindowPosAndBand.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C00A60DC (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxArrangeIconicWindows @ 0x1C014E1F0 (xxxArrangeIconicWindows.c)
 * Callees:
 *     DestroySMWP @ 0x1C0075EC0 (DestroySMWP.c)
 *     HWInsertAfter @ 0x1C00A67E4 (HWInsertAfter.c)
 */

__int64 __fastcall DeferWindowPos(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax

  v10 = 1LL;
  v11 = *(int *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 28) + 1 > (int)v11 )
  {
    v19 = v11 + 4;
    if ( (int)v11 + 4 < (unsigned int)v11
      || v19 > 0xC30C30
      || ((v20 = 168 * v11, v21 = *(_QWORD *)(a1 + 40), v22 = 168LL * v19, (void *const)a1 != gSMWP)
        ? (v23 = UserReAllocPoolWithQuotaZInit(v21, v20, v22, 2004054869LL))
        : (v23 = UserReAllocPoolZInit(v21, v20, v22, 2004054869LL)),
          !v23) )
    {
      DestroySMWP((_DWORD *)a1, a2, a3);
      return 0LL;
    }
    *(_QWORD *)(a1 + 40) = v23;
    *(_DWORD *)(a1 + 32) = v19;
  }
  v15 = *(int *)(a1 + 28);
  v16 = *(_QWORD *)(a1 + 40) + 168 * v15;
  *(_DWORD *)(a1 + 28) = v15 + 1;
  *(_QWORD *)v16 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 44) & 0x20) == 0 )
    v10 = HWInsertAfter(a3);
  *(_DWORD *)(v16 + 20) = a5;
  *(_DWORD *)(v16 + 24) = a6;
  *(_DWORD *)(v16 + 28) = a7;
  *(_QWORD *)(v16 + 8) = v10;
  *(_DWORD *)(v16 + 16) = a4;
  *(_DWORD *)(v16 + 32) = a8;
  *(_QWORD *)(v16 + 112) = 0LL;
  *(_QWORD *)(v16 + 120) = 0LL;
  *(_QWORD *)(v16 + 128) = 0LL;
  *(_DWORD *)(v16 + 140) = 0;
  *(_DWORD *)(v16 + 136) = 0;
  *(_DWORD *)(v16 + 148) = 0;
  *(_DWORD *)(v16 + 144) = 0;
  *(_DWORD *)(v16 + 156) &= 0xFFFFFF1F;
  if ( (a8 & 3) != 3 || (a8 & 4) == 0 && a3 == -1 )
  {
    v17 = *(_QWORD *)(a2 + 344);
    *(_DWORD *)(v16 + 156) |= 0x20u;
    *(_QWORD *)(v16 + 128) = v17;
  }
  *(_DWORD *)(v16 + 156) &= 0xFFFFFFE0;
  *(_DWORD *)(v16 + 152) = a9;
  return a1;
}
