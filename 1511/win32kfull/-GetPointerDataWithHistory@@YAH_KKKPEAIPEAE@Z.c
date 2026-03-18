/*
 * XREFs of ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01F84E4
 * Callers:
 *     GetPointerInfoHistoryInternal @ 0x1C01E1304 (GetPointerInfoHistoryInternal.c)
 * Callees:
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F93B8 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F604 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C022FBC0 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 */

__int64 __fastcall GetPointerDataWithHistory(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagPOINTER_INFO *a5)
{
  unsigned __int8 *v5; // rbp
  unsigned int v8; // ebx
  unsigned int v10; // r9d
  __int64 v11; // r11
  struct tagPOINTERINPUTFRAME *FrameById; // r14
  unsigned int v13; // r12d
  __int64 v14; // rsi
  unsigned int v15; // esi
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  struct tagPOINTERINPUTFRAME *PreviousFrameByDeviceInt; // r15
  __int64 v19; // rsi

  v5 = (unsigned __int8 *)a5;
  switch ( a2 )
  {
    case 1u:
      v8 = 96;
      goto LABEL_9;
    case 2u:
      goto LABEL_7;
    case 3u:
      v8 = 120;
      goto LABEL_9;
    case 5u:
LABEL_7:
      v8 = 144;
      goto LABEL_9;
  }
  v8 = 0;
LABEL_9:
  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v13 = v10;
  v14 = *((_QWORD *)FrameById + 9) + 216LL * *(unsigned int *)(v11 + 32);
  if ( a3 >= v8
    && PointerInfoCopyOutHelper(
         (struct tagPOINTERINFONODE *)v14,
         *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 11),
         a2,
         v8,
         a5) )
  {
    v5 = (unsigned __int8 *)a5 + v8;
    a3 -= v8;
  }
  v15 = *(_DWORD *)(v14 + 208);
  PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(FrameById);
  if ( v16 )
  {
    do
    {
      if ( !PreviousFrameByDeviceInt || v17 <= 1 )
        break;
      ++v13;
      v19 = *((_QWORD *)PreviousFrameByDeviceInt + 9) + 216LL * v15;
      if ( a3 >= v8
        && PointerInfoCopyOutHelper(
             (struct tagPOINTERINFONODE *)v19,
             *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 11),
             a2,
             v8,
             (struct tagPOINTER_INFO *)v5) )
      {
        v5 += v8;
        a3 -= v8;
      }
      v15 = *(_DWORD *)(v19 + 208);
      PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(PreviousFrameByDeviceInt);
    }
    while ( v16 );
    if ( v16 )
      *a4 = v13;
  }
  return v16;
}
