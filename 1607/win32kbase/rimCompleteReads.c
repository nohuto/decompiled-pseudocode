/*
 * XREFs of rimCompleteReads @ 0x1C00108C8
 * Callers:
 *     RIMReadInput @ 0x1C00117E0 (RIMReadInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RimInputTypeToDeviceType @ 0x1C00106C0 (RimInputTypeToDeviceType.c)
 *     DeviceTypeToRimInputType @ 0x1C0010A30 (DeviceTypeToRimInputType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0010CA8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 */

__int64 __fastcall rimCompleteReads(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // r14d
  __int64 i; // rbx
  int v6; // eax
  __int64 j; // rbx
  int v8; // eax

  if ( *(_DWORD *)(a1 + 76) )
  {
    rimFindPausedDeviceAndCompleteRead();
    v2 = 0;
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 76) & DeviceTypeToRimInputType(v2);
      if ( v3 )
        break;
LABEL_4:
      if ( ++v2 > 2 )
        return 0LL;
    }
    for ( i = *(_QWORD *)(a1 + 552); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      if ( v2 == 2 )
      {
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2) & *(_DWORD *)(a1 + 76)) == 0 )
          continue;
        if ( *(_DWORD *)(i + 316) )
        {
          rimProcessAnyQueuedCompleteFrames(a1, i);
          continue;
        }
      }
      else if ( *(unsigned __int8 *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v3) )
      {
        continue;
      }
      v6 = *(_DWORD *)(i + 184);
      if ( (v6 & 0x100) == 0 && (v6 & 0x80u) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, i);
    }
  }
  for ( j = *(_QWORD *)(a1 + 552); j; j = *(_QWORD *)(j + 40) )
  {
    if ( *(_DWORD *)(j + 316) )
    {
      rimProcessAnyQueuedCompleteFrames(a1, j);
    }
    else
    {
      v8 = *(_DWORD *)(j + 184);
      if ( (v8 & 0x100) == 0 && (v8 & 0x80u) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, j);
    }
  }
  return 0LL;
}
