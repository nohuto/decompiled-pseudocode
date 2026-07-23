/*
 * XREFs of SmProcessListRequest @ 0x140696984
 * Callers:
 *     SmQueryStoreInformation @ 0x1403E4980 (SmQueryStoreInformation.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     SmProcessListRequestExtended @ 0x140696B48 (SmProcessListRequestExtended.c)
 *     SmKmGetStoreList @ 0x140698198 (SmKmGetStoreList.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessListRequest(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v9; // esi
  struct _PRIVILEGE_SET *v10; // rax
  struct _PRIVILEGE_SET *v11; // rdi
  int StoreList; // ebx
  __int64 v13; // rcx

  v9 = 4228;
  v10 = (struct _PRIVILEGE_SET *)SmAlloc(0x1084uLL, 0x524C6D73u);
  v11 = v10;
  if ( v10 )
  {
    memset(v10, 0, 0x1084uLL);
    if ( a3 < 0x84 )
      goto LABEL_4;
    if ( a5 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 131) = *(_BYTE *)(v13 + 131);
    }
    *(_OWORD *)&v11->PrivilegeCount = *(_OWORD *)a2;
    *(_OWORD *)&v11->Privilege[0].Attributes = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v11[1].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v11[2].Privilege[0].Luid.LowPart = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v11[3].Control = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v11[4].PrivilegeCount = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v11[4].Privilege[0].Attributes = *(_OWORD *)(a2 + 96);
    *(_OWORD *)&v11[5].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 112);
    v11[6].Privilege[0].Luid.LowPart = *(_DWORD *)(a2 + 128);
    if ( (v11->PrivilegeCount & 0x10000) != 0 )
    {
      if ( a5 )
        ProbeForWrite((volatile void *)a2, 0x1084uLL, 4u);
    }
    else
    {
      v9 = 132;
    }
    if ( a3 == v9 )
    {
      if ( __PAIR16__(BYTE1(v11->PrivilegeCount), v11->PrivilegeCount) != 2 || (v11->PrivilegeCount & 0xFFFE0000) != 0 )
      {
        StoreList = -1073741811;
      }
      else
      {
        StoreList = SmKmGetStoreList(a1, v11);
        if ( StoreList >= 0 )
        {
          if ( (v11->PrivilegeCount & 0x10000) == 0
            || (StoreList = SmProcessListRequestExtended(a1, v11), StoreList >= 0) )
          {
            memmove((void *)a2, v11, v9);
            *a4 = v9;
          }
        }
      }
    }
    else
    {
LABEL_4:
      StoreList = -1073741306;
    }
  }
  else
  {
    StoreList = -1073740716;
  }
  if ( v11 )
    MiDeleteSubsection(v11);
  return (unsigned int)StoreList;
}
