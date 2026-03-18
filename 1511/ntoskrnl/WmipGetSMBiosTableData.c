/*
 * XREFs of WmipGetSMBiosTableData @ 0x140484514
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x1400C1CBC (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x1404848DC (WmipQueryWmiDataBlock.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(void *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // edi
  int v6; // eax
  void *v8; // rax
  void *v9; // rbp
  unsigned int v10; // ebx

  v3 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  v6 = WmipSMBiosTableLength;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( WmipSMBiosTablePhysicalAddress )
    {
      v8 = (void *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v9 = v8;
      if ( v8 )
      {
        v10 = WmipSMBiosTableLength;
        memmove(a1, v8, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v9, v10);
      }
      else
      {
        v3 = -1073741670;
      }
      v6 = WmipSMBiosTableLength;
    }
    else
    {
      v3 = -1073741808;
    }
  }
  else
  {
    v3 = -1073741789;
  }
  *a2 = v6;
  return v3;
}
