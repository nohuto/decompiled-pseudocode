/*
 * XREFs of ?MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z @ 0x18009F500
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800A0BA0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetAllocatedSize@CDataStreamBlock@@UEAAIXZ @ 0x1800A0BB0 (-GetAllocatedSize@CDataStreamBlock@@UEAAIXZ.c)
 *     ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800A0BC0 (-GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall MilChannel_AppendCommandData(struct MIL_CHANNEL__ *a1, void *a2, unsigned int a3)
{
  size_t v3; // rbp
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int (__fastcall *v7)(CDataStreamBlock *__hidden); // r14
  unsigned int AllocatedSize; // eax
  unsigned int v9; // edi
  unsigned int *(__fastcall *v10)(CDataStreamBlock *__hidden); // r15
  unsigned int *WrittenSize; // rax
  unsigned __int8 *(__fastcall *v12)(CDataStreamBlock *__hidden); // r14
  unsigned __int8 *v13; // rax
  unsigned int *(__fastcall *v14)(CDataStreamBlock *__hidden); // r14
  unsigned int *v15; // rax
  unsigned int *v16; // r15
  unsigned int *(__fastcall *v17)(CDataStreamBlock *__hidden); // r14
  unsigned int *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // esi
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-28h]
  unsigned int v25; // [rsp+20h] [rbp-28h]

  v3 = a3;
  if ( !a1 )
  {
    v24 = 435;
    goto LABEL_30;
  }
  if ( !a2 && a3 )
  {
    v24 = 439;
LABEL_30:
    v23 = -2147024809;
    v6 = -2147024809;
LABEL_36:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
    return (unsigned int)v6;
  }
  if ( !*((_BYTE *)a1 + 233) )
  {
    v21 = -2003303406;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1C4u);
    v6 = -2003303406;
LABEL_35:
    v24 = 442;
    v23 = v21;
    goto LABEL_36;
  }
  v5 = *((_QWORD *)a1 + 22);
  v6 = 0;
  if ( !*(_QWORD *)(v5 + 32) && !*(_DWORD *)(v5 + 40)
    || ((v7 = ***(unsigned int (__fastcall ****)(CDataStreamBlock *__hidden))(v5 + 16),
         v7 != CDataStreamBlock::GetAllocatedSize)
      ? (AllocatedSize = v7(*(CDataStreamBlock **)(v5 + 16)))
      : (AllocatedSize = CDataStreamBlock::GetAllocatedSize(*(CDataStreamBlock **)(v5 + 16))),
        (v9 = AllocatedSize,
         v10 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**(_QWORD **)(v5 + 16) + 8LL),
         v10 != CDataStreamBlock::GetWrittenSize)
      ? (WrittenSize = v10(*(CDataStreamBlock **)(v5 + 16)))
      : (WrittenSize = CDataStreamBlock::GetWrittenSize(*(CDataStreamBlock **)(v5 + 16))),
        v9 - *WrittenSize < (unsigned int)v3) )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xA3u);
    v21 = -2147418113;
    goto LABEL_34;
  }
  if ( (_DWORD)v3 )
  {
    v12 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(**(_QWORD **)(v5 + 16) + 24LL);
    if ( v12 == CDataStreamBlock::GetWritePointer )
      v13 = CDataStreamBlock::GetWritePointer(*(CDataStreamBlock **)(v5 + 16));
    else
      v13 = v12(*(CDataStreamBlock **)(v5 + 16));
    memcpy_0(v13, a2, v3);
    v14 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**(_QWORD **)(v5 + 16) + 8LL);
    if ( v14 == CDataStreamBlock::GetWrittenSize )
      v15 = CDataStreamBlock::GetWrittenSize(*(CDataStreamBlock **)(v5 + 16));
    else
      v15 = v14(*(CDataStreamBlock **)(v5 + 16));
    v16 = v15;
    v17 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**(_QWORD **)(v5 + 16) + 8LL);
    if ( v17 == CDataStreamBlock::GetWrittenSize )
      v18 = CDataStreamBlock::GetWrittenSize(*(CDataStreamBlock **)(v5 + 16));
    else
      v18 = v17(*(CDataStreamBlock **)(v5 + 16));
    v19 = *v18;
    if ( v19 + (unsigned int)v3 < v19 )
    {
      *v16 = -1;
      v25 = 530;
    }
    else
    {
      *v16 = v19 + v3;
      v20 = *(_DWORD *)(v5 + 28);
      if ( v20 + (unsigned int)v3 >= v20 )
      {
        *(_DWORD *)(v5 + 28) = v20 + v3;
        v6 = 0;
        *(_DWORD *)(v5 + 40) += v3;
        goto LABEL_20;
      }
      *(_DWORD *)(v5 + 28) = -1;
      v25 = 531;
    }
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v25);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xAFu);
  }
LABEL_20:
  v21 = v6;
  if ( v6 < 0 )
  {
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1C7u);
    goto LABEL_35;
  }
  return (unsigned int)v6;
}
