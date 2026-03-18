/*
 * XREFs of ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180049D10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::RenderDataUpdate(CDataStreamWriter **this, int a2, struct IRenderDataBuilder *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // r9d
  int v8; // eax
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-10h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 22));
  v11[0] = 40;
  v12 = 0;
  v11[1] = a2;
  if ( a3 )
    v7 = *((_DWORD *)a3 + 10);
  else
    v7 = 0;
  v12 = v7;
  v8 = CChannel::BeginCommand((CChannel *)this, v11, 0xCu, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x46Au);
  }
  else
  {
    if ( v12 )
      CDataStreamWriter::AddItemData(this[21], *((const void **)a3 + 2), v12);
    CDataStreamWriter::EndItem(this[21]);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
