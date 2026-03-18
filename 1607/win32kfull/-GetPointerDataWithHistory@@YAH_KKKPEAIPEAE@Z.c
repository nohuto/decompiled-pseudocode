/*
 * XREFs of ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01EF6D0
 * Callers:
 *     GetPointerInfoHistoryInternal @ 0x1C01D765C (GetPointerInfoHistoryInternal.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A54 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C0F48 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F05C0 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
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
  struct _LIST_ENTRY *FrameById; // r14
  unsigned int v13; // r12d
  __int64 v14; // rsi
  unsigned int v15; // esi
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  struct _LIST_ENTRY *PreviousFrameByDeviceInt; // r15
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
  v14 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(v11 + 32);
  if ( a3 >= v8
    && PointerInfoCopyOutHelper(
         (struct tagPOINTERINFONODE *)v14,
         (struct tagHID_POINTER_DEVICE_INFO *)FrameById[6].Blink,
         a2,
         v8,
         a5) )
  {
    v5 = (unsigned __int8 *)a5 + v8;
    a3 -= v8;
  }
  v15 = *(_DWORD *)(v14 + 208);
  PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&FrameById->Flink);
  if ( v16 )
  {
    do
    {
      if ( !PreviousFrameByDeviceInt || v17 <= 1 )
        break;
      ++v13;
      v19 = (__int64)PreviousFrameByDeviceInt[5].Blink + 216 * v15;
      if ( a3 >= v8
        && PointerInfoCopyOutHelper(
             (struct tagPOINTERINFONODE *)v19,
             (struct tagHID_POINTER_DEVICE_INFO *)FrameById[6].Blink,
             a2,
             v8,
             (struct tagPOINTER_INFO *)v5) )
      {
        v5 += v8;
        a3 -= v8;
      }
      v15 = *(_DWORD *)(v19 + 208);
      PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&PreviousFrameByDeviceInt->Flink);
    }
    while ( v16 );
    if ( v16 )
      *a4 = v13;
  }
  return v16;
}
