/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIIPEBUMilRectF@@0PEBK@Z @ 0x1800481C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CDataStreamWriter **this,
        int a2,
        unsigned int a3,
        const struct MilRectF *a4,
        const struct MilRectF *a5,
        const unsigned int *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  _DWORD v17[3]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v18[2]; // [rsp+3Ch] [rbp-14h]
  unsigned int v19; // [rsp+44h] [rbp-Ch]

  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 22));
  v17[0] = 316;
  *(_QWORD *)v18 = 0LL;
  v19 = 0;
  v17[1] = a2;
  v17[2] = a3;
  if ( 16 * (unsigned __int64)a3 > 0xFFFFFFFF )
  {
    v16 = 2623;
    goto LABEL_15;
  }
  v11 = 4LL * a3;
  v18[0] = 16 * a3;
  v18[1] = 16 * a3;
  if ( v11 > 0xFFFFFFFF )
  {
    v16 = 2625;
    goto LABEL_15;
  }
  v12 = 32 * a3;
  v19 = 4 * a3;
  if ( 32 * a3 < 16 * a3 )
  {
    v16 = 2628;
    goto LABEL_15;
  }
  if ( (unsigned int)v11 + v12 < v12 )
  {
    v16 = 2629;
LABEL_15:
    v14 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v16);
    goto LABEL_7;
  }
  v13 = CChannel::BeginCommand((CChannel *)this, v17, 0x18u, v11 + v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA46u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[21], a4, v18[0]);
    CDataStreamWriter::AddItemData(this[21], a5, v18[1]);
    CDataStreamWriter::AddItemData(this[21], a6, v19);
    CDataStreamWriter::EndItem(this[21]);
  }
LABEL_7:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v14;
}
