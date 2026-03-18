/*
 * XREFs of PfpCopyEvent @ 0x1404D3360
 * Callers:
 *     PfpFlushEventBuffers @ 0x1404D3260 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1404D35C0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PfpIsProcessInfoPresent @ 0x1400FACEC (PfpIsProcessInfoPresent.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PfpLogPageAccess @ 0x1404D3960 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x1404D3FE0 (PfTReplaceCurrentBuffer.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
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
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  if ( (*Src & 0x1F000LL) == 0xA000 )
  {
    v2 = Src[4];
    v16 = 0LL;
    v3 = v2;
    if ( (v2 & 0x7FFFFFFFFFFFFFFFuLL) >= 0xFF )
      v3 = -1;
    v4 = 2LL;
    if ( v2 >= 0 )
      v4 = 4098LL;
    v5 = *((unsigned int *)Src + 12);
    LODWORD(v16) = v3 | (*((_DWORD *)Src + 12) << 8);
    v6 = Src[5];
    v7 = Src[3] << 12;
    HIDWORD(Process) = HIDWORD(v7);
    v15 = v4 & 0xFFFFFFFF00FFFFFFuLL | v5 & 0xFFFFFFFFFF000000uLL;
    LODWORD(Process) = v7 & 0xFFFFFE00 | 1;
    v8 = PfpLogPageAccess(v6, (unsigned int)&Process, (unsigned int)&v15, (int)Src + 24, 1);
    if ( v8 )
    {
      v9 = ((qword_1403024D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
         + 40LL * (*(unsigned __int16 *)(v8 + 10) - (unsigned int)*(unsigned __int16 *)(qword_1403024D8 + 36));
      if ( (*(_BYTE *)(v9 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) >= 0 )
      {
        v13 = Process;
        if ( (((unsigned __int64)Process[1].ThreadListHead.Flink ^ (unsigned __int64)Process) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
          && PfpIsProcessInfoPresent((__int64)Process) )
        {
          v14 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
          *(_QWORD *)(v9 + 8) = v14;
          *(_QWORD *)(v9 + 8) = v14 & 7 | (8 * ((unsigned __int64)v13[1].ThreadListHead.Flink ^ (unsigned __int64)v13));
          *(_DWORD *)(v9 + 28) = v13[1].ThreadSeed[1];
          *(_DWORD *)(v9 + 24) = v13[1].Header.WaitListHead.Blink;
          *(_QWORD *)(v9 + 16) = v13;
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
    v11 = qword_1403024B0;
    v12 = (*Src >> 2) & 0x3FFLL;
    if ( (unsigned int)(v12 + *(_DWORD *)(qword_1403024B0 + 16)) > *(_DWORD *)(qword_1403024B0 + 20) )
    {
      while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140302498, v11) != -1073741823 )
      {
        v11 = qword_1403024B0;
        if ( (unsigned int)(v12 + *(_DWORD *)(qword_1403024B0 + 16)) <= *(_DWORD *)(qword_1403024B0 + 20) )
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
