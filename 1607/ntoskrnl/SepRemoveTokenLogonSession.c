/*
 * XREFs of SepRemoveTokenLogonSession @ 0x140693AF8
 * Callers:
 *     SepLinkLogonSessions @ 0x140080B10 (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x14051A9E0 (SepTokenDeleteMethod.c)
 *     SepSetServerSiloToken @ 0x14068D424 (SepSetServerSiloToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SepRemoveTokenLogonSession(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *i; // rdx
  __int64 *j; // rbx
  __int64 *v8; // rdx
  __int64 **v9; // rax

  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (unsigned int)(1529154084 * *(_DWORD *)(a1 + 24)) >> 28;
    --CurrentThread->KernelApcDisable;
    v4 = v3;
    v5 = &SepRmDbLock + (v3 & 3);
    ExAcquireResourceExclusiveLite(v5, 1u);
    for ( i = *(__int64 **)(SepLogonSessions + 8 * v4); i; i = (__int64 *)*i )
    {
      if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)i + 2)
        && *(_DWORD *)(a1 + 28) == *((_DWORD *)i + 3)
        && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) == i[20] )
      {
        for ( j = (__int64 *)i[22]; j != i + 22; j = (__int64 *)*j )
        {
          if ( j[2] == a1 )
          {
            v8 = (__int64 *)*j;
            v9 = (__int64 **)j[1];
            if ( *(__int64 **)(*j + 8) != j || *v9 != j )
              __fastfail(3u);
            *v9 = v8;
            v8[1] = (__int64)v9;
            ExReleaseResourceLite(v5);
            KeLeaveCriticalRegion();
            ExFreePoolWithTag(j, 0);
            return;
          }
        }
      }
    }
    ExReleaseResourceLite(v5);
    KeLeaveCriticalRegion();
  }
}
