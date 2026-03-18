/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x1C0034E20
 * Callers:
 *     OSNotifyCreate @ 0x1C000B330 (OSNotifyCreate.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  char *PoolWithTag; // rdi
  unsigned __int8 *v7; // rbx
  __int64 v8; // rax

  v4 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x44706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v7 = *(unsigned __int8 **)(*(_QWORD *)a1 + 88LL);
  memset(PoolWithTag, 0, 0x90uLL);
  *((_QWORD *)PoolWithTag + 2) = 4LL;
  *((_QWORD *)PoolWithTag + 4) = a1;
  AMLIReferenceHandleEx(a1);
  PoolWithTag[40] = v7[1];
  *((_DWORD *)PoolWithTag + 16) = 3;
  if ( *v7 < 6u )
    v4 = SystemPowerStateTranslation[*v7];
  *((_DWORD *)PoolWithTag + 11) = v4;
  *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 48;
  *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 48;
  *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
  *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
  *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
  *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
  v8 = *(_QWORD *)a1;
  *a2 = PoolWithTag;
  *(_QWORD *)(v8 + 96) = PoolWithTag;
  return 259LL;
}
