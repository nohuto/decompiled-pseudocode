/*
 * XREFs of SmcProcessStoreCreateRequest @ 0x1406DAB54
 * Callers:
 *     SmSetStoreInformation @ 0x140546F94 (SmSetStoreInformation.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1406DBA20 (SmcStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessStoreCreateRequest(int a1, ULONG64 a2, int a3, char a4)
{
  int v8; // ebx
  _BYTE *v9; // rcx
  _DWORD v11[12]; // [rsp+30h] [rbp-48h] BYREF

  v11[0] = -1;
  memset(&v11[2], 0, 0x20uLL);
  if ( a3 == 32 )
  {
    if ( a4 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v9 = (_BYTE *)MmUserProbeAddress;
      *v9 = *v9;
      v9[31] = v9[31];
    }
    *(_OWORD *)&v11[2] = *(_OWORD *)a2;
    *(_OWORD *)&v11[6] = *(_OWORD *)(a2 + 16);
    if ( LOBYTE(v11[2]) != 2 || (v11[2] & 0xFFFFFF00) != 0 )
      return (unsigned int)-1073741811;
    if ( v11[8] >= 2 )
      return (unsigned int)-1073741822;
    if ( (v11[3] & 0xFFFFE000) != 0 )
      return (unsigned int)-1073741811;
    v8 = SmcStoreCreate(a1, v11[8], (unsigned int)&v11[3], v11[7], (__int64)v11);
    if ( v8 >= 0 )
    {
      v8 = 0;
      *(_DWORD *)(a2 + 28) = v11[0];
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)v8;
}
