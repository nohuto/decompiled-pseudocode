/*
 * XREFs of rimCompleteReads @ 0x1C000F0AC
 * Callers:
 *     RIMReadInput @ 0x1C0006150 (RIMReadInput.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C000FDE0 (DeviceTypeToRimInputType.c)
 *     RimDeviceTypeToRimInputType @ 0x1C001152C (RimDeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C007D5E0 (RimInputTypeToDeviceType.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C007DF30 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C007E814 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall rimCompleteReads(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // r14d
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
    for ( i = *(_QWORD *)(a1 + 544); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      if ( v2 == 2 )
      {
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2LL) & *(_DWORD *)(a1 + 76)) == 0 )
          continue;
        if ( *(_DWORD *)(i + 308) )
        {
          rimProcessAnyQueuedCompleteFrames(a1, i);
          continue;
        }
      }
      else if ( *(unsigned __int8 *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v3) )
      {
        continue;
      }
      v6 = *(_DWORD *)(i + 176);
      if ( (v6 & 0x100) == 0 && (v6 & 0x80u) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, i);
    }
  }
  for ( j = *(_QWORD *)(a1 + 544); j; j = *(_QWORD *)(j + 40) )
  {
    if ( *(_DWORD *)(j + 308) )
    {
      rimProcessAnyQueuedCompleteFrames(a1, j);
    }
    else
    {
      v8 = *(_DWORD *)(j + 176);
      if ( (v8 & 0x100) == 0 && (v8 & 0x80u) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, j);
    }
  }
  return 0LL;
}
