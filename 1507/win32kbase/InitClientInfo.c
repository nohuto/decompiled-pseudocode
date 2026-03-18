/*
 * XREFs of InitClientInfo @ 0x1C0050180
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C00818B0 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  PVOID CurrentProcess; // rcx
  BOOL v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 440);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(a1 + 560);
  v4 = *(_QWORD *)(a1 + 440);
  *(_DWORD *)(v4 + 28) = *(_DWORD *)(a1 + 448);
  *(_QWORD *)(*(_QWORD *)(a1 + 440) + 208LL) = 0LL;
  v5 = *(_QWORD *)(a1 + 400);
  if ( v5 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 152LL) = *(_WORD *)(v5 + 72);
    v4 = *(_QWORD *)(a1 + 440);
    *(_QWORD *)(v4 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 440) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
  v7 = 0;
  if ( CurrentProcess )
    v7 = CurrentProcess == g_pepDwm;
  if ( v7 )
    v2 = 1;
  v8 = *(_QWORD *)(a1 + 384);
  if ( *(int *)(v8 + 12) < 0 )
    v2 |= 2u;
  if ( (*(_DWORD *)(v8 + 776) & 0x800) != 0 )
    v2 |= 4u;
  *(_QWORD *)(*(_QWORD *)(a1 + 440) + 224LL) |= v2;
  return 1LL;
}
