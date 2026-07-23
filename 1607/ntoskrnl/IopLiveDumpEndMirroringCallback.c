/*
 * XREFs of IopLiveDumpEndMirroringCallback @ 0x1403DABEC
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x14013B248 (RtlNumberOfSetBitsEx.c)
 *     KiSaveProcessorControlState @ 0x14015DDB0 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlCollectLivedump @ 0x1401C01E4 (HvlCollectLivedump.c)
 *     IoFillDumpHeader @ 0x1401C5444 (IoFillDumpHeader.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x1401CB1A0 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x1401CB1E0 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1403DB154 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403DB400 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403DB694 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1403DB8B8 (IopLiveDumpStartDumpDataBuffering.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403DB958 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEndMirroringCallback(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // edx
  struct _KPRCB *v5; // rsi
  __int64 v6; // rbx
  int v7; // edx
  _OWORD *v8; // rbx
  _CONTEXT *Context; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rsi
  __int64 v13; // rcx

  v1 = IopLiveDumpContext;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      IopLiveDumpTraceMirroringPhase1End();
      if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        RtlCaptureContext(CurrentPrcb->Context);
        KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v4);
      }
      else
      {
        v5 = KeGetCurrentPrcb();
        v6 = *(_QWORD *)(v1 + 384);
        RtlCaptureContext(v5->Context);
        KiSaveProcessorControlState((__int64)&v5->ProcessorState, v7);
        v8 = (_OWORD *)(v6 + 840);
        if ( v8 )
        {
          memset(v8, 0, 0xBB8uLL);
          Context = v5->Context;
          v10 = 9LL;
          do
          {
            *v8 = *(_OWORD *)&Context->P1Home;
            v8[1] = *(_OWORD *)&Context->P3Home;
            v8[2] = *(_OWORD *)&Context->P5Home;
            v8[3] = *(_OWORD *)&Context->ContextFlags;
            v8[4] = *(_OWORD *)&Context->SegGs;
            v8[5] = *(_OWORD *)&Context->Dr1;
            v8[6] = *(_OWORD *)&Context->Dr3;
            v8 += 8;
            v11 = *(_OWORD *)&Context->Dr7;
            Context = (_CONTEXT *)((char *)Context + 128);
            *(v8 - 1) = v11;
            --v10;
          }
          while ( v10 );
          *v8 = *(_OWORD *)&Context->P1Home;
          v8[1] = *(_OWORD *)&Context->P3Home;
          v8[2] = *(_OWORD *)&Context->P5Home;
          v8[3] = *(_OWORD *)&Context->ContextFlags;
          v8[4] = *(_OWORD *)&Context->SegGs;
        }
      }
      if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
        v12 = 0LL;
      else
        v12 = v1 + 496;
      v2 = IopLiveDumpMarkRequiredDumpData(v1, v12);
      if ( v2 >= 0 )
      {
        if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
          *(_QWORD *)(v1 + 104) = RtlNumberOfSetBitsEx((_QWORD *)(v1 + 368));
        v2 = IopLiveDumpMarkImportantDumpData(v1 + 368, v12);
        if ( v2 >= 0 )
        {
          if ( (*(_DWORD *)(v1 + 80) & 1) != 0 )
          {
            IopLiveDumpPopulateBitmapForDump(v1);
          }
          else
          {
            IoFillDumpHeader(
              *(_NT_PRODUCT_TYPE **)(v1 + 384),
              6,
              *(_DWORD *)v1,
              *(_QWORD *)(v1 + 8),
              *(_QWORD *)(v1 + 16),
              *(_QWORD *)(v1 + 24),
              *(_QWORD *)(v1 + 32),
              (__int64)KeGetCurrentThread());
            if ( *(_QWORD *)(v1 + 504) )
              HvlCollectLivedump(v13, *(_QWORD *)(v1 + 184), (_QWORD *)(v1 + 176), v1 + 128);
            IopLiveDumpPopulateBitmapForDump(v1);
            IopLiveDumpStartDumpDataBuffering(v1 + 240);
          }
          v2 = 0;
        }
      }
      IopLiveDumpUncorralProcessors(v1 + 240);
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    IopLiveDumpTraceMirroringPhase0End();
    *(_QWORD *)(v1 + 176) = 0LL;
    IopLiveDumpCorralProcessors((char *)(v1 + 240));
    return 0;
  }
  return (unsigned int)v2;
}
