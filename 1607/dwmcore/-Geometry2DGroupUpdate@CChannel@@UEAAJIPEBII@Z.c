/*
 * XREFs of ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180114E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::Geometry2DGroupUpdate(
        struct CCommandBatch **this,
        int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  _DWORD v12[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)(this + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 22));
  v12[0] = 315;
  v13 = 0;
  v12[1] = a2;
  v8 = 4LL * a4;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xA29u);
  }
  else
  {
    v13 = 4 * a4;
    v9 = CChannel::BeginCommand(this, v12, 0xCu, v8);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA2Au);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[21], a3, v13);
      CDataStreamWriter::EndItem(this[21]);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v10;
}
