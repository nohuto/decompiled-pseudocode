/*
 * XREFs of ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800500A0
 * Callers:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilChannel_BeginCommand@@YAJPEAUMIL_CHANNEL__@@PEAXII@Z @ 0x180051090 (-MilChannel_BeginCommand@@YAJPEAUMIL_CHANNEL__@@PEAXII@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004F5CC (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004FC24 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetAllocatedSize@CDataStreamBlock@@UEAAIXZ @ 0x1800504D0 (-GetAllocatedSize@CDataStreamBlock@@UEAAIXZ.c)
 *     ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800504E0 (-GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180050650 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CChannel::BeginCommand(CChannel *this, void *a2, unsigned int a3, int a4)
{
  size_t v4; // r14
  CChannel *v5; // r13
  unsigned int v7; // ecx
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // ebx
  CDataStreamWriter **v11; // r12
  CDataStreamWriter *v12; // r13
  unsigned int v13; // esi
  unsigned int v14; // r15d
  unsigned int (__fastcall ***v15)(CDataStreamBlock *__hidden); // rdi
  unsigned int (__fastcall *v16)(CDataStreamBlock *__hidden); // r15
  unsigned int AllocatedSize; // eax
  unsigned int v18; // r15d
  unsigned int *(__fastcall *v19)(CDataStreamBlock *__hidden); // r12
  unsigned int *WrittenSize; // rax
  __int64 v21; // rdi
  int v22; // edi
  CDataStreamWriter *v23; // rbx
  CDataStreamBlock *v24; // rdi
  unsigned int (__fastcall *v25)(CDataStreamBlock *__hidden); // rsi
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned int *(__fastcall *v28)(CDataStreamBlock *__hidden); // r15
  unsigned int *v29; // rax
  CDataStreamBlock *v30; // rdi
  unsigned __int8 *(__fastcall *v31)(CDataStreamBlock *__hidden); // rsi
  unsigned __int8 *v32; // rax
  CDataStreamBlock *v33; // rdi
  unsigned int *(__fastcall *v34)(CDataStreamBlock *__hidden); // rsi
  unsigned int *v35; // rax
  CDataStreamBlock *v36; // rdi
  unsigned int *v37; // r15
  unsigned int *(__fastcall *v38)(CDataStreamBlock *__hidden); // rsi
  unsigned int *v39; // rax
  unsigned int v40; // eax
  unsigned int v41; // eax
  int v42; // edi
  CDataStreamWriter *v43; // rbx
  CDataStreamBlock *v44; // rdi
  unsigned int (__fastcall *v45)(CDataStreamBlock *__hidden); // rsi
  unsigned int v46; // eax
  unsigned int v47; // edi
  unsigned int *(__fastcall *v48)(CDataStreamBlock *__hidden); // r15
  unsigned int *v49; // rax
  CDataStreamBlock *v50; // rdi
  unsigned __int8 *(__fastcall *v51)(CDataStreamBlock *__hidden); // rsi
  unsigned __int8 *v52; // rax
  CDataStreamBlock *v53; // rdi
  unsigned int *(__fastcall *v54)(CDataStreamBlock *__hidden); // rsi
  unsigned int *v55; // rax
  CDataStreamBlock *v56; // rdi
  unsigned int *v57; // r15
  unsigned int *(__fastcall *v58)(CDataStreamBlock *__hidden); // rsi
  unsigned int *v59; // rax
  unsigned int v60; // eax
  unsigned int v61; // eax
  int v63; // eax
  int v64; // r15d
  int NewBlock; // eax
  int v66; // eax
  unsigned int v67; // [rsp+20h] [rbp-58h]
  CDataStreamWriter **v68; // [rsp+30h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+38h] [rbp-40h]

  v4 = a3;
  v5 = this;
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( *((_BYTE *)v5 + 233) )
  {
    v10 = -2003303407;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x173u);
    goto LABEL_102;
  }
  if ( (unsigned int)v4 < 4 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x17Cu);
    goto LABEL_102;
  }
  v8 = v4 + a4;
  if ( (int)v4 + a4 < (unsigned int)v4 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x187u);
    goto LABEL_102;
  }
  v9 = 0;
  v10 = 0;
  v11 = (CDataStreamWriter **)((char *)v5 + 176);
  v68 = (CDataStreamWriter **)((char *)v5 + 176);
  if ( !*((_QWORD *)v5 + 22) )
  {
    v63 = CCommandBatch::Create(v7, (struct CCommandBatch **)v5 + 22);
    v10 = v63;
    if ( v63 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x2A5u);
  }
  if ( v10 >= 0 )
  {
    v12 = *v11;
    v13 = v8 + 4;
    if ( v8 + 4 < v8 )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x157u);
      v10 = -2147024362;
      goto LABEL_76;
    }
    v14 = 0;
    v10 = -2147024362;
    if ( ((v8 + 7) & 0xFFFFFFFC) >= v13 )
    {
      v13 = (v8 + 7) & 0xFFFFFFFC;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x16Fu);
    }
    else
    {
      v15 = (unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))*((_QWORD *)v12 + 2);
      if ( v15 )
      {
        v16 = **v15;
        if ( v16 == CDataStreamBlock::GetAllocatedSize )
          AllocatedSize = CDataStreamBlock::GetAllocatedSize(*((CDataStreamBlock **)v12 + 2));
        else
          AllocatedSize = v16(*((CDataStreamBlock **)v12 + 2));
        v18 = AllocatedSize;
        v19 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)v12 + 2) + 8LL);
        if ( v19 == CDataStreamBlock::GetWrittenSize )
          WrittenSize = CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)v12 + 2));
        else
          WrittenSize = v19(*((CDataStreamBlock **)v12 + 2));
        v14 = v18 - *WrittenSize;
        v11 = v68;
      }
      v21 = *((_QWORD *)v12 + 2);
      if ( !v21 || v14 < v13 )
      {
        v64 = 0x10000;
        if ( *((_DWORD *)v12 + 6) < 0x10000u )
          v64 = *((_DWORD *)v12 + 6);
        if ( v21 && !*(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*((_QWORD *)v12 + 2)) )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *((_QWORD *)v12 + 2));
          *((_QWORD *)v12 + 2) = 0LL;
        }
        if ( v64 + v13 < v13 )
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1B9u);
          v22 = -2147024362;
LABEL_74:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x159u);
LABEL_76:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x28Eu);
          goto LABEL_19;
        }
        NewBlock = CDataStreamWriter::AllocateNewBlock(v12, v64 + v13);
        v10 = NewBlock;
        if ( NewBlock < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      }
    }
    v22 = v10;
    if ( v10 >= 0 )
    {
LABEL_19:
      v5 = this;
      goto LABEL_20;
    }
    goto LABEL_74;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x286u);
LABEL_20:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x189u);
    goto LABEL_55;
  }
  v23 = *v11;
  if ( *((_QWORD *)*v11 + 4)
    || *((_DWORD *)v23 + 10)
    || ((v24 = (CDataStreamBlock *)*((_QWORD *)v23 + 2),
         v25 = **(unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))v24,
         v25 != CDataStreamBlock::GetAllocatedSize)
      ? (v26 = v25(*((CDataStreamBlock **)v23 + 2)))
      : (v26 = CDataStreamBlock::GetAllocatedSize(v24)),
        (v27 = v26,
         v28 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)v23 + 2) + 8LL),
         v28 != CDataStreamBlock::GetWrittenSize)
      ? (v29 = v28(*((CDataStreamBlock **)v23 + 2)))
      : (v29 = CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)v23 + 2))),
        v27 - *v29 < 4) )
  {
    v42 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x76u);
    v10 = -2147418113;
    goto LABEL_100;
  }
  v30 = (CDataStreamBlock *)*((_QWORD *)v23 + 2);
  v31 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v30 + 24LL);
  if ( v31 == CDataStreamBlock::GetWritePointer )
    v32 = CDataStreamBlock::GetWritePointer(v30);
  else
    v32 = v31(*((CDataStreamBlock **)v23 + 2));
  *((_QWORD *)v23 + 4) = v32;
  *(_DWORD *)v32 = *((_DWORD *)v23 + 10);
  v33 = (CDataStreamBlock *)*((_QWORD *)v23 + 2);
  *((_DWORD *)v23 + 10) = 4;
  v34 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v33 + 8LL);
  if ( v34 == CDataStreamBlock::GetWrittenSize )
    v35 = CDataStreamBlock::GetWrittenSize(v33);
  else
    v35 = v34(v33);
  v36 = (CDataStreamBlock *)*((_QWORD *)v23 + 2);
  v37 = v35;
  v38 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v36 + 8LL);
  if ( v38 == CDataStreamBlock::GetWrittenSize )
    v39 = CDataStreamBlock::GetWrittenSize(v36);
  else
    v39 = v38(*((CDataStreamBlock **)v23 + 2));
  v40 = *v39;
  if ( v40 + 4 < v40 )
  {
    *v37 = -1;
    v67 = 530;
  }
  else
  {
    *v37 = v40 + 4;
    v41 = *((_DWORD *)v23 + 7);
    if ( v41 + 4 >= v41 )
    {
      *((_DWORD *)v23 + 7) = v41 + 4;
      v42 = 0;
      goto LABEL_37;
    }
    *((_DWORD *)v23 + 7) = -1;
    v67 = 531;
  }
  v42 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v67);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x87u);
LABEL_37:
  v10 = v42;
  if ( v42 < 0 )
  {
LABEL_100:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x18Fu);
    goto LABEL_55;
  }
  v43 = *v11;
  if ( *((_QWORD *)*v11 + 4) || *((_DWORD *)v43 + 10) )
  {
    v44 = (CDataStreamBlock *)*((_QWORD *)v43 + 2);
    v45 = **(unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))v44;
    v46 = v45 == CDataStreamBlock::GetAllocatedSize
        ? CDataStreamBlock::GetAllocatedSize(v44)
        : v45(*((CDataStreamBlock **)v43 + 2));
    v47 = v46;
    v48 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)v43 + 2) + 8LL);
    v49 = v48 == CDataStreamBlock::GetWrittenSize
        ? CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)v43 + 2))
        : v48(*((CDataStreamBlock **)v43 + 2));
    if ( v47 - *v49 >= (unsigned int)v4 )
    {
      v50 = (CDataStreamBlock *)*((_QWORD *)v43 + 2);
      v51 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v50 + 24LL);
      if ( v51 == CDataStreamBlock::GetWritePointer )
        v52 = CDataStreamBlock::GetWritePointer(v50);
      else
        v52 = v51(*((CDataStreamBlock **)v43 + 2));
      memcpy_0(v52, a2, v4);
      v53 = (CDataStreamBlock *)*((_QWORD *)v43 + 2);
      v54 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v53 + 8LL);
      if ( v54 == CDataStreamBlock::GetWrittenSize )
        v55 = CDataStreamBlock::GetWrittenSize(v53);
      else
        v55 = v54(*((CDataStreamBlock **)v43 + 2));
      v56 = (CDataStreamBlock *)*((_QWORD *)v43 + 2);
      v57 = v55;
      v58 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v56 + 8LL);
      if ( v58 == CDataStreamBlock::GetWrittenSize )
        v59 = CDataStreamBlock::GetWrittenSize(v56);
      else
        v59 = v58(*((CDataStreamBlock **)v43 + 2));
      v60 = *v59;
      if ( v60 + (unsigned int)v4 < v60 )
      {
        *v57 = -1;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x212u);
      }
      else
      {
        *v57 = v60 + v4;
        v61 = *((_DWORD *)v43 + 7);
        if ( v61 + (unsigned int)v4 >= v61 )
        {
          *((_DWORD *)v43 + 7) = v61 + v4;
          *((_DWORD *)v43 + 10) += v4;
          goto LABEL_53;
        }
        *((_DWORD *)v43 + 7) = -1;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x213u);
      }
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xAFu);
LABEL_53:
      v10 = v9;
      if ( v9 >= 0 )
      {
        *((_BYTE *)v5 + 233) = 1;
        goto LABEL_55;
      }
      goto LABEL_88;
    }
  }
  v9 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xA3u);
  v10 = -2147418113;
LABEL_88:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x191u);
  v66 = CDataStreamWriter::EndItem(*v11);
  if ( v66 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x198u);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x199u);
LABEL_55:
  if ( v10 < 0 )
LABEL_102:
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v10;
}
