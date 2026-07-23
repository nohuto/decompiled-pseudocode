/*
 * XREFs of KeBuildPrimaryThreadContext @ 0x140650F3C
 * Callers:
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeBuildPrimaryThreadContext(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  int v12; // esi
  unsigned __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // [rsp+20h] [rbp-28h]
  __int64 v27; // [rsp+50h] [rbp+8h]

  v6 = a4;
  v9 = *(_QWORD *)(a1 + 240);
  v10 = *(_QWORD *)(a1 + 544);
  v27 = **(_QWORD **)(a1 + 496) + 16LL;
  v26 = *(_QWORD *)(v9 + 8);
  v11 = *(_QWORD *)(v9 + 16);
  if ( a3 )
  {
    v12 = *(_DWORD *)(a3 + 48) & 0x10001B;
    *(_DWORD *)(a3 + 48) = v12;
    if ( (v12 & 0x100001) == 0x100001 )
    {
      v13 = *(_QWORD *)(v27 + 152);
      if ( (*(_DWORD *)(v10 + 440) & 0x20) != 0 && (v13 < v11 || v13 > v26) )
        return 3221225725LL;
      *(_QWORD *)(a3 + 152) = v13;
      *(_QWORD *)(a3 + 248) = *(_QWORD *)(v27 + 248);
      *(_QWORD *)(a3 + 160) = *(_QWORD *)(v27 + 160);
      *(_WORD *)(a3 + 56) = 51;
      *(_WORD *)(a3 + 66) = 43;
    }
    if ( (v12 & 0x100002) == 0x100002 )
    {
      *(_QWORD *)(a3 + 216) = v6;
      *(_QWORD *)(a3 + 224) = a5;
      *(_QWORD *)(a3 + 232) = a6;
    }
    if ( (v12 & 0x100008) == 0x100008 )
    {
      memset((void *)(a3 + 256), 0, 0x200uLL);
      *(_WORD *)(a3 + 256) = 639;
      *(_DWORD *)(a3 + 280) = 8064;
      *(_DWORD *)(a3 + 52) = 8064;
    }
    if ( (v12 & 0x100010) == 0x100010 )
    {
      *(_QWORD *)(a3 + 112) = *(_DWORD *)(v27 + 112) & 0xFFFF0355;
      *(_QWORD *)(a3 + 104) = 0LL;
      v15 = 0LL;
      if ( *(_QWORD *)(v27 + 72) <= 0x7FFFFFFEFFFFuLL )
        v15 = *(_QWORD *)(v27 + 72);
      *(_QWORD *)(a3 + 72) = v15;
      v16 = 0LL;
      if ( *(_QWORD *)(v27 + 80) <= 0x7FFFFFFEFFFFuLL )
        v16 = *(_QWORD *)(v27 + 80);
      *(_QWORD *)(a3 + 80) = v16;
      v17 = 0LL;
      if ( *(_QWORD *)(v27 + 88) <= 0x7FFFFFFEFFFFuLL )
        v17 = *(_QWORD *)(v27 + 88);
      *(_QWORD *)(a3 + 88) = v17;
      v18 = 0LL;
      if ( *(_QWORD *)(v27 + 96) <= 0x7FFFFFFEFFFFuLL )
        v18 = *(_QWORD *)(v27 + 96);
      *(_QWORD *)(a3 + 96) = v18;
    }
  }
  else
  {
    v19 = *(_QWORD *)(a2 + 80);
    v20 = *(_QWORD **)(a2 + 88);
    v21 = *(_QWORD *)(**(_QWORD **)(a1 + 496) + 168LL);
    if ( (*(_DWORD *)(v10 + 440) & 0x20) != 0 && (v21 < v11 || v21 > v26) )
      return 3221225725LL;
    *(_QWORD *)(v19 + 360) = (__int64)(*(_QWORD *)(v27 + 248) << 16) >> 16;
    *(_QWORD *)(v19 + 384) = v21;
    *(_QWORD *)(v19 + 344) = *(_QWORD *)(v27 + 160);
    *(_WORD *)(v19 + 368) = 51;
    *(_WORD *)(v19 + 392) = 43;
    v20[35] = v6;
    v20[36] = a5;
    v20[37] = a6;
    *(_DWORD *)(v19 + 44) = 8064;
    if ( (*(_DWORD *)(v27 + 112) & 0x355LL) != 0 || (*(_DWORD *)(v19 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(v19 + 256) = *(_DWORD *)(v27 + 72) & 0xFFFF0355;
      *(_QWORD *)(v19 + 248) = 0LL;
      v22 = 0LL;
      if ( *(_QWORD *)(v27 + 72) <= 0x7FFFFFFEFFFFuLL )
        v22 = *(_QWORD *)(v27 + 72);
      *(_QWORD *)(v19 + 216) = v22;
      v23 = 0LL;
      if ( *(_QWORD *)(v27 + 80) <= 0x7FFFFFFEFFFFuLL )
        v23 = *(_QWORD *)(v27 + 80);
      *(_QWORD *)(v19 + 224) = v23;
      v24 = 0LL;
      if ( *(_QWORD *)(v27 + 88) <= 0x7FFFFFFEFFFFuLL )
        v24 = *(_QWORD *)(v27 + 88);
      *(_QWORD *)(v19 + 232) = v24;
      v25 = 0LL;
      if ( *(_QWORD *)(v27 + 96) <= 0x7FFFFFFEFFFFuLL )
        v25 = *(_QWORD *)(v27 + 96);
      *(_QWORD *)(v19 + 240) = v25;
    }
  }
  return 0LL;
}
