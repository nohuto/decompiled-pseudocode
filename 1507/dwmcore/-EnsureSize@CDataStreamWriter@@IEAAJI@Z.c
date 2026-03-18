/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004F6E4
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18004E490 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004F8AC (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004F5CC (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetAllocatedSize@CDataStreamBlock@@UEAAIXZ @ 0x1800504D0 (-GetAllocatedSize@CDataStreamBlock@@UEAAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  int v5; // ebx
  unsigned int (__fastcall ***v6)(CDataStreamBlock *__hidden); // rdi
  unsigned int (__fastcall *v7)(CDataStreamBlock *__hidden); // r14
  unsigned int AllocatedSize; // eax
  unsigned int v9; // r14d
  unsigned int *(__fastcall *v10)(CDataStreamBlock *__hidden); // r15
  unsigned int *WrittenSize; // rax
  __int64 v12; // rdi
  int v14; // r14d
  int NewBlock; // eax
  unsigned int v16; // [rsp+20h] [rbp-28h]

  v2 = 0;
  v3 = a2;
  v5 = -2147024362;
  if ( ((a2 + 3) & 0xFFFFFFFC) >= a2 )
  {
    v3 = (a2 + 3) & 0xFFFFFFFC;
    v5 = 0;
  }
  if ( v5 < 0 )
  {
    v16 = 367;
    goto LABEL_25;
  }
  v6 = (unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = **v6;
    if ( v7 == CDataStreamBlock::GetAllocatedSize )
      AllocatedSize = CDataStreamBlock::GetAllocatedSize(*((CDataStreamBlock **)this + 2));
    else
      AllocatedSize = v7(*((CDataStreamBlock **)this + 2));
    v9 = AllocatedSize;
    v10 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)this + 2) + 8LL);
    if ( v10 == CDataStreamBlock::GetWrittenSize )
      WrittenSize = CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)this + 2));
    else
      WrittenSize = v10(*((CDataStreamBlock **)this + 2));
    v2 = v9 - *WrittenSize;
  }
  v12 = *((_QWORD *)this + 2);
  if ( !v12 || v2 < v3 )
  {
    v14 = 0x10000;
    if ( *((_DWORD *)this + 6) < 0x10000u )
      v14 = *((_DWORD *)this + 6);
    if ( v12 && !*(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)this + 2)) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
    if ( v14 + v3 >= v3 )
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v14 + v3);
      v5 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      return (unsigned int)v5;
    }
    v5 = -2147024362;
    v16 = 441;
LABEL_25:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v16);
  }
  return (unsigned int)v5;
}
