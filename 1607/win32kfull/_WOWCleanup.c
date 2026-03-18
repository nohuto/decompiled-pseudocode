/*
 * XREFs of _WOWCleanup @ 0x1C01FBDD0
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 */

__int64 __fastcall WOWCleanup(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // dl

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( !a1 )
  {
    v6 = (_QWORD *)(CurrentProcessWin32Process + 312);
    v7 = 2LL;
    do
    {
      while ( 1 )
      {
        v8 = (_QWORD *)*v6;
        if ( !*v6 )
          break;
        if ( *((unsigned __int16 *)v8 + 16) == v2 && (*((_BYTE *)v8 + 34) & 4) != 0 && !*((_DWORD *)v8 + 20) )
          DestroyClass(v5, (_QWORD **)v6);
        else
          v6 = (_QWORD *)*v6;
      }
      v6 = (_QWORD *)((char *)v5 + 320);
      --v7;
    }
    while ( v7 );
    v9 = gSharedInfo[1];
    v10 = v9 + 24LL * giheLast;
    while ( v9 <= v10 )
    {
      v11 = *(_BYTE *)(v9 + 16);
      if ( v11
        && (gahti[16 * v11 + 12] & 2) != 0
        && *(struct tagPROCESSINFO **)(v9 + 8) == v5
        && *(_DWORD *)(*(_QWORD *)v9 + 16LL) == v2
        && v11 != 7
        && (*(_BYTE *)(v9 + 17) & 1) == 0 )
      {
        HMDestroyUnlockedObject(v9);
      }
      v9 += 24LL;
    }
  }
  return 1LL;
}
