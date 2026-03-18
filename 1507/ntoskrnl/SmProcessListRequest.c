/*
 * XREFs of SmProcessListRequest @ 0x1406D97B8
 * Callers:
 *     SmQueryStoreInformation @ 0x140583E10 (SmQueryStoreInformation.c)
 * Callees:
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     SmProcessListRequestExtended @ 0x1406D99A4 (SmProcessListRequestExtended.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessListRequest(__int64 a1, ULONG64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v9; // esi
  struct _PRIVILEGE_SET *v10; // rax
  struct _PRIVILEGE_SET *v11; // rdi
  int v12; // ebx
  _BYTE *v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // rdx

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
      v13 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v13 = (_BYTE *)MmUserProbeAddress;
      *v13 = *v13;
      v13[131] = v13[131];
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
        v12 = -1073741811;
      }
      else
      {
        v14 = 0LL;
        v15 = 0;
        v16 = a1;
        do
        {
          if ( *(_QWORD *)v16 )
          {
            *(&v11->Control + v14) = v15 | (32 * (*(_WORD *)(v16 + 24) & 0x7FF));
            v14 = (unsigned int)(v14 + 1);
          }
          ++v15;
          v16 += 176LL;
        }
        while ( v15 < 0x20 );
        BYTE1(v11->PrivilegeCount) = v14;
        v12 = 0;
        if ( (v11->PrivilegeCount & 0x10000) == 0 || (v12 = SmProcessListRequestExtended(a1, v11), v12 >= 0) )
        {
          memmove((void *)a2, v11, v9);
          *a4 = v9;
        }
      }
    }
    else
    {
LABEL_4:
      v12 = -1073741306;
    }
  }
  else
  {
    v12 = -1073740716;
  }
  if ( v11 )
    ExFreePoolEx(v11);
  return (unsigned int)v12;
}
