/*
 * XREFs of MiCreatePagefile @ 0x1405B4DBC
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     MiAllocateModWriterEntry @ 0x14011E6B8 (MiAllocateModWriterEntry.c)
 *     MiReservePageHash @ 0x14016BA8C (MiReservePageHash.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405B50B0 (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
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
  unsigned int v17; // esi
  unsigned int v18; // ebx
  _QWORD *v19; // r15
  _QWORD *ModWriterEntry; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v24; // rdi
  _BYTE v26[256]; // [rsp+20h] [rbp-138h] BYREF

  v11 = a2 == 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x20206D4Du);
  v14 = v26;
  if ( PoolWithTag )
    v14 = PoolWithTag;
  memset(v14, 0, 0x100uLL);
  v14[1] = a5;
  v14[3] = a4 - 2;
  v14[6] = a4 - 2;
  v14[7] = a4 - 2;
  v14[8] = a2;
  v14[23] = a3;
  *v14 = a4;
  v14[2] = a4;
  *((_DWORD *)v14 + 36) = dword_1403D00F8;
  *((_DWORD *)v14 + 39) = 4 * dword_1403D00F8;
  v14[27] = a1;
  v14[24] = 0LL;
  InitializeSListHead((PSLIST_HEADER)v14 + 6);
  v14[26] = 0LL;
  v16 = a7 & 0x80000000;
  if ( (_DWORD)v16 )
  {
    v15 = 128LL;
    *((_WORD *)v14 + 82) |= 0xB0u;
  }
  else if ( v11 )
  {
    *((_WORD *)v14 + 82) |= 0x60u;
  }
  else
  {
    if ( (a7 & 0x40000000) != 0 )
      *((_WORD *)v14 + 82) |= 0x20u;
    if ( (a7 & 0x20000000) != 0 )
    {
      v15 = 128LL;
      *((_WORD *)v14 + 82) |= 0x80u;
    }
  }
  if ( (a8 & 1) != 0 )
    *((_WORD *)v14 + 82) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v14 + 40) = (a7 & 0x3C000000u) >> 26;
  if ( v14 == (_QWORD *)v26 )
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
    v19 = v14 + 9;
    do
    {
      ModWriterEntry = MiAllocateModWriterEntry(a1, (unsigned int)dword_1403D00F8, 0);
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
    *((_OWORD *)v14 + 7) = *a6;
  else
    RtlInitUnicodeString((PUNICODE_STRING)v14 + 7, 0LL);
  if ( !v11 )
  {
    v22 = MiReservePageHash(*((_DWORD *)v14 + 2), v15, v16);
    if ( !v22 )
    {
LABEL_37:
      MiDeletePagefile(v14);
      return 0LL;
    }
    v14[22] = v22;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v14 + 2), v15, v16);
  v24 = PageFileSpaceBitmaps;
  if ( !PageFileSpaceBitmaps )
    goto LABEL_37;
  v14[16] = PageFileSpaceBitmaps;
  RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
  RtlClearBits((PRTL_BITMAP)(v24 + 8), 2u, *(_DWORD *)v14 - 2);
  RtlSetAllBits((PRTL_BITMAP)(v24 + 24));
  if ( !v11 )
    RtlClearBits((PRTL_BITMAP)(v24 + 24), 2u, *(_DWORD *)v14 - 2);
  if ( (*((_BYTE *)v14 + 164) & 0x10) != 0 )
    *((_DWORD *)v14 + 35) = 2;
  else
    *((_DWORD *)v14 + 35) = *(_DWORD *)v14 >> 1;
  *((_DWORD *)v14 + 34) = 2;
  return v14;
}
