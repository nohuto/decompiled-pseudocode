/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x1C0044754
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C0051258 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  int v5; // edx
  char *PoolWithTag; // rdi
  unsigned __int8 *v8; // rbx
  __int64 v9; // rax

  v4 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x44706341u);
  if ( PoolWithTag )
  {
    v8 = *(unsigned __int8 **)(*(_QWORD *)a1 + 96LL);
    memset(PoolWithTag, 0, 0x90uLL);
    *((_QWORD *)PoolWithTag + 2) = 4LL;
    *((_QWORD *)PoolWithTag + 4) = a1;
    AMLIReferenceHandleEx(a1);
    PoolWithTag[40] = v8[1];
    *((_DWORD *)PoolWithTag + 16) = 3;
    if ( *v8 < 6u )
      v4 = SystemPowerStateTranslation[*v8];
    *((_DWORD *)PoolWithTag + 11) = v4;
    *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
    *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
    v9 = *(_QWORD *)a1;
    *a2 = PoolWithTag;
    *(_QWORD *)(v9 + 104) = PoolWithTag;
    return 259LL;
  }
  else
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      22,
      (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      144);
    return 3221225626LL;
  }
}
