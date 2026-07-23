/*
 * XREFs of MmStoreRegister @ 0x14054E108
 * Callers:
 *     SmFirstTimeInit @ 0x1404D1E70 (SmFirstTimeInit.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     MiInsertPageFileInList @ 0x140538300 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
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
  _WORD *v12; // rbp
  int inserted; // ebx
  HANDLE ThreadHandle; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v0 = Count;
  dword_14030017C = 1;
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
                                   8 * (((dword_140381108 & 0x3F) != 0) + ((unsigned int)dword_140381108 >> 6)) + 16,
                                   0x20206D4Du);
    v4 = ThreadHandle;
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->SizeOfBitMap = dword_140381108;
      PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
      RtlClearAllBits(PoolWithTag);
      v6 = 0LL;
      if ( v0 )
      {
        v7 = qword_1403013A0;
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
      v10 = qword_140301390 + v6;
      if ( v10 > 0xFFFFFFF )
        v10 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile((__int64)MiSystemPartition, 0LL, 0LL, v10, v10, 0LL, 0, 0);
      v12 = Pagefile;
      if ( Pagefile )
      {
        inserted = MiInsertPageFileInList((__int64)Pagefile);
        if ( inserted < 0 )
        {
          *((_DWORD *)StartContext + 8) = 1;
        }
        else
        {
          qword_1403001E8 = (__int64)v5;
          dword_14030017C = 254;
          dword_140300174 = v12[102] & 0xF;
          ObReferenceObjectByHandle(v4, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v5 = 0LL;
          v12 = 0LL;
          qword_140300190 = (__int64)Object;
          dword_140300178 = 1;
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
      if ( v12 )
        MiDeletePagefile(v12);
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
