/*
 * XREFs of ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18001DA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::LinearGradientLegacyMilBrushUpdate(
        __int64 a1,
        int a2,
        double a3,
        __int128 *a4,
        __int128 *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        unsigned int a13)
{
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  int v22; // [rsp+38h] [rbp-51h] BYREF
  int v23; // [rsp+3Ch] [rbp-4Dh] BYREF
  double v24; // [rsp+40h] [rbp-49h]
  int v25; // [rsp+48h] [rbp-41h]
  int v26; // [rsp+4Ch] [rbp-3Dh]
  int v27; // [rsp+50h] [rbp-39h]
  int v28; // [rsp+54h] [rbp-35h]
  int v29; // [rsp+58h] [rbp-31h]
  int v30; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v31; // [rsp+60h] [rbp-29h]
  __int128 v32; // [rsp+64h] [rbp-25h]
  __int128 v33; // [rsp+74h] [rbp-15h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh] BYREF

  v34 = a1 + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v22 = 349;
  memset_0(&v23, 0, 0x48uLL);
  v16 = *a4;
  v23 = a2;
  v24 = a3;
  v17 = *a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v29 = a10;
  v30 = a11;
  v32 = v16;
  v33 = v17;
  v18 = 24LL * a13;
  if ( v18 > 0xFFFFFFFF )
  {
    v20 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB3Eu);
  }
  else
  {
    v31 = 24 * a13;
    v19 = CChannel::BeginCommand((CChannel *)a1, &v22, 0x4Cu, v18);
    v20 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB3Fu);
    }
    else
    {
      CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 168), a12, v31);
      CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 168));
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v34);
  return v20;
}
