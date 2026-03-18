/*
 * XREFs of ACPILoadProcessRSDT @ 0x1C00A6C1C
 * Callers:
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0014508 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIPccInitialize @ 0x1C009CEE4 (ACPIPccInitialize.c)
 *     ACPILoadProcessFADT @ 0x1C00A65F4 (ACPILoadProcessFADT.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C00A6E3C (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00A7620 (ACPIRegDumpAcpiTables.c)
 */

__int64 ACPILoadProcessRSDT()
{
  char v0; // r12
  int v1; // ebx
  _DWORD *v2; // rax
  int v3; // edx
  _DWORD *v4; // rdi
  unsigned int v5; // r14d
  int v6; // edx
  unsigned int v7; // r13d
  int **v8; // r15
  int *v9; // rdi
  int v10; // eax
  _OWORD *PoolWithTag; // rax
  int v13; // eax
  int v14; // r9d
  PVOID v15; // rax
  _DWORD *v16; // rdi
  int v17; // edx
  PVOID v18; // rdi
  PVOID v19; // [rsp+70h] [rbp+8h] BYREF
  char v20; // [rsp+78h] [rbp+10h]
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v0 = 0;
  v20 = 0;
  v1 = 0;
  LOBYTE(v19) = 0;
  v2 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v4 = v2;
  if ( v2 )
  {
    v5 = *v2;
    if ( *v2 )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        6,
        19,
        (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
        *v2);
      v7 = 0;
      v8 = (int **)(v4 + 2);
      while ( 1 )
      {
        v9 = *v8;
        v10 = **v8;
        if ( v10 == 1414742611 )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            6,
            20,
            (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
            (char)*v8);
        }
        else
        {
          if ( v10 == 1413763923 || v10 == 1346584902 || v10 == 1128878145 || v10 == 1413763920 || v10 == 1413694288 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
            P = PoolWithTag;
            if ( !PoolWithTag )
              goto LABEL_42;
            *PoolWithTag = *(_OWORD *)v9;
            PoolWithTag[1] = *((_OWORD *)v9 + 1);
            *((_DWORD *)PoolWithTag + 8) = v9[8];
            *((_DWORD *)PoolWithTag + 1) = 36;
            if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
              v9 = (int *)P;
            else
              ExFreePoolWithTag(P, 0);
            v6 = *v9 - 1128878145;
            if ( *v9 == 1128878145 )
            {
              if ( !v20 )
              {
                v20 = 1;
                *((_QWORD *)AcpiInformation + 4) = v9;
                goto LABEL_28;
              }
              v14 = 23;
            }
            else
            {
              v6 = *v9 - 1346584902;
              if ( *v9 == 1346584902 )
              {
                if ( !v0 )
                {
                  v0 = 1;
                  *((_QWORD *)AcpiInformation + 1) = v9;
                  v13 = ACPILoadProcessFADT();
LABEL_27:
                  v1 = v13;
                  goto LABEL_28;
                }
                v14 = 22;
              }
              else
              {
                v6 = *v9 - 1413694288;
                if ( *v9 != 1413694288 )
                {
                  v6 = *v9 - 1413763920;
                  if ( *v9 == 1413763920 || *v9 == 1413763923 )
                  {
                    v13 = ACPILoadAddDynamicDataBlockTable(v9);
                    goto LABEL_27;
                  }
LABEL_28:
                  if ( v1 < 0 )
                    goto LABEL_15;
                  goto LABEL_11;
                }
                if ( !(_BYTE)v19 )
                {
                  LOBYTE(v19) = 1;
                  v13 = ACPIPccInitialize((__int64)v9);
                  goto LABEL_27;
                }
                v14 = 24;
              }
            }
            LOBYTE(v6) = 4;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v6,
              6,
              v14,
              (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids);
            goto LABEL_28;
          }
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            6,
            21,
            (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
            **v8);
        }
LABEL_11:
        ++v7;
        ++v8;
        if ( v7 >= v5 )
        {
          if ( !g_SimulatorCallbackObject && !AcpiLoadSimulatorTable )
            goto LABEL_14;
          v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
          v19 = v15;
          v16 = v15;
          if ( !v15 )
          {
LABEL_42:
            v1 = -1073741670;
            goto LABEL_15;
          }
          memset(v15, 0, 0x24uLL);
          *v16 = 1413763923;
          v16[1] = 36;
          *((_WORD *)v16 + 4) = 1;
          v16[6] = 1;
          v16[8] = 1;
          *(_DWORD *)((char *)v16 + 10) = 1413894989;
          *((_QWORD *)v16 + 2) = 0x7274616C756D6973LL;
          v16[7] = 1413894989;
          if ( ACPIRegReadAMLRegistryEntry((__int64 *)&v19) )
          {
            v18 = v19;
            LOBYTE(v17) = 4;
            WPP_RECORDER_SF_q(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              6,
              25,
              (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
              (char)v19);
            v1 = ACPILoadAddDynamicDataBlockTable(v18);
            if ( v1 < 0 )
            {
              ExFreePoolWithTag(v18, 0);
              goto LABEL_15;
            }
          }
          else
          {
            ExFreePoolWithTag(v19, 0);
          }
LABEL_14:
          ACPIRegDumpAcpiTables();
          goto LABEL_15;
        }
      }
    }
  }
  LOBYTE(v3) = 2;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    6,
    18,
    (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids);
  v1 = -1072431079;
LABEL_15:
  if ( !v0 )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      6,
      26,
      (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids);
    return (unsigned int)-1072431079;
  }
  return (unsigned int)v1;
}
