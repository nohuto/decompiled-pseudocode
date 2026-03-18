/*
 * XREFs of ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180048520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::InteractionUpdateConfiguration(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        unsigned int a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  _DWORD v14[10]; // [rsp+30h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v14[0] = 195;
  v14[2] = a3;
  v14[1] = a2;
  v14[3] = a4;
  v14[4] = a5;
  v11 = CChannel::BeginCommand((CChannel *)a1, v14, 0x14u, a7);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9B5u);
  }
  else
  {
    CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 168), a6, a7);
    CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 168));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v12;
}
