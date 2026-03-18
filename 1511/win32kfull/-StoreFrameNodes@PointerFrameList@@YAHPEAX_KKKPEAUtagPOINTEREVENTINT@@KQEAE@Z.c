/*
 * XREFs of ?StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z @ 0x1C0230830
 * Callers:
 *     xxxProcessPointerEvent @ 0x1C01E192C (xxxProcessPointerEvent.c)
 * Callees:
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022E398 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F72C (-FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?StartHoldingFrame@@YAHPEAUtagPOINTERHOLDINGFRAME@@_KKK@Z @ 0x1C02307DC (-StartHoldingFrame@@YAHPEAUtagPOINTERHOLDINGFRAME@@_KKK@Z.c)
 *     ?StoreRawDataBlock@@YAKPEAUtagPOINTERHOLDINGFRAME@@KQEAE@Z @ 0x1C0230998 (-StoreRawDataBlock@@YAKPEAUtagPOINTERHOLDINGFRAME@@KQEAE@Z.c)
 */

__int64 __fastcall PointerFrameList::StoreFrameNodes(
        PointerFrameList *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5,
        struct tagPOINTEREVENTINT *a6,
        unsigned __int8 *a7)
{
  __int64 v8; // rdi
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  struct tagPOINTERHOLDINGFRAME *v11; // rbx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // r9
  __int128 v19; // xmm1
  __int64 v20; // rcx

  v8 = a3;
  HoldingFrameForDevice = FindOrCreateHoldingFrameForDevice(this);
  v11 = HoldingFrameForDevice;
  if ( !HoldingFrameForDevice )
    return 0LL;
  v13 = *((_DWORD *)HoldingFrameForDevice + 8);
  if ( v13 )
  {
    v14 = v13 - *((_DWORD *)v11 + 9);
    if ( (unsigned int)v8 > v14 || a4 != v14 - (_DWORD)v8 )
    {
      AbandonHoldingFrame(v11);
      return 0LL;
    }
  }
  else
  {
    EtwTraceBeginPointerFrameCreation(0LL, (unsigned int)v8, a4);
    if ( !(unsigned int)StartHoldingFrame(v11, a2, v8, a4) )
      return 0LL;
  }
  v15 = StoreRawDataBlock(v11, (unsigned int)a6, a7);
  v16 = *((_QWORD *)v11 + 8) + 216LL * *((unsigned int *)v11 + 9);
  if ( (_DWORD)v8 )
  {
    v18 = v8;
    do
    {
      *(_OWORD *)(v16 + 48) = *a5;
      *(_OWORD *)(v16 + 64) = a5[1];
      *(_OWORD *)(v16 + 80) = a5[2];
      *(_OWORD *)(v16 + 96) = a5[3];
      *(_OWORD *)(v16 + 112) = a5[4];
      *(_OWORD *)(v16 + 128) = a5[5];
      *(_OWORD *)(v16 + 144) = a5[6];
      *(_OWORD *)(v16 + 160) = a5[7];
      *(_OWORD *)(v16 + 176) = a5[8];
      v19 = a5[9];
      *(_DWORD *)(v16 + 44) = v15;
      *(_OWORD *)(v16 + 192) = v19;
      ++*((_DWORD *)v11 + 9);
      if ( (*(_DWORD *)(v16 + 68) & 0x2000) != 0 )
      {
        v20 = *((_QWORD *)v11 + 9);
        if ( v20 )
        {
          if ( *(_DWORD *)(v16 + 56) != 5 )
            *(_DWORD *)(v20 + 68) &= ~0x2000u;
        }
        *((_QWORD *)v11 + 9) = v16;
      }
      v16 += 216LL;
      a5 += 10;
      --v18;
    }
    while ( v18 );
  }
  return 1LL;
}
