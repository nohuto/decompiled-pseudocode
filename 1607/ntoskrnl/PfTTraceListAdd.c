/*
 * XREFs of PfTTraceListAdd @ 0x1403E6D38
 * Callers:
 *     PfTGenerateTrace @ 0x1403E5A04 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1403E6278 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1403E6E94 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x140533DD0 (PfTTraceListTrim.c)
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
  v2 = (unsigned int)dword_14032821C;
  v3 = dword_140328218 < (unsigned int)dword_14032821C;
  if ( a1[7] == 1 )
  {
    v4 = &unk_140328208;
    v2 = (unsigned int)dword_140328224;
    v5 = &dword_140328220;
    if ( dword_140328220 + 1 == dword_140328224 )
      ++HIDWORD(xmmword_140328310);
  }
  else
  {
    v5 = &dword_140328218;
    v4 = &unk_1403281F8;
    if ( dword_140328218 + 1 == dword_14032821C )
      ++DWORD2(xmmword_140328310);
    dword_140328228 = 1;
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
  if ( v4 == (_QWORD *)&unk_1403281F8 && (_QWORD *)*v4 == v4 )
    dword_140328228 = 0;
  if ( v3 && dword_140328218 >= (unsigned int)dword_14032821C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_140328268, 0, 0);
  KeReleaseGuardedMutex(&Mutex);
  return PfTTraceListFree(v8);
}
