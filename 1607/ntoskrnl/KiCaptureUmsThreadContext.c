/*
 * XREFs of KiCaptureUmsThreadContext @ 0x140651BF0
 * Callers:
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 * Callees:
 *     RtlXSave @ 0x140083D0C (RtlXSave.c)
 *     KeContextFromKframes @ 0x1400F22A0 (KeContextFromKframes.c)
 *     KeCopyLastBranchInformation @ 0x1400F2634 (KeCopyLastBranchInformation.c)
 *     KeSaveLegacyFloatingPointControlWord @ 0x14015E0E0 (KeSaveLegacyFloatingPointControlWord.c)
 */

__int64 __fastcall KiCaptureUmsThreadContext(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r13
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 88);
  v4 = *(_QWORD *)(a2 + 80);
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
    __writecr8(1uLL);
  v5 = **(_QWORD **)(a1 + 496);
  v9 = v5 + 16;
  *(_DWORD *)(v5 + 64) = 1048595;
  *(_DWORD *)(v5 + 1264) = *(_DWORD *)(v5 + 1264) & 0xFFFFFFFB | (4 * (*(_DWORD *)(a2 + 72) & 1));
  v6 = (_DWORD *)((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
  {
    KeContextFromKframes(v4, v3, v9);
    if ( MEMORY[0xFFFFF780000003D8] )
    {
      RtlXSave(v6, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFDuLL, v7);
      *(_QWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) |= 2uLL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x208) |= 2uLL;
    }
    else
    {
      _fxsave(v6);
    }
    *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_OWORD *)(v4 + 112);
    *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_OWORD *)(v4 + 128);
    *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(v4 + 144);
    *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *(_OWORD *)(v4 + 160);
    *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = *(_OWORD *)(v4 + 176);
    *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = *(_OWORD *)(v4 + 192);
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(v5 + 88) = *(_QWORD *)(v4 + 216);
      *(_QWORD *)(v5 + 96) = *(_QWORD *)(v4 + 224);
      *(_QWORD *)(v5 + 104) = *(_QWORD *)(v4 + 232);
      *(_QWORD *)(v5 + 112) = *(_QWORD *)(v4 + 240);
      *(_QWORD *)(v5 + 120) = *(_QWORD *)(v4 + 248);
      *(_QWORD *)(v5 + 128) = *(_QWORD *)(v4 + 256);
      KeCopyLastBranchInformation(v9, v4);
    }
    else
    {
      *(_QWORD *)(v5 + 128) = 0LL;
    }
    *(_QWORD *)(v5 + 136) = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(v4 + 344);
    *(_QWORD *)(v5 + 264) = *(_QWORD *)(v4 + 360);
    *(_QWORD *)(v5 + 168) = *(_QWORD *)(v4 + 384);
    *(_QWORD *)(v5 + 160) = *(_QWORD *)(v3 + 256);
    *(_QWORD *)(v5 + 192) = *(_QWORD *)(v3 + 264);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(v3 + 272);
    *(_QWORD *)(v5 + 232) = *(_QWORD *)(v3 + 280);
    *(_QWORD *)(v5 + 240) = *(_QWORD *)(v3 + 288);
    *(_QWORD *)(v5 + 248) = *(_QWORD *)(v3 + 296);
    *(_QWORD *)(v5 + 256) = *(_QWORD *)(v3 + 304);
    KeSaveLegacyFloatingPointControlWord();
  }
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = *(_OWORD *)(v3 + 48);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = *(_OWORD *)(v3 + 64);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = *(_OWORD *)(v3 + 80);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = *(_OWORD *)(v3 + 96);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = *(_OWORD *)(v3 + 112);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = *(_OWORD *)(v3 + 128);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = *(_OWORD *)(v3 + 144);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = *(_OWORD *)(v3 + 160);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = *(_OWORD *)(v3 + 176);
  *(_OWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = *(_OWORD *)(v3 + 192);
  *(_DWORD *)(((v5 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_DWORD *)(v4 + 44);
  if ( (*(_DWORD *)(v5 + 128) & 0x355LL) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(v5 + 1264), 4u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(v5 + 1264), 4u);
  result = 0LL;
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
    __writecr8(0LL);
  return result;
}
