/*
 * XREFs of InitClientInfo @ 0x1C0015480
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C0080020 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  PVOID CurrentProcess; // rcx
  BOOL v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 16LL) = *(_DWORD *)(a1 + 552);
  v2 = *(_QWORD *)(a1 + 432);
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(a1 + 440);
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 208LL) = 0LL;
  v3 = *(_QWORD *)(a1 + 392);
  if ( v3 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 432) + 152LL) = *(_WORD *)(v3 + 72);
    v2 = *(_QWORD *)(a1 + 432);
    *(_QWORD *)(v2 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 432) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v2);
  v5 = 0;
  if ( CurrentProcess )
    v5 = CurrentProcess == g_pepDwm;
  v6 = v5;
  v7 = *(_QWORD *)(a1 + 376);
  if ( *(int *)(v7 + 12) < 0 )
    v6 |= 2u;
  if ( (*(_DWORD *)(v7 + 768) & 0x800) != 0 )
    v6 |= 4u;
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 224LL) |= v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 236LL) = 0;
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 432) + 232LL;
  return 1LL;
}
