/*
 * XREFs of PfTTraceListAdd @ 0x1403E8368
 * Callers:
 *     PfTGenerateTrace @ 0x1403E7030 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1403E78A8 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1403E84C4 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x140534310 (PfTTraceListTrim.c)
 */

__int64 __fastcall PfTTraceListAdd(unsigned int *a1)
{
  __int64 v2; // rdx
  BOOL v3; // esi
  _QWORD *v4; // rbx
  int *v5; // rcx
  void **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&Mutex);
  v2 = (unsigned int)dword_14032825C;
  v3 = dword_140328258 < (unsigned int)dword_14032825C;
  if ( a1[7] == 1 )
  {
    v4 = &unk_140328248;
    v2 = (unsigned int)dword_140328264;
    v5 = &dword_140328260;
    if ( dword_140328260 + 1 == dword_140328264 )
      ++HIDWORD(xmmword_140328350);
  }
  else
  {
    v5 = &dword_140328258;
    v4 = &unk_140328238;
    if ( dword_140328258 + 1 == dword_14032825C )
      ++DWORD2(xmmword_140328350);
    dword_140328268 = 1;
  }
  v6 = (void **)v4[1];
  if ( *v6 != v4 )
    __fastfail(3u);
  *(_QWORD *)a1 = v4;
  *((_QWORD *)a1 + 1) = v6;
  *v6 = a1;
  v4[1] = a1;
  if ( ++*v5 > (unsigned int)v2 )
    PfTTraceListTrim(a1[7], v2, v8);
  if ( v4 == (_QWORD *)&unk_140328238 && (_QWORD *)*v4 == v4 )
    dword_140328268 = 0;
  if ( v3 && dword_140328258 >= (unsigned int)dword_14032825C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_1403282A8, 0, 0);
  KeReleaseGuardedMutex(&Mutex);
  return PfTTraceListFree(v8);
}
