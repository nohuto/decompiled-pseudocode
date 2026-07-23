/*
 * XREFs of PopFreeSessionState @ 0x140533EC8
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PopFreeRegistration @ 0x140533F70 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // esi
  __int64 **v3; // rdi
  __int64 *v4; // rbx
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 *v7; // rdx
  _QWORD *v8; // rax

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (__int64 **)((char *)&PopSessionSpecificLists + 16 * i);
    v4 = *v3;
    while ( v4 != (__int64 *)v3 )
    {
      v5 = v4;
      if ( *((_DWORD *)v4 + 12) != a1 )
        goto LABEL_12;
      v6 = *((_DWORD *)v4 + 13);
      if ( (v6 & 2) != 0 )
      {
        *((_DWORD *)v4 + 13) = v6 | 4;
LABEL_12:
        v4 = (__int64 *)*v4;
      }
      else
      {
        v7 = (__int64 *)*v4;
        v4 = (__int64 *)*v4;
        v8 = (_QWORD *)v5[1];
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v8 != v5 )
          __fastfail(3u);
        *v8 = v7;
        v7[1] = (__int64)v8;
        PopFreeRegistration(v5);
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
