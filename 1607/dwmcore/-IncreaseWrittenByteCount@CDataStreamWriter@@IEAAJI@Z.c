/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18004BC8C
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C454 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18004C540 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  CDataStreamBlock *v3; // rcx
  __int64 (*v5)(void); // rax
  unsigned int *WrittenSize; // rax
  CDataStreamBlock *v7; // rcx
  unsigned int *v8; // rdi
  __int64 (*v9)(void); // rax
  unsigned int *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v3 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
  if ( (char *)v5 == (char *)CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(v3);
  else
    WrittenSize = (unsigned int *)v5();
  v7 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v8 = WrittenSize;
  v9 = *(__int64 (**)(void))(*(_QWORD *)v7 + 8LL);
  if ( (char *)v9 == (char *)CDataStreamBlock::GetWrittenSize )
    v10 = CDataStreamBlock::GetWrittenSize(v7);
  else
    v10 = (unsigned int *)v9();
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
