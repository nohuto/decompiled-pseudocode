/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009FBD0
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18009F6F0 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  size_t v4; // rdi
  __int64 v6; // rsi
  unsigned int (__fastcall *v7)(CDataStreamBlock *__hidden); // rbp
  unsigned int v8; // esi
  unsigned int *v9; // r14
  unsigned int *(__fastcall *v10)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v11; // rax
  unsigned int *v12; // rsi
  unsigned __int8 *(__fastcall *v13)(CDataStreamBlock *__hidden); // rbp
  char *v14; // rax
  unsigned int *v15; // rsi
  unsigned int *(__fastcall *v16)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v17; // r14
  unsigned int *v18; // rsi
  unsigned int *(__fastcall *v19)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // ecx

  v4 = a3;
  if ( (*((_QWORD *)this + 4) || *((_DWORD *)this + 10))
    && ((v6 = *((_QWORD *)this + 2),
         v7 = **(unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))v6,
         v7 != CDataStreamBlock::GetAllocatedSize)
      ? (v8 = v7(*((CDataStreamBlock **)this + 2)))
      : (v8 = *(_DWORD *)(v6 + 24)),
        (v9 = (unsigned int *)*((_QWORD *)this + 2),
         v10 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v9 + 8LL),
         v10 != CDataStreamBlock::GetWrittenSize)
      ? (v11 = v10(*((CDataStreamBlock **)this + 2)))
      : (v11 = v9 + 7),
        v8 - *v11 >= (unsigned int)v4) )
  {
    if ( !(_DWORD)v4 )
      return 0LL;
    v12 = (unsigned int *)*((_QWORD *)this + 2);
    v13 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v12 + 24LL);
    if ( v13 == CDataStreamBlock::GetWritePointer )
      v14 = (char *)v12 + v12[7] + 32;
    else
      v14 = (char *)v13(*((CDataStreamBlock **)this + 2));
    memcpy_0(v14, a2, v4);
    v15 = (unsigned int *)*((_QWORD *)this + 2);
    v16 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v15 + 8LL);
    if ( v16 == CDataStreamBlock::GetWrittenSize )
      v17 = v15 + 7;
    else
      v17 = v16(*((CDataStreamBlock **)this + 2));
    v18 = (unsigned int *)*((_QWORD *)this + 2);
    v19 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v18 + 8LL);
    if ( v19 == CDataStreamBlock::GetWrittenSize )
      v20 = v18 + 7;
    else
      v20 = v19(*((CDataStreamBlock **)this + 2));
    v21 = *v20;
    if ( v21 + (unsigned int)v4 < v21 )
    {
      *v17 = -1;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x212u);
    }
    else
    {
      *v17 = v21 + v4;
      v22 = *((_DWORD *)this + 7);
      if ( v22 + (unsigned int)v4 >= v22 )
      {
        *((_DWORD *)this + 7) = v22 + v4;
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
