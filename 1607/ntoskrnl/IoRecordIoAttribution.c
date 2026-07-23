/*
 * XREFs of IoRecordIoAttribution @ 0x14001EDEC
 * Callers:
 *     <none>
 * Callees:
 *     IopRecordIoAttribution @ 0x14001ECB4 (IopRecordIoAttribution.c)
 *     IopFindDiskIoAttribution @ 0x14001EE78 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 */

__int64 __fastcall IoRecordIoAttribution(__int64 a1, _DWORD *a2)
{
  __int64 DiskIoAttribution; // rax
  __int64 v4; // rsi
  KSPIN_LOCK *v5; // rdi
  int v6; // ebx

  if ( *a2 == 1 )
  {
    DiskIoAttribution = IopFindDiskIoAttribution();
    v4 = DiskIoAttribution;
    if ( DiskIoAttribution )
    {
      v5 = (KSPIN_LOCK *)DiskIoAttribution;
      while ( 1 )
      {
        if ( (a2[1] & 0xA00) != 0x800 || v5[20] )
        {
          v6 = IopRecordIoAttribution(v5, (__int64)a2);
          if ( v6 < 0 )
            break;
        }
        v5 = (KSPIN_LOCK *)v5[20];
        if ( !v5 )
        {
          v6 = 0;
          break;
        }
      }
      IoDiskIoAttributionDereference(v4);
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v6;
}
