/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180115FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::VisualGroupUpdate(
        struct CCommandBatch **this,
        __int32 a2,
        const unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = (struct _RTL_CRITICAL_SECTION *)(this + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 22));
  v9 = 4LL * a4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( v9 > 0xFFFFFFFF )
  {
    v15 = 1741;
    goto LABEL_10;
  }
  v10 = 4LL * a5;
  si128.m128i_i32[2] = 4 * a4;
  if ( v10 > 0xFFFFFFFF )
  {
    v15 = 1742;
    goto LABEL_10;
  }
  v11 = v10 + v9;
  si128.m128i_i32[3] = 4 * a5;
  if ( (int)v10 + (int)v9 < (unsigned int)v9 )
  {
    v15 = 1745;
LABEL_10:
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v15);
    goto LABEL_11;
  }
  v12 = CChannel::BeginCommand(this, &si128, 0x10u, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x6D2u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[21], a3, v11);
    CDataStreamWriter::EndItem(this[21]);
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v13;
}
