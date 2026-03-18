/*
 * XREFs of PfTTraceListAdd @ 0x1404F8FF0
 * Callers:
 *     PfpSectInfoHandleFullBuffer @ 0x1404F86AC (PfpSectInfoHandleFullBuffer.c)
 *     PfTGenerateTrace @ 0x1404F8758 (PfTGenerateTrace.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1404F91E4 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1405648F0 (PfTTraceListTrim.c)
 */

__int64 __fastcall PfTTraceListAdd(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rdx
  BOOL v10; // esi
  int *v11; // rcx
  _QWORD *v12; // rbx
  void **v13; // rax
  unsigned __int8 v14; // bl
  signed __int32 v15; // eax
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v17[1] = v17;
  v17[0] = v17;
  v5 = KeAbPreAcquire((ULONG_PTR)&dword_140350430, 0LL, 0LL, a4);
  v7 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&dword_140350430, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&dword_140350430, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = (unsigned int)dword_14035041C;
  qword_140350438 = (__int64)KeGetCurrentThread();
  dword_140350460 = CurrentIrql;
  v10 = dword_140350418 < (unsigned int)dword_14035041C;
  if ( a1[7] == 1 )
  {
    v12 = &unk_140350408;
    v9 = (unsigned int)dword_140350424;
    v11 = &dword_140350420;
    if ( dword_140350420 + 1 == dword_140350424 )
      ++HIDWORD(xmmword_140350510);
  }
  else
  {
    v11 = &dword_140350418;
    v12 = &unk_1403503F8;
    if ( dword_140350418 + 1 == dword_14035041C )
      ++DWORD2(xmmword_140350510);
    dword_140350428 = 1;
  }
  v13 = (void **)v12[1];
  *(_QWORD *)a1 = v12;
  *((_QWORD *)a1 + 1) = v13;
  if ( *v13 != v12 )
    __fastfail(3u);
  *v13 = a1;
  v12[1] = a1;
  if ( ++*v11 > (unsigned int)v9 )
    PfTTraceListTrim(a1[7], v9, v17);
  if ( v12 == (_QWORD *)&unk_1403503F8 && (_QWORD *)*v12 == v12 )
    dword_140350428 = 0;
  if ( v10 && dword_140350418 >= (unsigned int)dword_14035041C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v9, 2, v6);
  KeSetEvent(qword_140350468, 0, 0);
  qword_140350438 = 0LL;
  v14 = dword_140350460;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140350430, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140350430, v15);
  __writecr8(v14);
  KeAbPostRelease((ULONG_PTR)&dword_140350430);
  return PfTTraceListFree(v17);
}
