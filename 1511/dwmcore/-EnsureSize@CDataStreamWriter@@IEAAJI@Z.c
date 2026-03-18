/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800A006C
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18009F6F0 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009F970 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009FF2C (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  int v5; // ebx
  __int64 v6; // rdi
  unsigned int (__fastcall *v7)(CDataStreamBlock *__hidden); // r14
  unsigned int v8; // r14d
  unsigned int *v9; // rdi
  unsigned int *(__fastcall *v10)(CDataStreamBlock *__hidden); // r15
  unsigned int *v11; // rax
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
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = **(unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))v6;
    if ( v7 == CDataStreamBlock::GetAllocatedSize )
      v8 = *(_DWORD *)(v6 + 24);
    else
      v8 = v7(*((CDataStreamBlock **)this + 2));
    v9 = (unsigned int *)*((_QWORD *)this + 2);
    v10 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v9 + 8LL);
    if ( v10 == CDataStreamBlock::GetWrittenSize )
      v11 = v9 + 7;
    else
      v11 = v10(*((CDataStreamBlock **)this + 2));
    v2 = v8 - *v11;
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
