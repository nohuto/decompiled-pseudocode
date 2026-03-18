/*
 * XREFs of MmStoreRegister @ 0x140567FC0
 * Callers:
 *     SmFirstTimeInit @ 0x1403E3814 (SmFirstTimeInit.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     RtlClearAllBits @ 0x14008487C (RtlClearAllBits.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1403E4710 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     MiInsertPageFileInList @ 0x140568B64 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x140568D38 (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x14065AE08 (MiDeletePagefile.c)
 */

__int64 __fastcall MmStoreRegister(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG v3; // ebx
  char *StartContext; // rdi
  NTSTATUS v6; // esi
  struct _RTL_BITMAP *PoolWithTag; // rax
  HANDLE v8; // r14
  struct _RTL_BITMAP *v9; // rsi
  unsigned __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 Pagefile; // rax
  _WORD *v16; // rbp
  int inserted; // ebx
  int v18; // eax
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+98h] [rbp+20h] BYREF

  v3 = Count;
  dword_14032396C = 1;
  if ( !Count )
    return 3221225799LL;
  StartContext = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x70546D4Du);
  if ( !StartContext )
    return 3221225626LL;
  *(_QWORD *)StartContext = MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(StartContext + 8), NotificationEvent, 0);
  *((_DWORD *)StartContext + 8) = 0;
  v6 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)MiStoreEvictThread, StartContext);
  if ( v6 < 0 )
  {
    ExFreePoolWithTag(StartContext, 0);
    return (unsigned int)v6;
  }
  else
  {
    PoolWithTag = (struct _RTL_BITMAP *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          8 * (((dword_1403A9150 & 0x3F) != 0) + ((unsigned int)dword_1403A9150 >> 6))
                                        + 16,
                                          0x20206D4Du);
    v8 = ThreadHandle;
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->SizeOfBitMap = dword_1403A9150;
      PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
      RtlClearAllBits(PoolWithTag);
      v10 = 0LL;
      if ( v3 )
      {
        v11 = qword_140324DE0;
        v12 = v3;
        do
        {
          v13 = *v11++;
          if ( v10 < *(_QWORD *)(v13 + 8) )
            v10 = *(_QWORD *)(v13 + 8);
          --v12;
        }
        while ( v12 );
      }
      v14 = qword_140324DD0 + v10;
      if ( v14 > 0xFFFFFFF )
        v14 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile((unsigned int)MiSystemPartition, 0, 0, v14, v14, 0LL, 0, 0);
      v16 = (_WORD *)Pagefile;
      if ( Pagefile )
      {
        inserted = MiInsertPageFileInList(Pagefile);
        if ( inserted < 0 )
        {
          *((_DWORD *)StartContext + 8) = 1;
        }
        else
        {
          qword_1403239D8 = (__int64)v9;
          dword_14032396C = 254;
          v18 = v16[102] & 0xF;
          qword_1403239E0 = a3;
          dword_140323964 = v18;
          ObReferenceObjectByHandle(v8, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v9 = 0LL;
          v16 = 0LL;
          qword_140323980 = (__int64)Object;
          dword_140323968 = 1;
          inserted = 0;
        }
      }
      else
      {
        *((_DWORD *)StartContext + 8) = 1;
        inserted = -1073741670;
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      if ( v16 )
        MiDeletePagefile(v16);
    }
    else
    {
      *((_DWORD *)StartContext + 8) = 1;
      inserted = -1073741670;
    }
    KeSetEvent((PRKEVENT)(StartContext + 8), 0, 0);
    ObCloseHandle(v8, 0);
    return (unsigned int)inserted;
  }
}
