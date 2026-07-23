/*
 * XREFs of PspQueryLastCallThread @ 0x14067D864
 * Callers:
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspQueryLastCallThread(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  bool v4; // r11
  int v6; // r8d
  __int64 v7; // rbx
  __int16 v8; // di
  unsigned __int64 v9; // rax
  signed __int32 v10[4]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]

  v4 = a3 == 16;
  if ( a3 != 24 && a3 != 16 )
    return 3221225476LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    return 3221225485LL;
  v6 = *(_DWORD *)(a1 + 340);
  _InterlockedOr(v10, 0);
  if ( *(_BYTE *)(a1 + 388) != 5 )
    return 3221225473LL;
  if ( *(_BYTE *)(a1 + 562) != 1 )
    return 3221225473LL;
  v7 = *(_QWORD *)(a1 + 136);
  v8 = *(_WORD *)(a1 + 128);
  v11 = *(unsigned int *)(a1 + 436);
  _InterlockedOr(v10, 0);
  if ( v6 != *(_DWORD *)(a1 + 340) )
    return 3221225473LL;
  v9 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v11) * (unsigned __int64)KeMaximumIncrement;
  *(_QWORD *)a2 = v7;
  *(_WORD *)(a2 + 8) = v8;
  if ( !v4 )
    *(_QWORD *)(a2 + 16) = v9;
  if ( a4 )
    *a4 = v4 ? 16 : 24;
  return 0LL;
}
