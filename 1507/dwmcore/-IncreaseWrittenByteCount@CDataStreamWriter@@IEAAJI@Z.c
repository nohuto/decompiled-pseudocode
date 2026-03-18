/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18004F524
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004F8AC (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  CDataStreamBlock *v2; // rdi
  unsigned int *(__fastcall *v5)(CDataStreamBlock *__hidden); // rsi
  unsigned int *WrittenSize; // rax
  CDataStreamBlock *v7; // rdi
  unsigned int *v8; // rsi
  unsigned int *(__fastcall *v9)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-28h]

  v2 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v5 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v2 + 8LL);
  if ( v5 == CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(v2);
  else
    WrittenSize = v5(*((CDataStreamBlock **)this + 2));
  v7 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v8 = WrittenSize;
  v9 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v7 + 8LL);
  if ( v9 == CDataStreamBlock::GetWrittenSize )
    v10 = CDataStreamBlock::GetWrittenSize(v7);
  else
    v10 = v9(v7);
  v11 = *v10;
  if ( v11 + a2 < v11 )
  {
    *v8 = -1;
    v15 = 530;
    goto LABEL_13;
  }
  *v8 = v11 + a2;
  v12 = *((_DWORD *)this + 7);
  if ( v12 + a2 < v12 )
  {
    *((_DWORD *)this + 7) = -1;
    v15 = 531;
LABEL_13:
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v15);
    return v13;
  }
  *((_DWORD *)this + 7) = v12 + a2;
  return 0;
}
