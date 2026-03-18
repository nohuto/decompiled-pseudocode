/*
 * XREFs of ?RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z @ 0x18000BD40
 * Callers:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180006A30 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@COutOfFrameDirectFlipInfo@@MEAAJXZ @ 0x180006AE0 (-Deactivate@COutOfFrameDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipNotification(
        CCompositionSurfaceInfo *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  v4 = NtSetCompositionSurfaceOutOfFrameDirectFlipNotification(*((_QWORD *)this + 4), a2, a3);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4 | 0x10000000, 0xD1u);
  }
  return v3;
}
