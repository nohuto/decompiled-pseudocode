/*
 * XREFs of ACPIBuildProcessSpecialSynchronizationList @ 0x1C0012E74
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C0011D70 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C0012160 (ACPIBuildProcessGenericComplete.c)
 */

__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PSLIST_ENTRY v0; // rsi
  unsigned int v1; // ebx
  char v2; // di
  PSLIST_ENTRY v3; // rbp
  int Next; // eax
  PSLIST_ENTRY v6; // rsi
  PSLIST_ENTRY v7; // rdi
  const char *v8; // r10
  const char *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  const char *v14; // r11
  const char *v15; // r8
  __int64 v16; // r10
  __int64 v17; // rdx

  v0 = AcpiBuildSpecialSynchronizationList;
  v1 = 0;
  v2 = 1;
  if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
  {
    do
    {
      v3 = v0;
      v0 = v0->Next;
      Next = (int)v3[5].Next;
      if ( (Next & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
        || (Next & 0x20) != 0 && AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList
        || (Next & 1) != 0 && (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList
        || (Next & 2) != 0 && (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
        || (Next & 0x10) != 0 && (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
        || (Next & 4) != 0 && (__int64 *)AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
      {
        v2 = 0;
      }
      else
      {
        if ( (Next & 0x80u) != 0 && (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
          v2 = 0;
        if ( (Next & 0x40) == 0 )
        {
          v13 = (_QWORD *)*((_QWORD *)&v3[2].Next + 1);
          v14 = (const char *)qword_1C002C340;
          v15 = (const char *)qword_1C002C340;
          LOBYTE(v16) = 0;
          if ( v13 )
          {
            v17 = v13[1];
            v16 = *((_QWORD *)&v3[2].Next + 1);
            if ( (v17 & 0x200000000000LL) != 0 )
            {
              v14 = (const char *)v13[70];
              if ( (v17 & 0x400000000000LL) != 0 )
                v15 = (const char *)v13[71];
            }
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x41u,
            (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
            Next,
            v16,
            v14,
            v15);
          ACPIBuildProcessGenericComplete(v3);
        }
      }
    }
    while ( v0 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList );
    if ( v2 )
    {
      v6 = AcpiBuildSpecialSynchronizationList;
      while ( v6 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
      {
        v7 = v6;
        v8 = (const char *)qword_1C002C340;
        v6 = v6->Next;
        v9 = (const char *)qword_1C002C340;
        LOBYTE(v10) = 0;
        v11 = (_QWORD *)*((_QWORD *)&v7[2].Next + 1);
        if ( v11 )
        {
          v12 = v11[1];
          v10 = *((_QWORD *)&v7[2].Next + 1);
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v8 = (const char *)v11[70];
            if ( (v12 & 0x400000000000LL) != 0 )
              v9 = (const char *)v11[71];
          }
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x42u,
          (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
          (char)v7[5].Next,
          v10,
          v8,
          v9);
        ACPIBuildProcessGenericComplete(v7);
      }
    }
    else
    {
      return 259;
    }
  }
  return v1;
}
