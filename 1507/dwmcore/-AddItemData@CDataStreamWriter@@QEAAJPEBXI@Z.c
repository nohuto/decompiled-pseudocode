/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004FAE0
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18004E490 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetAllocatedSize@CDataStreamBlock@@UEAAIXZ @ 0x1800504D0 (-GetAllocatedSize@CDataStreamBlock@@UEAAIXZ.c)
 *     ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800504E0 (-GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  size_t v4; // rdi
  unsigned int (__fastcall *v6)(CDataStreamBlock *__hidden); // rbp
  unsigned int AllocatedSize; // eax
  unsigned int v8; // esi
  unsigned int *(__fastcall *v9)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v10; // rax
  unsigned __int8 *(__fastcall *v11)(CDataStreamBlock *__hidden); // rbp
  unsigned __int8 *v12; // rax
  unsigned int *(__fastcall *v13)(CDataStreamBlock *__hidden); // rbp
  unsigned int *WrittenSize; // rax
  unsigned int *v15; // r14
  unsigned int *(__fastcall *v16)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ecx

  v4 = a3;
  if ( (*((_QWORD *)this + 4) || *((_DWORD *)this + 10))
    && ((v6 = (unsigned int (__fastcall *)(CDataStreamBlock *__hidden))***((_QWORD ***)this + 2),
         v6 != CDataStreamBlock::GetAllocatedSize)
      ? (AllocatedSize = v6(*((CDataStreamBlock **)this + 2)))
      : (AllocatedSize = CDataStreamBlock::GetAllocatedSize(*((CDataStreamBlock **)this + 2))),
        (v8 = AllocatedSize,
         v9 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)this + 2) + 8LL),
         v9 != CDataStreamBlock::GetWrittenSize)
      ? (v10 = v9(*((CDataStreamBlock **)this + 2)))
      : (v10 = CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)this + 2))),
        v8 - *v10 >= (unsigned int)v4) )
  {
    if ( !(_DWORD)v4 )
      return 0LL;
    v11 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)this + 2) + 24LL);
    if ( v11 == CDataStreamBlock::GetWritePointer )
      v12 = CDataStreamBlock::GetWritePointer(*((CDataStreamBlock **)this + 2));
    else
      v12 = v11(*((CDataStreamBlock **)this + 2));
    memcpy_0(v12, a2, v4);
    v13 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)this + 2) + 8LL);
    if ( v13 == CDataStreamBlock::GetWrittenSize )
      WrittenSize = CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)this + 2));
    else
      WrittenSize = v13(*((CDataStreamBlock **)this + 2));
    v15 = WrittenSize;
    v16 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)this + 2) + 8LL);
    if ( v16 == CDataStreamBlock::GetWrittenSize )
      v17 = CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)this + 2));
    else
      v17 = v16(*((CDataStreamBlock **)this + 2));
    v18 = *v17;
    if ( v18 + (unsigned int)v4 < v18 )
    {
      *v15 = -1;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x212u);
    }
    else
    {
      *v15 = v18 + v4;
      v19 = *((_DWORD *)this + 7);
      if ( v19 + (unsigned int)v4 >= v19 )
      {
        *((_DWORD *)this + 7) = v19 + v4;
        *((_DWORD *)this + 10) += v4;
        return 0LL;
      }
      *((_DWORD *)this + 7) = -1;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x213u);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xAFu);
    return 2147942934LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xA3u);
    return 2147549183LL;
  }
}
