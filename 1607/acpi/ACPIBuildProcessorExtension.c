/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C000AFE0
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C000B1B0 (OSNotifyCreateProcessor.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000397C (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C000CDE8 (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  char *v9; // rax
  char *v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  __int64 *v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rsi
  const char *v17; // rdx
  const char *v18; // rcx
  int v19; // edx
  __int64 v20; // rax
  const char *v21; // rdx
  const char *v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rax

  if ( !Src )
    return 3221225524LL;
  result = ACPIBuildDeviceExtension(a1, a2, a3);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a3;
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x1000300000uLL);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
      *(_QWORD *)(v7 + 560) = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src, (unsigned __int16)AcpiProcessorString);
        v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x53706341u);
        *(_QWORD *)(v7 + 184) = v9;
        if ( v9 )
        {
          strcpy(v9, "ACPI\\Processor");
          v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
          *(_QWORD *)(v7 + 568) = v10;
          if ( !v10 )
            return 3221225626LL;
          RtlStringCchPrintfA(v10, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 8LL));
          _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x8001E00000000000uLL);
          v12 = *(_QWORD *)(v7 + 8);
          v13 = qword_1C002C340;
          v14 = qword_1C002C340;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v13 = *(__int64 **)(v7 + 560);
            if ( (v12 & 0x400000000000LL) != 0 )
              v14 = *(__int64 **)(v7 + 568);
          }
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            6,
            51,
            (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
            v6,
            v7,
            (__int64)v13,
            (__int64)v14);
          return v6;
        }
        v20 = *(_QWORD *)(v7 + 8);
        v16 = qword_1C002C340;
        v21 = (const char *)qword_1C002C340;
        v22 = (const char *)qword_1C002C340;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v21 = *(const char **)(v7 + 560);
          if ( (v20 & 0x400000000000LL) != 0 )
            v22 = *(const char **)(v7 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x31u,
          (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
          15,
          v7,
          v21,
          v22);
      }
      else
      {
        v15 = *(_QWORD *)(v7 + 8);
        v16 = qword_1C002C340;
        v17 = (const char *)qword_1C002C340;
        v18 = (const char *)qword_1C002C340;
        if ( (v15 & 0x200000000000LL) != 0 )
        {
          v17 = 0LL;
          if ( (v15 & 0x400000000000LL) != 0 )
            v18 = *(const char **)(v7 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x30u,
          (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
          AcpiProcessorString,
          v7,
          v17,
          v18);
      }
      v23 = *(_QWORD *)(v7 + 8);
      v6 = -1073741670;
      v24 = qword_1C002C340;
      if ( (v23 & 0x200000000000LL) != 0 )
      {
        v16 = *(__int64 **)(v7 + 560);
        if ( (v23 & 0x400000000000LL) != 0 )
          v24 = *(__int64 **)(v7 + 568);
      }
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        6,
        50,
        (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
        154,
        v7,
        (__int64)v16,
        (__int64)v24);
      if ( *(_QWORD *)(v7 + 568) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFEBFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 568), 0);
        *(_QWORD *)(v7 + 568) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 560) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 560), 0);
        *(_QWORD *)(v7 + 560) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 184) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0x7FFFFFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 184), 0);
        *(_QWORD *)(v7 + 184) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x2000000000000uLL);
      return v6;
    }
  }
  return result;
}
