/*
 * XREFs of EtwpBuildNotificationPacket @ 0x1404928BC
 * Callers:
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpCalculateUpdateNotification @ 0x140491A90 (EtwpCalculateUpdateNotification.c)
 *     EtwpDisallowedGuidAddition @ 0x140572F94 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FC4C (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     EtwpGetSchematizedFilterSize @ 0x14040D870 (EtwpGetSchematizedFilterSize.c)
 *     EtwpAllocDataBlock @ 0x140492958 (EtwpAllocDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x1406A8E68 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpBuildNotificationPacket(__int64 a1, _OWORD *a2, unsigned __int8 a3, _QWORD *a4)
{
  int SchematizedFilterSize; // eax
  int v7; // ebp
  int v8; // edi
  int v10; // r14d
  __int64 v11; // [rsp+20h] [rbp-28h]

  SchematizedFilterSize = EtwpGetSchematizedFilterSize(a1, a3);
  v7 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
  {
    v10 = SchematizedFilterSize + 136;
    v8 = EtwpAllocDataBlock((unsigned int)(SchematizedFilterSize + 136), 0LL);
    if ( v8 >= 0 )
    {
      if ( a2 )
      {
        *(_OWORD *)v11 = *a2;
        *(_OWORD *)(v11 + 16) = a2[1];
        *(_OWORD *)(v11 + 32) = a2[2];
        *(_OWORD *)(v11 + 48) = a2[3];
        *(_OWORD *)(v11 + 64) = a2[4];
        *(_OWORD *)(v11 + 80) = a2[5];
        *(_OWORD *)(v11 + 96) = a2[6];
        *(_QWORD *)(v11 + 112) = *((_QWORD *)a2 + 14);
      }
      *(_DWORD *)(v11 + 116) = 1;
      *(_DWORD *)(v11 + 8) = 1;
      *(_DWORD *)(v11 + 4) = v10;
      *a4 = v11;
      *(_QWORD *)(v11 + 120) = 136LL;
      *(_DWORD *)(v11 + 132) = 0x80000000;
      *(_DWORD *)(v11 + 128) = v7;
      EtwpCopySchematizedFilters((void *)(v11 + 136));
    }
  }
  else if ( a2 )
  {
    return (unsigned int)EtwpAllocDataBlock(*((unsigned int *)a2 + 1), a2);
  }
  else
  {
    v8 = EtwpAllocDataBlock(0x78uLL, 0LL);
    if ( v8 >= 0 )
    {
      *a4 = v11;
      *(_DWORD *)(v11 + 8) = 1;
      *(_DWORD *)(v11 + 4) = 120;
    }
  }
  return (unsigned int)v8;
}
