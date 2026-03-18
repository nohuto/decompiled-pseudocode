/*
 * XREFs of PspSetContext @ 0x14044E5F4
 * Callers:
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlXRestore @ 0x140126714 (RtlXRestore.c)
 *     KiCopyXStateArea @ 0x1402041F0 (KiCopyXStateArea.c)
 */

__int64 __fastcall PspSetContext(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // ebp
  int v9; // eax
  int v10; // eax
  __int16 v11; // ax
  __int16 v12; // cx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // r8
  _QWORD *SparePtr; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *i; // rax

  v4 = *(_DWORD *)(a3 + 48);
  if ( (v4 & 0x100001) != 0x100001 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a3 + 68);
  if ( a4 )
    v10 = v9 & 0x210DD5 | 0x200;
  else
    v10 = v9 & 0x210FD5;
  *(_DWORD *)(a1 + 376) = v10;
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a3 + 248);
  *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
  if ( a4 == 1 )
  {
    *(_WORD *)(a1 + 392) = 43;
    v11 = 51;
    if ( *(_WORD *)(a3 + 56) != 51 )
    {
      *(_WORD *)(a1 + 368) = 35;
      goto LABEL_7;
    }
  }
  else
  {
    v11 = 16;
    *(_WORD *)(a1 + 392) = 0;
  }
  *(_WORD *)(a1 + 368) = v11;
LABEL_7:
  v12 = *(_WORD *)(a1 + 368);
  v13 = *(_QWORD *)(a1 + 360);
  if ( a4 == 1 )
  {
    if ( ((v12 - 35) & 0xFFF7) != 0 )
      v13 = v13 << 16 >> 16;
    else
      v13 = (unsigned int)v13;
  }
  *(_QWORD *)(a1 + 360) = v13;
LABEL_11:
  if ( (v4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    **(_QWORD **)(a2 + 152) = *(_QWORD *)(a3 + 144);
    **(_QWORD **)(a2 + 168) = *(_QWORD *)(a3 + 160);
    **(_QWORD **)(a2 + 176) = *(_QWORD *)(a3 + 168);
    **(_QWORD **)(a2 + 184) = *(_QWORD *)(a3 + 176);
    **(_QWORD **)(a2 + 224) = *(_QWORD *)(a3 + 216);
    **(_QWORD **)(a2 + 232) = *(_QWORD *)(a3 + 224);
    **(_QWORD **)(a2 + 240) = *(_QWORD *)(a3 + 232);
    **(_QWORD **)(a2 + 248) = *(_QWORD *)(a3 + 240);
  }
  if ( (v4 & 0x100040) == 0x100040 && a4 == 1 )
  {
    v15 = *(int *)(a3 + 1248) + a3 + 720;
    SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
    if ( SparePtr )
    {
      for ( i = (_QWORD *)*SparePtr; i; i = (_QWORD *)*i )
        SparePtr = i;
      v17 = SparePtr[5];
    }
    else
    {
      v17 = 0LL;
    }
    v18 = MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v17 )
      KiCopyXStateArea(v17, v18, v15);
    else
      RtlXRestore(*(int *)(a3 + 1248) + a3 + 720, v18);
  }
  if ( (v4 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)*(_QWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)*(_QWORD *)(a2 + 56) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)*(_QWORD *)(a2 + 64) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)*(_QWORD *)(a2 + 72) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)*(_QWORD *)(a2 + 80) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)*(_QWORD *)(a2 + 88) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)*(_QWORD *)(a2 + 96) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)*(_QWORD *)(a2 + 104) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)*(_QWORD *)(a2 + 112) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)*(_QWORD *)(a2 + 120) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = KiMxCsrMask & *(_DWORD *)(a3 + 52);
    *(_DWORD *)(a3 + 280) = _mm_getcsr();
    *(_WORD *)(a3 + 256) &= 0x1F3Fu;
  }
  result = 1048592LL;
  if ( (v4 & 0x100010) == 0x100010 )
  {
    v19 = *(_QWORD *)(a3 + 72);
    if ( a4 )
    {
      v20 = 0LL;
      if ( v19 <= (unsigned __int64)MmHighestUserAddress )
        v20 = *(_QWORD *)(a3 + 72);
      v19 = v20;
    }
    *(_QWORD *)(a1 + 216) = v19;
    v21 = *(_QWORD *)(a3 + 80);
    if ( a4 )
    {
      v22 = 0LL;
      if ( v21 <= (unsigned __int64)MmHighestUserAddress )
        v22 = *(_QWORD *)(a3 + 80);
      v21 = v22;
    }
    *(_QWORD *)(a1 + 224) = v21;
    v23 = *(_QWORD *)(a3 + 88);
    if ( a4 )
    {
      v24 = 0LL;
      if ( v23 <= (unsigned __int64)MmHighestUserAddress )
        v24 = *(_QWORD *)(a3 + 88);
      v23 = v24;
    }
    *(_QWORD *)(a1 + 232) = v23;
    v25 = *(_QWORD *)(a3 + 96);
    if ( a4 )
    {
      v26 = 0LL;
      if ( v25 <= (unsigned __int64)MmHighestUserAddress )
        v26 = *(_QWORD *)(a3 + 96);
      v25 = v26;
    }
    *(_QWORD *)(a1 + 240) = v25;
    result = 4294902613LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    v27 = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
    *(_QWORD *)(a1 + 256) = v27;
    if ( a4 )
    {
      result = (__int64)KeGetCurrentThread();
      if ( (v27 & 0x355) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)result, 0x18u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)result, 0x18u);
    }
  }
  return result;
}
