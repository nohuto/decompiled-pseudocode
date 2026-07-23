/*
 * XREFs of KeContextFromKframes @ 0x1400F22A0
 * Callers:
 *     KiSaveProcessorState @ 0x140083858 (KiSaveProcessorState.c)
 *     KiInitializeUserApc @ 0x1400A6214 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KeCopyContextFromUch @ 0x140651230 (KeCopyContextFromUch.c)
 *     KiCaptureUmsThreadContext @ 0x140651BF0 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     RtlXSave @ 0x140083D0C (RtlXSave.c)
 *     KeCopyLastBranchInformation @ 0x1400F2634 (KeCopyLastBranchInformation.c)
 *     KiCopyXStateArea @ 0x1401D62E4 (KiCopyXStateArea.c)
 */

__int64 __fastcall KeContextFromKframes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  int v7; // esi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  _QWORD *SparePtr; // rcx
  _QWORD *v12; // rax

  v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  v7 = *(_DWORD *)(a3 + 48);
  if ( (v7 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *(_WORD *)(a1 + 368);
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v7 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v7 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 160) = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a3 + 144) = *(_QWORD *)(a2 + 256);
    *(_QWORD *)(a3 + 176) = *(_QWORD *)(a2 + 264);
    *(_QWORD *)(a3 + 168) = *(_QWORD *)(a2 + 272);
    *(_QWORD *)(a3 + 216) = *(_QWORD *)(a2 + 280);
    *(_QWORD *)(a3 + 224) = *(_QWORD *)(a2 + 288);
    *(_QWORD *)(a3 + 232) = *(_QWORD *)(a2 + 296);
    *(_QWORD *)(a3 + 240) = *(_QWORD *)(a2 + 304);
  }
  if ( (v7 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      v10 = *(int *)(a3 + 1248);
      SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
      if ( !SparePtr )
        goto LABEL_24;
      v12 = (_QWORD *)*SparePtr;
      if ( *SparePtr )
      {
        do
        {
          SparePtr = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      a3 = SparePtr[5];
      if ( a3 )
        KiCopyXStateArea(v3 + v10 + 720, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, a3);
      else
LABEL_24:
        RtlXSave((_DWORD *)(v3 + v10 + 720), MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, a3);
    }
    *(_DWORD *)(v3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(v3 + 280) = *(_DWORD *)(a1 + 44);
  }
  result = v7 & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
      _fxsave((void *)(v3 + 256));
    *(_OWORD *)(v3 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v3 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v3 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(v3 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(v3 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(v3 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(v3 + 512) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v3 + 528) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v3 + 544) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(v3 + 560) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(v3 + 576) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(v3 + 592) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(v3 + 608) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(v3 + 624) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(v3 + 640) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(v3 + 656) = *(_OWORD *)(a2 + 192);
    *(_DWORD *)(v3 + 52) = *(_DWORD *)(a1 + 44);
    result = *(unsigned int *)(a1 + 44);
    *(_DWORD *)(v3 + 280) = result;
  }
  if ( (v7 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(v3 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(v3 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(v3 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(v3 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(v3 + 104) = *(_QWORD *)(a1 + 248);
      v9 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      v9 = 0LL;
      *(_QWORD *)(v3 + 72) = 0LL;
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_QWORD *)(v3 + 88) = 0LL;
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_QWORD *)(v3 + 104) = 0LL;
    }
    *(_QWORD *)(v3 + 112) = v9;
    result = KeCopyLastBranchInformation(v3, a1);
  }
  if ( !CurrentIrql )
  {
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
