/*
 * XREFs of ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18004BFC8
 * Callers:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800477B4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18004A3B0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004BD28 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18004C540 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureItem(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ebx
  CDataStreamBlock *v7; // rcx
  __int64 (*v8)(void); // rax
  unsigned int *WrittenSize; // rax
  __int64 v10; // rcx
  int v12; // ebx
  int NewBlock; // eax

  v2 = a2 + 4;
  v4 = -2147024362;
  if ( a2 + 4 < a2 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x157u);
    return v4;
  }
  v5 = 0LL;
  v6 = -2147024362;
  if ( ((v2 + 3) & 0xFFFFFFFC) >= v2 )
  {
    v2 = (v2 + 3) & 0xFFFFFFFC;
    v6 = 0;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x16Fu);
  }
  else
  {
    v7 = (CDataStreamBlock *)*((_QWORD *)this + 2);
    if ( v7 )
    {
      v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 8LL);
      if ( (char *)v8 == (char *)CDataStreamBlock::GetWrittenSize )
        WrittenSize = CDataStreamBlock::GetWrittenSize(v7);
      else
        WrittenSize = (unsigned int *)v8();
      v5 = (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *WrittenSize;
    }
    v10 = *((_QWORD *)this + 2);
    if ( !v10 || (unsigned int)v5 < v2 )
    {
      v12 = 0x10000;
      if ( *((_DWORD *)this + 6) < 0x10000u )
        v12 = *((_DWORD *)this + 6);
      if ( v10 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, v5) )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 2));
        *((_QWORD *)this + 2) = 0LL;
      }
      if ( v12 + v2 < v2 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1B9u);
        goto LABEL_23;
      }
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v12 + v2);
      v6 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x1BBu);
    }
  }
  v4 = v6;
  if ( v6 < 0 )
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x159u);
  return v4;
}
