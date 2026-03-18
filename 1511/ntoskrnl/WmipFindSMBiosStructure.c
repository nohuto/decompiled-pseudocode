/*
 * XREFs of WmipFindSMBiosStructure @ 0x14065ECA8
 * Callers:
 *     WmipGetSMBiosEventlog @ 0x14065EE90 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x14065F02C (WmipGetSysIds.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 */

__int64 __fastcall WmipFindSMBiosStructure(char a1, _QWORD *a2, PVOID *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rax
  _BYTE *v10; // rcx
  _BYTE *v11; // rdx
  _WORD *i; // rcx

  v8 = 0;
  if ( WmipSMBiosTablePhysicalAddress )
  {
    v9 = MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
    *a3 = (PVOID)v9;
    if ( v9 )
    {
      *a4 = WmipSMBiosTableLength;
      v10 = *a3;
      goto LABEL_7;
    }
    v8 = -1073741670;
  }
  else
  {
    v8 = -1073741823;
  }
  v10 = 0LL;
LABEL_7:
  if ( v8 >= 0 )
  {
    *a2 = 0LL;
    v11 = &v10[(unsigned int)WmipSMBiosTableLength];
    v8 = -1073741823;
    while ( v10 < v11 )
    {
      if ( *v10 == a1 )
      {
        *a2 = v10;
        v8 = 0;
        break;
      }
      for ( i = &v10[(unsigned __int8)v10[1]]; *i && i < (_WORD *)v11; i = (_WORD *)((char *)i + 1) )
        ;
      v10 = i + 1;
    }
    if ( v8 < 0 && *a3 )
      MmUnmapIoSpace(*a3, (unsigned int)*a4);
  }
  return (unsigned int)v8;
}
