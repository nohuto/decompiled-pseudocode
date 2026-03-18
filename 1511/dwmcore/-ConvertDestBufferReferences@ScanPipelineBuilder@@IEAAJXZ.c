/*
 * XREFs of ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x180155820
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x180154EE0 (-InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x1801551CC (-AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::ConvertDestBufferReferences(ScanPipelineBuilder *this)
{
  int v1; // ebp
  unsigned int v2; // ebx
  int v4; // edi
  __int64 i; // rsi
  int v6; // eax

  v1 = *((_DWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
    if ( v4 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)this + 8LL) + 8LL; ; i += 48LL )
      {
        --v4;
        if ( *(_DWORD *)(i + 32) == v1 )
        {
          v6 = ScanPipelineBuilder::AddBufferReference(this, (_QWORD *)i, 1);
          v2 = v6;
          if ( v6 < 0 )
            break;
        }
        if ( !v4 )
          return v2;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2CAu);
    }
  }
  return v2;
}
