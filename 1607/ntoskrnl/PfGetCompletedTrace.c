/*
 * XREFs of PfGetCompletedTrace @ 0x1403E80E4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PfTFreeTraceDump @ 0x140006860 (PfTFreeTraceDump.c)
 *     PfFbBufferListFlushStandby @ 0x14000695C (PfFbBufferListFlushStandby.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  void **v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  BOOL v10; // r8d
  void ***v11; // rdi
  int *v12; // r15
  void ***v13; // rax
  unsigned int v14; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&Mutex);
    v7 = dword_140328268;
    if ( !dword_140328268 )
      break;
    dword_140328268 = 0;
    KeReleaseGuardedMutex(&Mutex);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140328120);
  }
  v8 = dword_140328258;
  v9 = dword_14032825C;
  v10 = dword_140328258 >= (unsigned int)dword_14032825C;
  while ( 1 )
  {
    if ( v7 )
    {
      v11 = (void ***)&unk_140328238;
      v12 = &dword_140328258;
    }
    else
    {
      v11 = (void ***)&unk_140328248;
      v12 = &dword_140328260;
    }
    if ( *v11 != (void **)v11 )
      break;
    if ( (unsigned int)++v7 >= 2 )
      goto LABEL_13;
  }
  v4 = *v11;
  v5 = *((_DWORD *)*v11 + 6) + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v14 = -1073741789;
    goto LABEL_18;
  }
  v13 = (void ***)*v4;
  if ( v4[1] != v11 || v13[1] != v4 )
    __fastfail(3u);
  *v11 = (void **)v13;
  v13[1] = (void **)v11;
  --*v12;
  v9 = dword_14032825C;
  v8 = dword_140328258;
LABEL_13:
  if ( v10 && v8 < v9 )
  {
    PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 2);
    KeSetEvent(&Event, 0, 0);
  }
  KeReleaseGuardedMutex(&Mutex);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *a1 = 0LL;
    a1[1] = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_1403286A8) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_1403286A8)) << 8);
    memmove(a1 + 2, v4 + 2, *((unsigned int *)v4 + 6));
    *a4 = v5;
    PfTFreeTraceDump(v4);
    v14 = 0;
  }
  else
  {
    v14 = -2147483622;
  }
LABEL_18:
  if ( v6 )
    KeReleaseGuardedMutex(&Mutex);
  return v14;
}
