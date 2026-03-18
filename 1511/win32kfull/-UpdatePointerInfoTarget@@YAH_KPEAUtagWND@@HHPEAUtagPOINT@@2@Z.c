/*
 * XREFs of ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9B3C
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01E1A60 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     GetDPITransformationMonitor @ 0x1C01E54D8 (GetDPITransformationMonitor.c)
 *     PhysicalToLogicalInPlacePoint @ 0x1C01E5930 (PhysicalToLogicalInPlacePoint.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01F8264 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C02305B4 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C023A3F4 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 */

__int64 __fastcall UpdatePointerInfoTarget(
        __int64 a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned int a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  PointerFrameList *v10; // rax
  struct tagWND *v11; // r9
  PointerFrameList *v12; // r14
  struct tagPOINT *v13; // rsi
  __int64 v14; // r11
  __int64 v15; // r11
  struct tagPOINT *v16; // rdi
  struct tagPOINT *v17; // r11
  __int64 v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]
  struct tagPOINT *v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  v10 = FindAndReferenceFrameById(*(_DWORD *)(a1 + 28));
  v12 = v10;
  if ( !v10 )
    return 0LL;
  LODWORD(v20) = 1;
  PointerFrameList::SetPointerInfoNodeTarget(
    v10,
    (const struct tagPOINTERINPUTFRAME *)*(unsigned int *)(a1 + 32),
    (unsigned int)a2,
    v11,
    0LL,
    v20,
    0,
    1,
    0,
    v21);
  v13 = a5;
  v14 = *((_QWORD *)v12 + 9) + 216LL * *(unsigned int *)(a1 + 32);
  if ( !GetAdjustedPointerPixelLocation(*(struct tagPOINT *)(v14 + 88), *(struct tagPOINT *)(v14 + 36), a5) )
    *v13 = *(struct tagPOINT *)(v15 + 88);
  v16 = a6;
  if ( !GetAdjustedPointerPixelLocation(*(struct tagPOINT *)(v15 + 104), *(struct tagPOINT *)(v15 + 36), a6) )
    *v16 = v17[13];
  UnreferenceFrameInt(v12);
  PointerPromotion::OnPointerInputRetrieval(
    (PointerPromotion *)*(unsigned __int16 *)(a1 + 16),
    *(_DWORD *)(a1 + 28),
    (unsigned int)*v16,
    (struct tagPOINT)a4,
    v19);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0 )
  {
    if ( a2 && *((_QWORD *)a2 + 34) )
    {
      PhysicalToLogicalInPlacePoint((__int64)a2, (int *)v13);
      PhysicalToLogicalInPlacePoint((__int64)a2, (int *)v16);
    }
  }
  else
  {
    v22 = 0LL;
    if ( a2 )
      GetDPITransformationMonitor((unsigned __int64)*v13, (__int64)a2, &v22);
    PhysicalToLogicalDPIPoint(v13, v13, 0LL, &v22);
    PhysicalToLogicalDPIPoint(v16, v16, 0LL, &v22);
  }
  return 1LL;
}
