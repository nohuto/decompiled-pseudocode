/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0045540
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rdx
  __int64 SystemArgument2; // rcx
  __int64 v8; // r8
  unsigned int i; // ebx
  char *v10; // rsi
  unsigned int CurrentProcessId; // eax
  __int64 v12; // rax
  char v13; // al

  v2 = a1;
  PsGetCurrentProcess(a1, a2);
  GreAcquireHmgrSemaphore(v4, v3, v5);
  for ( i = 1; i < gcMaxHmgr; ++i )
  {
    v6 = 3LL * i;
    SystemArgument2 = (__int64)WPP_MAIN_CB.Dpc.SystemArgument2;
    v10 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * i;
    if ( v2 )
    {
      if ( v2 == v10[14] )
        goto LABEL_7;
    }
    else if ( (unsigned __int8)(v10[14] - 1) <= 0x1Du )
    {
LABEL_7:
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      SystemArgument2 = *((_DWORD *)v10 + 2) & 0xFFFFFFFE;
      if ( (_DWORD)SystemArgument2 == (CurrentProcessId & 0xFFFFFFFC) )
      {
        v12 = *(_QWORD *)v10;
        *((_DWORD *)v10 + 2) = SystemArgument2;
        *(_DWORD *)(v12 + 8) = 0;
        *(_WORD *)(*(_QWORD *)v10 + 12LL) = 0;
        *(_QWORD *)(*(_QWORD *)v10 + 16LL) = 0LL;
        v10[15] &= ~1u;
        v13 = v10[15];
        if ( (v13 & 0x20) != 0 )
          *((_QWORD *)v10 + 2) = 0LL;
        v10[15] = v13 & 0xDF;
      }
    }
  }
  GreReleaseHmgrSemaphore(SystemArgument2, v6, v8);
}
