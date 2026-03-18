/*
 * XREFs of PfpCopyEvent @ 0x1404F7970
 * Callers:
 *     PfpFlushEventBuffers @ 0x1404F7870 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1404F7BD0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PfpLogPageAccess @ 0x1404F7F70 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x1404F85F4 (PfTReplaceCurrentBuffer.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall PfpCopyEvent(_QWORD *Src)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // al
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  PEPROCESS v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  if ( (*Src & 0x1F000LL) == 0xA000 )
  {
    v2 = Src[4];
    v17 = 0LL;
    v3 = v2;
    if ( (v2 & 0x7FFFFFFFFFFFFFFFuLL) >= 0xFF )
      v3 = -1;
    v4 = 2LL;
    if ( v2 >= 0 )
      v4 = 4098LL;
    v5 = *((unsigned int *)Src + 12);
    LODWORD(v17) = v3 | (*((_DWORD *)Src + 12) << 8);
    v6 = Src[5];
    v7 = Src[3] << 12;
    HIDWORD(Process) = HIDWORD(v7);
    v16 = v4 & 0xFFFFFFFF00FFFFFFuLL | v5 & 0xFFFFFFFFFF000000uLL;
    LODWORD(Process) = v7 & 0xFFFFFE00 | 1;
    v8 = PfpLogPageAccess(v6, (unsigned int)&Process, (unsigned int)&v16, (int)Src + 24, 1);
    if ( v8 )
    {
      v9 = ((qword_140350258 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
         + 40LL * (*(unsigned __int16 *)(v8 + 10) - (unsigned int)*(unsigned __int16 *)(qword_140350258 + 36));
      if ( (*(_BYTE *)(v9 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) >= 0 )
      {
        v13 = Process;
        Flink = Process[1].ThreadListHead.Flink;
        if ( (((unsigned __int64)Flink ^ (unsigned __int64)Process[1].Header.WaitListHead.Blink) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
          && Process[1].Header.WaitListHead.Blink )
        {
          if ( Flink )
          {
            v15 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
            *(_QWORD *)(v9 + 8) = v15;
            *(_QWORD *)(v9 + 8) = v15 & 7 | (8
                                           * ((__int64)v13[1].ThreadListHead.Flink ^ (__int64)v13[1].Header.WaitListHead.Blink));
            *(_DWORD *)(v9 + 28) = *(_DWORD *)&v13[1].BasePriority;
            *(_DWORD *)(v9 + 24) = v13[1].Header.WaitListHead.Blink;
            *(_QWORD *)(v9 + 16) = v13;
          }
        }
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      }
      return 0LL;
    }
    else
    {
      return 3221225864LL;
    }
  }
  else
  {
    v11 = qword_140350230;
    v12 = (*Src >> 2) & 0x3FFLL;
    if ( (unsigned int)(v12 + *(_DWORD *)(qword_140350230 + 16)) > *(_DWORD *)(qword_140350230 + 20) )
    {
      while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140350218, v11) != -1073741823 )
      {
        v11 = qword_140350230;
        if ( (unsigned int)(v12 + *(_DWORD *)(qword_140350230 + 16)) <= *(_DWORD *)(qword_140350230 + 20) )
          goto LABEL_10;
      }
      return 3221225626LL;
    }
    else
    {
LABEL_10:
      *(_DWORD *)(v11 + 16) += v12;
      memmove(
        (void *)(((v11 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * (unsigned int)(*(_DWORD *)(v11 + 16) - v12)),
        Src,
        (unsigned int)(16 * v12));
      return 0LL;
    }
  }
}
