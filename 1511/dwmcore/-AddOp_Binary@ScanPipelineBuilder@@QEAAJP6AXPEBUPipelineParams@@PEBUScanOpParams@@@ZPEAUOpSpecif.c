/*
 * XREFs of ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1801552FC
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x180154EE0 (-InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJPEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x18015542C (-Append_Convert@ScanPipelineBuilder@@QEAAJPEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x1801556C0 (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800770DC (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x1801551CC (-AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z.c)
 *     ?GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA?AW4BufferLocation@@XZ @ 0x1801558BC (-GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA-AW4BufferLocation@@XZ.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddOp_Binary(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  int v6; // r9d
  int v7; // r15d
  int v8; // eax
  _QWORD *v9; // r14
  int v10; // eax
  int FreeIntermediateBuffer; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-28h]
  _QWORD *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  if ( !a2 )
  {
    v5 = -2003292287;
    v15 = 218;
LABEL_3:
    v6 = v5;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v15);
    return (unsigned int)v5;
  }
  v7 = *(_DWORD *)(a1 + 32);
  v8 = DynArrayImpl<0>::AddMultiple(*(_QWORD *)a1 + 8LL, 0x30u, 1, &v16);
  v9 = v16;
  v5 = v8;
  if ( v8 >= 0 )
  {
    *v16 = a2;
    v9[4] = 0LL;
    *((_DWORD *)v9 + 10) = v7;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x343u);
  }
  if ( v5 < 0 )
  {
    v15 = 222;
    goto LABEL_3;
  }
  v9[3] = 0LL;
  v10 = ScanPipelineBuilder::AddBufferReference((_QWORD *)a1, v9 + 2, *(_DWORD *)(a1 + 24));
  v5 = v10;
  if ( v10 < 0 )
  {
    v15 = 226;
LABEL_15:
    v6 = v10;
    goto LABEL_16;
  }
  FreeIntermediateBuffer = ScanPipelineBuilder::GetFreeIntermediateBuffer(a1);
  v12 = *(int *)(a1 + 24);
  if ( (unsigned int)(v12 - 3) <= 2 )
    *(_BYTE *)(v12 + a1 + 13) = 1;
  *(_DWORD *)(a1 + 24) = FreeIntermediateBuffer;
  v13 = *(_DWORD *)(a1 + 20) + 1;
  *(_DWORD *)(a1 + 20) = v13;
  *(_DWORD *)(a1 + 32) = v13;
  *((_DWORD *)v9 + 10) = v13;
  v10 = ScanPipelineBuilder::AddBufferReference((_QWORD *)a1, v9 + 1, *(_DWORD *)(a1 + 24));
  v5 = v10;
  if ( v10 < 0 )
  {
    v15 = 230;
    goto LABEL_15;
  }
  return (unsigned int)v5;
}
