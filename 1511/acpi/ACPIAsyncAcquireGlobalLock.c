/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x1C001B310
 * Callers:
 *     GlobalLockEventHandler @ 0x1C001B2E0 (GlobalLockEventHandler.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C003CED4 (ACPIIoctlAcquireGlobalLock.c)
 * Callees:
 *     ACPIAcquireHardwareGlobalLock @ 0x1C001B494 (ACPIAcquireHardwareGlobalLock.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  char *v4; // rcx
  __int64 v5; // r9
  _QWORD *v6; // rdx
  char v7; // al
  unsigned int v8; // edi
  _QWORD **v10; // rcx
  _QWORD *i; // rax
  char *v12; // rbx
  char *v13; // rax
  char **v14; // rcx

  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    return 0LL;
  }
  else
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
    v4 = (char *)AcpiInformation;
    LOBYTE(v5) = v2;
    v6 = (_QWORD *)((char *)AcpiInformation + 48);
    if ( (_QWORD *)*v6 == v6
      && (v7 = ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5), v6, v3, v5),
          v4 = (char *)AcpiInformation,
          v8 = 0,
          v7) )
    {
      *((_QWORD *)AcpiInformation + 9) = a1;
      *((_DWORD *)AcpiInformation + 20) = 1;
LABEL_5:
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v5);
      return v8;
    }
    else
    {
      v10 = (_QWORD **)(v4 + 48);
      for ( i = *v10; i != v10; i = (_QWORD *)*i )
      {
        if ( i - 2 == (_QWORD *)a1 )
        {
          v8 = 259;
          ++*((_WORD *)i - 3);
          goto LABEL_5;
        }
      }
      *(_WORD *)(a1 + 10) = 1;
      v12 = (char *)(a1 + 16);
      v13 = (char *)AcpiInformation + 48;
      v14 = (char **)*((_QWORD *)AcpiInformation + 7);
      *(_QWORD *)v12 = (char *)AcpiInformation + 48;
      *((_QWORD *)v12 + 1) = v14;
      if ( *v14 != v13 )
        __fastfail(3u);
      *v14 = v12;
      *((_QWORD *)v13 + 1) = v12;
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v5);
      return 259LL;
    }
  }
}
