/*
 * XREFs of MiCreatePagefile @ 0x1405384C0
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x14054E108 (MmStoreRegister.c)
 * Callees:
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     MiAllocateModWriterEntry @ 0x1400E5684 (MiAllocateModWriterEntry.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 *     MiInitializePagefileBitmapsCache @ 0x14013A068 (MiInitializePagefileBitmapsCache.c)
 *     MiReservePageHash @ 0x14013A154 (MiReservePageHash.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405387B0 (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 */

_QWORD *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        char a8)
{
  BOOL v11; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  _QWORD *v19; // r12
  _QWORD *ModWriterEntry; // rax
  _QWORD *v21; // rdi
  ULONG_PTR v22; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v24; // rdi
  PVOID v25; // rax
  _BYTE v27[288]; // [rsp+20h] [rbp-158h] BYREF

  v11 = a2 == 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x20206D4Du);
  v14 = v27;
  if ( PoolWithTag )
    v14 = PoolWithTag;
  memset(v14, 0, 0x120uLL);
  v14[1] = a5;
  v14[3] = a4 - 2;
  v14[6] = a4 - 2;
  v14[7] = a2;
  v14[28] = a3;
  *v14 = a4;
  v14[2] = a4;
  *((_DWORD *)v14 + 31) = dword_140381108;
  *((_DWORD *)v14 + 34) = 4 * dword_140381108;
  v14[32] = a1;
  v14[29] = 0LL;
  InitializeSListHead((PSLIST_HEADER)v14 + 5);
  v14[31] = 0LL;
  v16 = a7 & 0x80000000;
  if ( (_DWORD)v16 )
  {
    v15 = 128LL;
    *((_WORD *)v14 + 102) |= 0xB0u;
  }
  else if ( v11 )
  {
    *((_WORD *)v14 + 102) |= 0x60u;
  }
  else
  {
    if ( (a7 & 0x40000000) != 0 )
      *((_WORD *)v14 + 102) |= 0x20u;
    if ( (a7 & 0x20000000) != 0 )
    {
      v15 = 128LL;
      *((_WORD *)v14 + 102) |= 0x80u;
    }
  }
  if ( (a8 & 1) != 0 )
    *((_WORD *)v14 + 102) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v14 + 50) = (a7 & 0x3C000000u) >> 26;
  if ( v14 == (_QWORD *)v27 )
    goto LABEL_37;
  v17 = 0;
  if ( (_DWORD)v16 )
  {
    v18 = 1;
    goto LABEL_18;
  }
  v18 = 2;
  if ( v11 )
    v18 = 0;
  if ( v18 )
  {
LABEL_18:
    v19 = v14 + 8;
    do
    {
      ModWriterEntry = MiAllocateModWriterEntry(a1, (unsigned int)dword_140381108, 0);
      v21 = ModWriterEntry;
      if ( !ModWriterEntry )
        goto LABEL_37;
      memset(ModWriterEntry, 0, 0x108uLL);
      v21[18] = v14;
      ++v17;
      v21[24] = a1;
      *v19++ = v21;
    }
    while ( v17 < v18 );
  }
  if ( a6 )
    *((_OWORD *)v14 + 6) = *a6;
  else
    RtlInitUnicodeString((PUNICODE_STRING)v14 + 6, 0LL);
  if ( !v11 )
  {
    v22 = MiReservePageHash(*((_DWORD *)v14 + 2), v15, v16);
    if ( !v22 )
      goto LABEL_37;
    v14[27] = v22;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v14 + 2));
  v24 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    v14[14] = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v24 + 8), 2u, *(_DWORD *)v14 - 2);
    RtlSetAllBits((PRTL_BITMAP)(v24 + 24));
    if ( !v11 )
      RtlClearBits((PRTL_BITMAP)(v24 + 24), 2u, *(_DWORD *)v14 - 2);
    *((_DWORD *)v14 + 30) = 2;
    if ( v11 )
      return v14;
    v25 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x7000uLL, 0x6342694Du);
    v14[24] = v25;
    if ( v25 )
    {
      MiInitializePagefileBitmapsCache((__int64)v14);
      return v14;
    }
  }
LABEL_37:
  MiDeletePagefile(v14);
  return 0LL;
}
