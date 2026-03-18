/*
 * XREFs of PfGetCompletedTrace @ 0x1404F74C8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PfTFreeTraceDump @ 0x1400D79B4 (PfTFreeTraceDump.c)
 *     PfFbBufferListFlushStandby @ 0x1400D7AC8 (PfFbBufferListFlushStandby.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PfTAccessTracingStart @ 0x1403EBE7C (PfTAccessTracingStart.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  signed __int8 v10; // cf
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  BOOL v15; // r8d
  _QWORD *v16; // rdi
  int *v17; // r12
  __int64 v18; // rax
  unsigned __int8 v19; // r15
  signed __int32 v20; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // r15d
  unsigned __int8 v24; // di
  signed __int32 v25; // eax
  unsigned __int8 v26; // di
  signed __int32 v27; // eax
  _BYTE v28[112]; // [rsp+78h] [rbp+78h] BYREF

  v4 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL;
  v5 = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  v6 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)v4 = 1;
  while ( 1 )
  {
    v7 = KeAbPreAcquire((ULONG_PTR)&dword_140350430, 0LL, 0LL, (__int64)a4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v10 = _interlockedbittestandreset((volatile signed __int32 *)&dword_140350430, 0);
    v11 = v7;
    if ( !v10 )
      ExpAcquireFastMutexContended((ULONG_PTR)&dword_140350430, v7);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    qword_140350438 = (__int64)KeGetCurrentThread();
    dword_140350460 = CurrentIrql;
    v12 = dword_140350428;
    if ( !dword_140350428 )
      break;
    dword_140350428 = 0;
    qword_140350438 = 0LL;
    v24 = dword_140350460;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140350430, 1, 0);
    if ( v25 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140350430, v25);
    __writecr8(v24);
    KeAbPostRelease((ULONG_PTR)&dword_140350430);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_1403502E0);
  }
  v13 = dword_140350418;
  v14 = dword_14035041C;
  v15 = dword_140350418 >= (unsigned int)dword_14035041C;
  while ( 1 )
  {
    if ( v12 )
    {
      v16 = &unk_1403503F8;
      v17 = &dword_140350418;
    }
    else
    {
      v16 = &unk_140350408;
      v17 = &dword_140350420;
    }
    *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v17;
    *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v16;
    if ( (_QWORD *)*v16 != v16 )
      break;
    if ( (unsigned int)++v12 >= 2 )
      goto LABEL_17;
  }
  v5 = (_QWORD *)*v16;
  *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *v16;
  v6 = *((_DWORD *)v5 + 6) + 16;
  *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v6;
  if ( v6 > a2 )
  {
    *a4 = v6;
    v22 = -1073741789;
    goto LABEL_24;
  }
  v18 = *v5;
  if ( (_QWORD *)v5[1] != v16 || *(_QWORD **)(v18 + 8) != v5 )
    __fastfail(3u);
  *v16 = v18;
  *(_QWORD *)(v18 + 8) = v16;
  --*v17;
  v14 = dword_14035041C;
  v13 = dword_140350418;
LABEL_17:
  if ( v15 && v13 < v14 )
  {
    PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 2, v8);
    KeSetEvent(&stru_140367D90, 0, 0);
  }
  qword_140350438 = 0LL;
  v19 = dword_140350460;
  v20 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140350430, 1, 0);
  if ( v20 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140350430, v20);
  __writecr8(v19);
  KeAbPostRelease((ULONG_PTR)&dword_140350430);
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
  if ( v5 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *a1 = 0LL;
    a1[1] = 0LL;
    *(_DWORD *)a1 = 1048577;
    v21 = qword_1403535D8;
    *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = qword_1403535D8;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v21) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(v21)) << 8);
    memmove(a1 + 2, v5 + 2, *((unsigned int *)v5 + 6));
    *a4 = v6;
    PfTFreeTraceDump(v5);
    v22 = 0;
  }
  else
  {
    v22 = -2147483622;
  }
LABEL_24:
  if ( *(_DWORD *)v4 )
  {
    qword_140350438 = 0LL;
    v26 = dword_140350460;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140350430, 1, 0);
    if ( v27 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140350430, v27);
    __writecr8(v26);
    KeAbPostRelease((ULONG_PTR)&dword_140350430);
  }
  return v22;
}
