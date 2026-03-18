/*
 * XREFs of ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004F8AC
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18004E6E0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18004F524 (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004F6E4 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800504E0 (-GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
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
LABEL_11:
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
    goto LABEL_11;
  }
  return v3;
}
