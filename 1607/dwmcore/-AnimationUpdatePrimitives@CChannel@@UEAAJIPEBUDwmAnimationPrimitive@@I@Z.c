/*
 * XREFs of ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::AnimationUpdatePrimitives(
        CChannel *this,
        int a2,
        const struct DwmAnimationPrimitive *a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v13 = (char *)this + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v12[0] = 151;
  v12[2] = v5;
  v8 = 32 * v5;
  v12[1] = a2;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x873u);
  }
  else
  {
    v9 = CChannel::BeginCommand(this, v12, 0xCu, v8);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x874u);
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 21), a3, v8);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 21));
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v10;
}
