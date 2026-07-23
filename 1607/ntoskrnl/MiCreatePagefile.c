/*
 * XREFs of MiCreatePagefile @ 0x140569278
 * Callers:
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     MiAllocateModWriterEntry @ 0x1401007D0 (MiAllocateModWriterEntry.c)
 *     MiInitializePagefileBitmapsCache @ 0x140143274 (MiInitializePagefileBitmapsCache.c)
 *     MiReservePageHash @ 0x140143360 (MiReservePageHash.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x140569560 (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x14065AEEC (MiDeletePagefile.c)
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
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  _QWORD *v20; // r12
  _QWORD *ModWriterEntry; // rax
  _QWORD *v22; // rdi
  ULONG_PTR v23; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v25; // rdi
  PVOID v26; // rax
  _BYTE v28[288]; // [rsp+20h] [rbp-158h] BYREF

  v11 = a2 == 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x20206D4Du);
  v14 = v28;
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
  *((_DWORD *)v14 + 31) = dword_1403A9150;
  *((_DWORD *)v14 + 34) = 4 * dword_1403A9150;
  v14[32] = a1;
  v14[29] = 0LL;
  InitializeSListHead((PSLIST_HEADER)v14 + 5);
  v14[31] = 0LL;
  v17 = a7 & 0x80000000;
  if ( (_DWORD)v17 )
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
  if ( v14 == (_QWORD *)v28 )
    goto LABEL_38;
  v18 = 0;
  if ( (_DWORD)v17 )
  {
    v19 = 1;
    goto LABEL_20;
  }
  v19 = 2;
  if ( v11 )
    v19 = 0;
  if ( v19 )
  {
LABEL_20:
    v20 = v14 + 8;
    do
    {
      ModWriterEntry = MiAllocateModWriterEntry(a1, (unsigned int)dword_1403A9150, 0);
      v22 = ModWriterEntry;
      if ( !ModWriterEntry )
        goto LABEL_38;
      memset(ModWriterEntry, 0, 0x108uLL);
      v22[18] = v14;
      ++v18;
      v22[24] = a1;
      *v20++ = v22;
    }
    while ( v18 < v19 );
  }
  if ( a6 )
    *((_OWORD *)v14 + 6) = *a6;
  else
    RtlInitUnicodeString((PUNICODE_STRING)v14 + 6, 0LL);
  if ( !v11 )
  {
    v23 = MiReservePageHash(*((_DWORD *)v14 + 2), v15, v17);
    if ( !v23 )
      goto LABEL_38;
    v14[27] = v23;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v14 + 2), v15, v17, v16);
  v25 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    v14[14] = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v25 + 8), 2u, *(_DWORD *)v14 - 2);
    RtlSetAllBits((PRTL_BITMAP)(v25 + 24));
    if ( !v11 )
      RtlClearBits((PRTL_BITMAP)(v25 + 24), 2u, *(_DWORD *)v14 - 2);
    *((_DWORD *)v14 + 30) = 2;
    if ( v11 )
      return v14;
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x7000uLL, 0x6342694Du);
    v14[24] = v26;
    if ( v26 )
    {
      MiInitializePagefileBitmapsCache((__int64)v14);
      return v14;
    }
  }
LABEL_38:
  MiDeletePagefile(v14);
  return 0LL;
}
