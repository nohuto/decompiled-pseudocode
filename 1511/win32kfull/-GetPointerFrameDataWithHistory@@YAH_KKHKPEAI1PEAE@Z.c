/*
 * XREFs of ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01F87B0
 * Callers:
 *     GetPointerFrameInfoInternal @ 0x1C01E1254 (GetPointerFrameInfoInternal.c)
 * Callees:
 *     ?GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z @ 0x1C01F86AC (-GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z.c)
 *     ?GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z @ 0x1C01F8974 (-GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z.c)
 *     ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8F00 (-IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F604 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C022FBC0 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 */

__int64 __fastcall GetPointerFrameDataWithHistory(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 *v8; // r15
  unsigned int v9; // edi
  __int64 v11; // r9
  struct tagPOINTERINPUTFRAME *FrameById; // r14
  __int64 v13; // rbp
  struct tagPOINTER_INFO *v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // r13d
  unsigned int PointerFrameData; // r10d
  unsigned int v18; // r12d
  unsigned __int64 v19; // rbx
  unsigned int v20; // ebp
  struct tagPOINTERINPUTFRAME *PreviousFrameByDeviceInt; // rdi
  unsigned int v22; // r11d
  __int64 v23; // rbp
  unsigned int v26; // [rsp+88h] [rbp+20h] BYREF

  v8 = a7;
  switch ( a2 )
  {
    case 1u:
      v9 = 96;
      goto LABEL_9;
    case 2u:
      goto LABEL_7;
    case 3u:
      v9 = 120;
      goto LABEL_9;
    case 5u:
LABEL_7:
      v9 = 144;
      goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v13 = *((_QWORD *)FrameById + 9) + 216LL * *(unsigned int *)(v11 + 32);
  if ( (unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v13) )
    return 0LL;
  v16 = 1;
  PointerFrameData = GetPointerFrameData(FrameById, (const struct tagPOINTERINFONODE *)v13, v15, a4, &v26, v14);
  if ( PointerFrameData )
  {
    v18 = v26;
    v19 = v9 * (unsigned __int64)v26;
    if ( v19 > 0xFFFFFFFF )
    {
      return 0;
    }
    else
    {
      PointerFrameData = 1;
      if ( a4 >= (unsigned int)v19 )
      {
        v8 = &a7[(unsigned int)v19];
        a4 -= v19;
      }
      if ( !a3 )
        goto LABEL_26;
      v20 = *(_DWORD *)(v13 + 208);
      PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(FrameById);
      do
      {
        if ( !PreviousFrameByDeviceInt || v22 <= 1 )
          break;
        ++v16;
        v23 = *((_QWORD *)PreviousFrameByDeviceInt + 9) + 216LL * v20;
        if ( a4 >= (unsigned int)v19 )
        {
          if ( (unsigned int)GetPointerHistoryFrameData(PreviousFrameByDeviceInt, a2, v18, v19, a7, v8) )
          {
            v8 += (unsigned int)v19;
            a4 -= v19;
          }
        }
        v20 = *(_DWORD *)(v23 + 208);
        PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(PreviousFrameByDeviceInt);
      }
      while ( PointerFrameData );
      if ( PointerFrameData )
      {
LABEL_26:
        *a5 = v16;
        *a6 = v18;
      }
    }
  }
  return PointerFrameData;
}
