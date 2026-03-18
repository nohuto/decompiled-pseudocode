/*
 * XREFs of PfTTraceListAdd @ 0x1403E725C
 * Callers:
 *     PfTGenerateTrace @ 0x140483914 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1404D4098 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1403E767C (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x140631784 (PfTTraceListTrim.c)
 */

__int64 __fastcall PfTTraceListAdd(unsigned int *a1)
{
  __int64 v2; // rdx
  BOOL v3; // esi
  int *v4; // rcx
  _QWORD *v5; // rbx
  void **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&Mutex);
  v2 = (unsigned int)dword_14030269C;
  v3 = dword_140302698 < (unsigned int)dword_14030269C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140302688;
    v2 = (unsigned int)dword_1403026A4;
    v4 = &dword_1403026A0;
    if ( dword_1403026A0 + 1 == dword_1403026A4 )
      ++HIDWORD(xmmword_140302790);
  }
  else
  {
    v4 = &dword_140302698;
    v5 = &unk_140302678;
    if ( dword_140302698 + 1 == dword_14030269C )
      ++DWORD2(xmmword_140302790);
    dword_1403026A8 = 1;
  }
  v6 = (void **)v5[1];
  *(_QWORD *)a1 = v5;
  *((_QWORD *)a1 + 1) = v6;
  if ( *v6 != v5 )
    __fastfail(3u);
  *v6 = a1;
  v5[1] = a1;
  if ( ++*v4 > (unsigned int)v2 )
    PfTTraceListTrim(a1[7], v2, v8);
  if ( v5 == (_QWORD *)&unk_140302678 && (_QWORD *)*v5 == v5 )
    dword_1403026A8 = 0;
  if ( v3 && dword_140302698 >= (unsigned int)dword_14030269C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_1403026E8, 0, 0);
  KeReleaseGuardedMutex(&Mutex);
  return PfTTraceListFree(v8);
}
