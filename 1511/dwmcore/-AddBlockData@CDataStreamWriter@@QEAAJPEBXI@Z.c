/*
 * XREFs of ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009F970
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009E610 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18009FE6C (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800A006C (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800A0BC0 (-GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddBlockData(CDataStreamWriter *this, const void *Src, unsigned int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  int v7; // eax
  unsigned __int8 *(__fastcall *v8)(CDataStreamBlock *__hidden); // rbp
  unsigned __int8 *v9; // rax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a3;
  if ( *((_QWORD *)this + 4) || *((_DWORD *)this + 10) )
  {
    v3 = -2147418113;
    v12 = 290;
    v11 = -2147418113;
    goto LABEL_14;
  }
  if ( !a3 )
    return v3;
  v7 = CDataStreamWriter::EnsureSize(this, a3);
  v3 = v7;
  if ( v7 < 0 )
  {
    v12 = 295;
LABEL_12:
    v11 = v7;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
    return v3;
  }
  v8 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)this + 2) + 24LL);
  if ( v8 == CDataStreamBlock::GetWritePointer )
    v9 = CDataStreamBlock::GetWritePointer(*((CDataStreamBlock **)this + 2));
  else
    v9 = v8(*((CDataStreamBlock **)this + 2));
  memcpy_0(v9, Src, v4);
  v7 = CDataStreamWriter::IncreaseWrittenByteCount(this, v4);
  v3 = v7;
  if ( v7 < 0 )
  {
    v12 = 299;
    goto LABEL_12;
  }
  return v3;
}
