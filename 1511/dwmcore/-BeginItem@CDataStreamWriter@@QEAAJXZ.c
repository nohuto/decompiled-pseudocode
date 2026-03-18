/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FA40
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18009F6F0 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  __int64 v2; // rdi
  unsigned int (__fastcall *v3)(CDataStreamBlock *__hidden); // rsi
  int v4; // edi
  __int64 v5; // rsi
  unsigned int *(__fastcall *v6)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v7; // rax
  unsigned int *v8; // rdi
  unsigned __int8 *(__fastcall *v9)(CDataStreamBlock *__hidden); // rsi
  _DWORD *v10; // rax
  int v11; // ecx
  CDataStreamBlock *v12; // rdi
  unsigned int *(__fastcall *v13)(CDataStreamBlock *__hidden); // rsi
  unsigned int *v14; // rsi
  unsigned int *v15; // rdi
  unsigned int *(__fastcall *v16)(CDataStreamBlock *__hidden); // rbp
  unsigned int *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v22; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10) )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = **(unsigned int (__fastcall ***)(CDataStreamBlock *__hidden))v2;
    v4 = v3 == CDataStreamBlock::GetAllocatedSize ? *(_DWORD *)(v2 + 24) : v3(*((CDataStreamBlock **)this + 2));
    v5 = *((_QWORD *)this + 2);
    v6 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v5 + 8LL);
    v7 = v6 == CDataStreamBlock::GetWrittenSize ? (unsigned int *)(v5 + 28) : v6(*((CDataStreamBlock **)this + 2));
    if ( v4 - *v7 >= 4 )
    {
      v8 = (unsigned int *)*((_QWORD *)this + 2);
      v9 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v8 + 24LL);
      if ( v9 == CDataStreamBlock::GetWritePointer )
        v10 = (unsigned int *)((char *)v8 + v8[7] + 32);
      else
        v10 = (_DWORD *)v9(*((CDataStreamBlock **)this + 2));
      v11 = *((_DWORD *)this + 10);
      *((_QWORD *)this + 4) = v10;
      *v10 = v11;
      v12 = (CDataStreamBlock *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 10) = 4;
      v13 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v12 + 8LL);
      if ( v13 == CDataStreamBlock::GetWrittenSize )
        v14 = (unsigned int *)((char *)v12 + 28);
      else
        v14 = v13(v12);
      v15 = (unsigned int *)*((_QWORD *)this + 2);
      v16 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v15 + 8LL);
      if ( v16 == CDataStreamBlock::GetWrittenSize )
        v17 = v15 + 7;
      else
        v17 = v16(*((CDataStreamBlock **)this + 2));
      v18 = *v17;
      if ( v18 + 4 < v18 )
      {
        *v14 = -1;
        v22 = 530;
      }
      else
      {
        *v14 = v18 + 4;
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
