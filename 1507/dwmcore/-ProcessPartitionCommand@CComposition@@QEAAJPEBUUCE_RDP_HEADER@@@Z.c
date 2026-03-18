/*
 * XREFs of ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C630
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180050500 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180068664 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJI@Z @ 0x180068794 (-OpenChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C468 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::ProcessPartitionCommand(
        CPartitionVerticalBlankScheduler **this,
        const struct UCE_RDP_HEADER *a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // eax
  volatile signed __int32 *v5; // rsi
  __int64 *v6; // rbx
  int v7; // r15d
  __int64 v8; // rax
  void **v9; // rcx
  __int64 **v10; // rax
  __int64 *v11; // rdi
  CDataStreamBlock *v12; // rdi
  unsigned int *(__fastcall *v13)(CDataStreamBlock *); // r15
  unsigned int *WrittenSize; // rax
  unsigned int *v15; // r12
  char *(__fastcall *v16)(CDataStreamBlock *); // r15
  unsigned int *Data; // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  WPF::ProcessHeapImpl *v23; // rdi
  __int64 *v24; // rbp
  void (__fastcall *v25)(WPF::ProcessHeapImpl *, void *); // r14
  void (__fastcall *v26)(WPF::ProcessHeapImpl *, void *); // r14
  void (__fastcall *v27)(WPF::ProcessHeapImpl *, void *); // rbp
  int v29; // eax
  int v30; // eax
  int v31; // eax

  v2 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 8:
      v4 = *((_DWORD *)a2 + 4);
      if ( v4 < 0x10000
        && v4 < *((_DWORD *)this + 74)
        && (v5 = (volatile signed __int32 *)*((_QWORD *)this[34] + v4)) != 0LL )
      {
        _InterlockedIncrement(v5 + 2);
        v6 = (__int64 *)*((_QWORD *)a2 + 3);
        v7 = 0;
        v8 = v6[2];
        if ( v8 )
        {
          v9 = (void **)v6[1];
          v10 = (__int64 **)(v8 + 8);
          *v10 = v6;
          v10[1] = (__int64 *)v9;
          if ( *v9 != v6 )
            __fastfail(3u);
          *v9 = v10;
          v6[1] = (__int64)v10;
          v6[2] = 0LL;
        }
        v11 = (__int64 *)*v6;
        if ( (__int64 *)*v6 != v6 )
        {
          if ( v11 )
            v12 = (CDataStreamBlock *)(v11 - 1);
          else
            v12 = 0LL;
          while ( 1 )
          {
            v13 = *(unsigned int *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)v12 + 8LL);
            if ( v13 == CDataStreamBlock::GetWrittenSize )
              WrittenSize = CDataStreamBlock::GetWrittenSize(v12);
            else
              WrittenSize = v13(v12);
            v15 = WrittenSize;
            v16 = *(char *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)v12 + 16LL);
            if ( v16 == CDataStreamBlock::GetData )
              Data = (unsigned int *)CDataStreamBlock::GetData(v12);
            else
              Data = (unsigned int *)v16(v12);
            v18 = CComposition::ProcessCommandBatch(this, Data, *v15, (struct CChannelContext *)v5);
            v7 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x239u);
              goto LABEL_20;
            }
            v19 = *((_QWORD *)v12 + 1);
            if ( !v19 )
              break;
            v12 = (CDataStreamBlock *)(v19 - 8);
            if ( !v12 )
              goto LABEL_48;
            v20 = (__int64 *)((char *)v12 + 8);
LABEL_19:
            if ( v20 == v6 )
              goto LABEL_20;
          }
          v12 = 0LL;
LABEL_48:
          v20 = 0LL;
          goto LABEL_19;
        }
LABEL_20:
        while ( 1 )
        {
          v21 = (__int64 *)*v6;
          if ( (__int64 *)*v6 == v6 )
            break;
          v22 = *v21;
          if ( (__int64 *)v21[1] != v6 || *(__int64 **)(v22 + 8) != v21 )
            __fastfail(3u);
          v23 = WPF::g_pProcessHeap;
          v24 = v21 - 1;
          *v6 = v22;
          *(_QWORD *)(v22 + 8) = v6;
          v25 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)v23 + 32LL);
          if ( v25 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(v23, v24);
          else
            v25(v23, v24);
        }
        v26 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v26 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)v6[2]);
        else
          v26(WPF::g_pProcessHeap, (void *)v6[2]);
        v27 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v27 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
        else
          v27(WPF::g_pProcessHeap, v6);
        if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
      }
      else
      {
        v7 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xCC4u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x22Eu);
      }
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1D5u);
      break;
    case 5:
      v30 = CComposition::OpenChannel((CComposition *)this, *((_DWORD *)a2 + 4));
      v2 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1CDu);
      break;
    case 6:
      v31 = CComposition::CloseChannel((CComposition *)this, *((_DWORD *)a2 + 4));
      v2 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1D9u);
      break;
    case 7:
      v29 = CComposition::ProcessDataOnChannel((CComposition *)this, a2);
      v2 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x1D1u);
      break;
  }
  return v2;
}
