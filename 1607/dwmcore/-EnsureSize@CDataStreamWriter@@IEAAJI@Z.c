/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004BE4C
 * Callers:
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180049B50 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C454 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004BD28 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  _DWORD *v6; // rcx
  __int64 (*v7)(void); // rax
  _DWORD *v8; // rbp
  __int64 v9; // rcx
  int v11; // ebx
  int NewBlock; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v4 = 0LL;
  v5 = -2147024362;
  if ( ((a2 + 3) & 0xFFFFFFFC) >= a2 )
  {
    a2 = (a2 + 3) & 0xFFFFFFFC;
    v5 = 0;
  }
  if ( v5 < 0 )
  {
    v13 = 367;
    goto LABEL_22;
  }
  v6 = (_DWORD *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)CDataStreamBlock::GetWrittenSize )
      v8 = v6 + 7;
    else
      v8 = (_DWORD *)v7();
    v4 = (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *v8;
  }
  v9 = *((_QWORD *)this + 2);
  if ( !v9 || (unsigned int)v4 < a2 )
  {
    v11 = 0x10000;
    if ( *((_DWORD *)this + 6) < 0x10000u )
      v11 = *((_DWORD *)this + 6);
    if ( v9 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v4) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
    if ( v11 + a2 >= a2 )
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v11 + a2);
      v5 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      return (unsigned int)v5;
    }
    v5 = -2147024362;
    v13 = 441;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v13);
  }
  return (unsigned int)v5;
}
