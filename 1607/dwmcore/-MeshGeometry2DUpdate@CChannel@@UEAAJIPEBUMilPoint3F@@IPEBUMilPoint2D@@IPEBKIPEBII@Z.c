/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180115150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        struct CCommandBatch **this,
        int a2,
        const struct MilPoint3F *a3,
        unsigned int a4,
        const struct MilPoint2D *a5,
        unsigned int a6,
        const unsigned int *a7,
        unsigned int a8,
        const unsigned int *a9,
        unsigned int a10)
{
  __int64 v11; // rdi
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+20h] [rbp-30h]
  _DWORD v24[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-18h]
  unsigned int v26[2]; // [rsp+3Ch] [rbp-14h]
  unsigned int v27; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+70h] [rbp+20h] BYREF

  v11 = a4;
  v28 = (struct _RTL_CRITICAL_SECTION *)(this + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 22));
  v24[0] = 314;
  v25 = 0;
  v14 = 12 * v11;
  *(_QWORD *)v26 = 0LL;
  v27 = 0;
  v24[1] = a2;
  if ( (unsigned __int64)(12 * v11) > 0xFFFFFFFF )
  {
    v23 = 2571;
    goto LABEL_18;
  }
  v15 = 16LL * a6;
  v25 = 12 * v11;
  if ( v15 > 0xFFFFFFFF )
  {
    v23 = 2572;
    goto LABEL_18;
  }
  v16 = 4LL * a8;
  v26[0] = 16 * a6;
  if ( v16 > 0xFFFFFFFF )
  {
    v23 = 2573;
    goto LABEL_18;
  }
  v17 = 4LL * a10;
  v26[1] = 4 * a8;
  if ( v17 > 0xFFFFFFFF )
  {
    v23 = 2574;
    goto LABEL_18;
  }
  v18 = v15 + v14;
  v27 = 4 * a10;
  if ( (unsigned int)v15 + v14 < v14 )
  {
    v23 = 2577;
    goto LABEL_18;
  }
  v19 = v16 + v18;
  if ( (unsigned int)v16 + v18 < v18 )
  {
    v23 = 2578;
    goto LABEL_18;
  }
  if ( (unsigned int)v17 + v19 < v19 )
  {
    v23 = 2579;
LABEL_18:
    v21 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v23);
    goto LABEL_19;
  }
  v20 = CChannel::BeginCommand(this, v24, 0x18u, (unsigned int)v17 + v19);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xA14u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[21], a3, v25);
    CDataStreamWriter::AddItemData(this[21], a5, v26[0]);
    CDataStreamWriter::AddItemData(this[21], a7, v26[1]);
    CDataStreamWriter::AddItemData(this[21], a9, v27);
    CDataStreamWriter::EndItem(this[21]);
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v21;
}
