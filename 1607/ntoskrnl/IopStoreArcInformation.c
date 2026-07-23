/*
 * XREFs of IopStoreArcInformation @ 0x14079A6CC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlStringCbCopyA @ 0x1400C76AC (RtlStringCbCopyA.c)
 *     _strnicmp @ 0x14014D97C (_strnicmp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
  _QWORD *v12; // rax
  PVOID *v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  PVOID *i; // rcx

  v1 = *(_QWORD **)(a1 + 232);
  v2 = dword_1402FD030;
  v3 = &IoArcTableListHead;
  IoArcTableListHead = &IoArcTableListHead;
  v4 = 0;
  qword_140747D70 = (__int64)&IoArcTableListHead;
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
      v12 = (_QWORD *)qword_140747D70;
      if ( *(PVOID **)qword_140747D70 != &IoArcTableListHead )
        __fastfail(3u);
      *(_QWORD *)v7 = &IoArcTableListHead;
      *((_QWORD *)v7 + 1) = v12;
      *v12 = v7;
      qword_140747D70 = (__int64)v7;
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
