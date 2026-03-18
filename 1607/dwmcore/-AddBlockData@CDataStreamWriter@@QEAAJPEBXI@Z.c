/*
 * XREFs of ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C454
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18004E39C (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18004BC8C (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004BE4C (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x18004C550 (-GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::AddBlockData(CDataStreamWriter *this, const void *Src, unsigned int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  int v7; // eax
  CDataStreamBlock *v8; // rcx
  __int64 (*v9)(void); // rax
  unsigned __int8 *v10; // rax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a3;
  if ( *((_QWORD *)this + 4) || *((_DWORD *)this + 10) )
  {
    v3 = -2147418113;
    v13 = 290;
    v12 = -2147418113;
    goto LABEL_14;
  }
  if ( !a3 )
    return v3;
  v7 = CDataStreamWriter::EnsureSize(this, a3);
  v3 = v7;
  if ( v7 < 0 )
  {
    v13 = 295;
    goto LABEL_12;
  }
  v8 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 24LL);
  if ( (char *)v9 == (char *)CDataStreamBlock::GetWritePointer )
    v10 = CDataStreamBlock::GetWritePointer(v8);
  else
    v10 = (unsigned __int8 *)v9();
  memcpy_0(v10, Src, v4);
  v7 = CDataStreamWriter::IncreaseWrittenByteCount(this, v4);
  v3 = v7;
  if ( v7 < 0 )
  {
    v13 = 299;
LABEL_12:
    v12 = v7;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v13);
  }
  return v3;
}
