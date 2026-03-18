/*
 * XREFs of IopStoreArcInformation @ 0x140750ED8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     RtlStringCbCopyA @ 0x1400925DC (RtlStringCbCopyA.c)
 *     _strnicmp @ 0x140143FEC (_strnicmp.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopStoreArcInformation(__int64 a1)
{
  _QWORD *v1; // r15
  __int64 v2; // r12
  PVOID *v3; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // r14
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  __int64 v8; // rsi
  SIZE_T v9; // rsi
  char *PoolWithTagPriority; // rax
  char *v11; // rbp
  PVOID **v12; // rax
  PVOID *v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  PVOID *i; // rcx

  v1 = *(_QWORD **)(a1 + 232);
  v2 = dword_1402D6390;
  v3 = &IoArcTableListHead;
  IoArcTableListHead = &IoArcTableListHead;
  v4 = 0;
  qword_1406FBC50 = (__int64)&IoArcTableListHead;
  v5 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 )
  {
LABEL_17:
    if ( v3 != &IoArcTableListHead )
    {
      do
      {
        if ( !*((_BYTE *)v3 + 36) && !*((_BYTE *)v3 + 72) )
        {
          v16 = *((_DWORD *)v3 + 8);
          for ( i = (PVOID *)*v3; i != &IoArcTableListHead; i = (PVOID *)*i )
          {
            if ( !*((_BYTE *)i + 36) && !*((_BYTE *)i + 72) && v16 == *((_DWORD *)i + 8) )
            {
              *((_BYTE *)v3 + 72) = 1;
              *((_BYTE *)i + 72) = 1;
            }
          }
        }
        v3 = (PVOID *)*v3;
      }
      while ( v3 != &IoArcTableListHead );
      v3 = (PVOID *)IoArcTableListHead;
    }
    if ( (_DWORD)v2 == 1 )
    {
      while ( v3 != &IoArcTableListHead )
      {
        if ( *((_BYTE *)v3 + 76) )
        {
          if ( *((_BYTE *)v3 + 72) )
            IopAmbiguousSystemDisk = 1;
        }
        v3 = (PVOID *)*v3;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = ViVerifierDriverAddedThunkListHead
         ? ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             0x50uLL,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
         : ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x20206F49u);
      v7 = v6;
      if ( !v6 )
        break;
      v8 = -1LL;
      do
        ++v8;
      while ( *(_BYTE *)(v5[3] + v8) );
      v9 = v8 + 1;
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = (char *)ExAllocatePoolWithTagPriority(
                                        NonPagedPoolNx,
                                        v9,
                                        0x20206F49u,
                                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x20206F49u);
      v11 = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
      {
        v4 = -1073741670;
        ExFreePoolWithTag(v7, 0);
        goto LABEL_33;
      }
      memset(v7, 0, 0x50uLL);
      *v7 = *(_OWORD *)v5;
      v7[1] = *((_OWORD *)v5 + 1);
      v7[2] = *((_OWORD *)v5 + 2);
      v7[3] = *((_OWORD *)v5 + 3);
      RtlStringCbCopyA(v11, v9, (NTSTRSAFE_PCSTR)v5[3]);
      *((_QWORD *)v7 + 3) = v11;
      if ( v2 == 1 && v9 >= 9 && !strnicmp(&v11[v9 - 9], "rdisk(0)", 8uLL) )
        *((_BYTE *)v7 + 76) = 1;
      v12 = (PVOID **)qword_1406FBC50;
      *(_QWORD *)v7 = &IoArcTableListHead;
      *((_QWORD *)v7 + 1) = v12;
      if ( *v12 != &IoArcTableListHead )
        __fastfail(3u);
      *v12 = (PVOID *)v7;
      qword_1406FBC50 = (__int64)v7;
      v5 = (_QWORD *)*v5;
      if ( v5 == v1 )
      {
        v3 = (PVOID *)IoArcTableListHead;
        goto LABEL_17;
      }
    }
    v4 = -1073741670;
LABEL_33:
    while ( 1 )
    {
      v14 = (PVOID *)IoArcTableListHead;
      if ( IoArcTableListHead == &IoArcTableListHead )
        break;
      v15 = *(_QWORD *)IoArcTableListHead;
      if ( *((PVOID **)IoArcTableListHead + 1) != &IoArcTableListHead || *(PVOID *)(v15 + 8) != IoArcTableListHead )
        __fastfail(3u);
      IoArcTableListHead = *(PVOID *)IoArcTableListHead;
      *(_QWORD *)(v15 + 8) = &IoArcTableListHead;
      ExFreePoolWithTag(v14[3], 0);
      ExFreePoolWithTag(v14, 0);
    }
  }
  return v4;
}
