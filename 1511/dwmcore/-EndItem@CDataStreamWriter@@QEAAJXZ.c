/*
 * XREFs of ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FD64
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18009F6F0 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 *     ?EndCommand@CChannel@@QEAAJXZ @ 0x1800A0B50 (-EndCommand@CChannel@@QEAAJXZ.c)
 *     ?MilChannel_EndCommand@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800A0EC0 (-MilChannel_EndCommand@@YAJPEAUMIL_CHANNEL__@@@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800A10D8 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z @ 0x1800A13F8 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800A0BA0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 */

__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  unsigned int v2; // edx
  int v3; // edi
  unsigned int v4; // ecx
  CDataStreamBlock *v5; // rdi
  unsigned int v6; // ebp
  unsigned int *(__fastcall *v7)(CDataStreamBlock *__hidden); // rsi
  unsigned int *WrittenSize; // rax
  CDataStreamBlock *v9; // rdi
  unsigned int *v10; // rsi
  unsigned int *(__fastcall *v11)(CDataStreamBlock *__hidden); // r14
  unsigned int *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-28h]
  unsigned int v18; // [rsp+20h] [rbp-28h]

  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10) )
  {
    v3 = -2147418113;
    v17 = 204;
LABEL_18:
    v16 = v3;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
    return (unsigned int)v3;
  }
  v2 = *((_DWORD *)this + 10);
  v3 = -2147024362;
  v4 = (v2 + 3) & 0xFFFFFFFC;
  if ( v4 >= v2 )
  {
    *((_DWORD *)this + 10) = v4;
    v3 = 0;
  }
  if ( v3 < 0 )
  {
    v17 = 224;
    goto LABEL_18;
  }
  v5 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v6 = *((_DWORD *)this + 10) - v2;
  v7 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v5 + 8LL);
  if ( v7 == CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(v5);
  else
    WrittenSize = v7(*((CDataStreamBlock **)this + 2));
  v9 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v10 = WrittenSize;
  v11 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v9 + 8LL);
  if ( v11 == CDataStreamBlock::GetWrittenSize )
    v12 = CDataStreamBlock::GetWrittenSize(v9);
  else
    v12 = v11(v9);
  v13 = *v12;
  if ( v13 + v6 < v13 )
  {
    *v10 = -1;
    v18 = 530;
    goto LABEL_21;
  }
  *v10 = v13 + v6;
  v14 = *((_DWORD *)this + 7);
  if ( v14 + v6 < v14 )
  {
    *((_DWORD *)this + 7) = -1;
    v18 = 531;
LABEL_21:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v18);
    v16 = -2147024362;
    v17 = 228;
    goto LABEL_22;
  }
  *((_DWORD *)this + 7) = v14 + v6;
  v3 = 0;
  **((_DWORD **)this + 4) = *((_DWORD *)this + 10);
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  return (unsigned int)v3;
}
