/*
 * XREFs of ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F0D70
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01C1994 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01EF450 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C0231E9C (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
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
  PointerFrameList *v12; // rbp
  struct tagPOINT *v13; // rsi
  __int64 v14; // r11
  __int64 v15; // r11
  struct tagPOINT *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  struct tagPOINT *v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-48h]
  struct tagPOINT *v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  v10 = FindAndReferenceFrameById(*(_DWORD *)(a1 + 28));
  v12 = v10;
  if ( !v10 )
    return 0LL;
  LODWORD(v22) = 1;
  PointerFrameList::SetPointerInfoNodeTarget(
    v10,
    (const struct tagPOINTERINPUTFRAME *)*(unsigned int *)(a1 + 32),
    a2,
    v11,
    0LL,
    v22,
    0,
    1,
    0);
  v13 = a5;
  v14 = *((_QWORD *)v12 + 11) + 216LL * *(unsigned int *)(a1 + 32);
  if ( !GetAdjustedPointerPixelLocation(*(struct tagPOINT *)(v14 + 88), *(struct tagPOINT *)(v14 + 36), a5) )
    *v13 = *(struct tagPOINT *)(v15 + 88);
  v16 = a6;
  if ( !GetAdjustedPointerPixelLocation(*(struct tagPOINT *)(v15 + 104), *(struct tagPOINT *)(v15 + 36), a6) )
    *v16 = v19[13];
  UnreferenceFrameInt(v12, v17, v18);
  PointerPromotion::OnPointerInputRetrieval(
    (PointerPromotion *)*(unsigned __int16 *)(a1 + 16),
    *(_DWORD *)(a1 + 28),
    (unsigned int)*v16,
    (struct tagPOINT)a4,
    v21);
  if ( (*((_DWORD *)a2 + 88) & 0xF) != 2 )
  {
    v20 = (unsigned __int64)*v13;
    v23 = 0LL;
    GetDPITransformationMonitor(v20, (__int64)a2, &v23);
    PhysicalToLogicalDPIPoint(v13, v13, 0LL);
    PhysicalToLogicalDPIPoint(v16, v16, 0LL);
  }
  return 1LL;
}
