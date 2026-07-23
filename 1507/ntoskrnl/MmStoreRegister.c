/*
 * XREFs of MmStoreRegister @ 0x1405C5F98
 * Callers:
 *     SmFirstTimeInit @ 0x1404F9AFC (SmFirstTimeInit.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     MiInsertPageFileInList @ 0x1405B4BD0 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 */

__int64 MmStoreRegister()
{
  ULONG v0; // ebx
  char *StartContext; // rdi
  NTSTATUS v2; // esi
  _RTL_BITMAP *PoolWithTag; // rax
  HANDLE v4; // r14
  _RTL_BITMAP *v5; // rsi
  unsigned __int64 v6; // r9
  __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  _QWORD *Pagefile; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbp
  int inserted; // ebx
  HANDLE ThreadHandle; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v0 = Count;
  dword_14035411C = 1;
  if ( !Count )
    return 3221225799LL;
  StartContext = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x70546D4Du);
  if ( !StartContext )
    return 3221225626LL;
  *(_QWORD *)StartContext = MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(StartContext + 8), NotificationEvent, 0);
  *((_DWORD *)StartContext + 8) = 0;
  v2 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)MiStoreEvictThread, StartContext);
  if ( v2 < 0 )
  {
    ExFreePoolWithTag(StartContext, 0);
    return (unsigned int)v2;
  }
  else
  {
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * (((dword_1403D00F8 & 0x3F) != 0) + ((unsigned int)dword_1403D00F8 >> 6)) + 16,
                                   0x20206D4Du);
    v4 = ThreadHandle;
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->SizeOfBitMap = dword_1403D00F8;
      PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
      RtlClearAllBits(PoolWithTag);
      v6 = 0LL;
      if ( v0 )
      {
        v7 = qword_1403551E0;
        v8 = v0;
        do
        {
          v9 = *v7++;
          if ( v6 < *(_QWORD *)(v9 + 8) )
            v6 = *(_QWORD *)(v9 + 8);
          --v8;
        }
        while ( v8 );
      }
      v10 = qword_1403551D0 + v6;
      if ( v10 > 0xFFFFFFF )
        v10 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile((__int64)MiSystemPartition, 0LL, 0LL, v10, v10, 0LL, 0, 0);
      v15 = Pagefile;
      if ( Pagefile )
      {
        inserted = MiInsertPageFileInList((__int64)Pagefile, v12, v13, v14);
        if ( inserted < 0 )
        {
          *((_DWORD *)StartContext + 8) = 1;
        }
        else
        {
          qword_140354188 = (__int64)v5;
          dword_14035411C = 254;
          dword_140354114 = *((_WORD *)v15 + 82) & 0xF;
          ObReferenceObjectByHandle(v4, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v5 = 0LL;
          v15 = 0LL;
          qword_140354130 = (__int64)Object;
          dword_140354118 = 1;
          inserted = 0;
        }
      }
      else
      {
        *((_DWORD *)StartContext + 8) = 1;
        inserted = -1073741670;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      if ( v15 )
        MiDeletePagefile(v15);
    }
    else
    {
      *((_DWORD *)StartContext + 8) = 1;
      inserted = -1073741670;
    }
    KeSetEvent((PRKEVENT)(StartContext + 8), 0, 0);
    ObCloseHandle(v4, 0);
    return (unsigned int)inserted;
  }
}
