/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004F9A0
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18004E490 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetAllocatedSize@CDataStreamBlock@@UEAAIXZ @ 0x1800504D0 (-GetAllocatedSize@CDataStreamBlock@@UEAAIXZ.c)
 *     ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800504E0 (-GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  CDataStreamBlock *v2; // rdi
  unsigned int (__fastcall *v3)(CDataStreamBlock *__hidden); // rsi
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int *(__fastcall *v6)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v7; // rax
  CDataStreamBlock *v8; // rdi
  unsigned __int8 *(__fastcall *v9)(CDataStreamBlock *__hidden); // rsi
  unsigned __int8 *v10; // rax
  CDataStreamBlock *v11; // rdi
  unsigned int *(__fastcall *v12)(CDataStreamBlock *__hidden); // rsi
  unsigned int *WrittenSize; // rax
  CDataStreamBlock *v14; // rdi
  unsigned int *v15; // rsi
  unsigned int *(__fastcall *v16)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v22; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10) )
  {
    v2 = (CDataStreamBlock *)*((_QWORD *)this + 2);
    v3 = **(unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))v2;
    v4 = v3 == CDataStreamBlock::GetAllocatedSize
       ? CDataStreamBlock::GetAllocatedSize(v2)
       : v3(*((CDataStreamBlock **)this + 2));
    v5 = v4;
    v6 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**((_QWORD **)this + 2) + 8LL);
    v7 = v6 == CDataStreamBlock::GetWrittenSize
       ? CDataStreamBlock::GetWrittenSize(*((CDataStreamBlock **)this + 2))
       : v6(*((CDataStreamBlock **)this + 2));
    if ( v5 - *v7 >= 4 )
    {
      v8 = (CDataStreamBlock *)*((_QWORD *)this + 2);
      v9 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v8 + 24LL);
      if ( v9 == CDataStreamBlock::GetWritePointer )
        v10 = CDataStreamBlock::GetWritePointer(v8);
      else
        v10 = v9(*((CDataStreamBlock **)this + 2));
      *((_QWORD *)this + 4) = v10;
      *(_DWORD *)v10 = *((_DWORD *)this + 10);
      v11 = (CDataStreamBlock *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 10) = 4;
      v12 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v11 + 8LL);
      if ( v12 == CDataStreamBlock::GetWrittenSize )
        WrittenSize = CDataStreamBlock::GetWrittenSize(v11);
      else
        WrittenSize = v12(v11);
      v14 = (CDataStreamBlock *)*((_QWORD *)this + 2);
      v15 = WrittenSize;
      v16 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v14 + 8LL);
      if ( v16 == CDataStreamBlock::GetWrittenSize )
        v17 = CDataStreamBlock::GetWrittenSize(v14);
      else
        v17 = v16(v14);
      v18 = *v17;
      if ( v18 + 4 < v18 )
      {
        *v15 = -1;
        v22 = 530;
      }
      else
      {
        *v15 = v18 + 4;
        v19 = *((_DWORD *)this + 7);
        if ( v19 + 4 >= v19 )
        {
          *((_DWORD *)this + 7) = v19 + 4;
          return 0;
        }
        *((_DWORD *)this + 7) = -1;
        v22 = 531;
      }
      v20 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v22);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x87u);
      return v20;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x76u);
  return 2147549183LL;
}
