/*
 * XREFs of ACPILoadProcessRSDT @ 0x1C0085D88
 * Callers:
 *     ACPIInitialize @ 0x1C0086558 (ACPIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0065778 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIPccInitialize @ 0x1C007BAA4 (ACPIPccInitialize.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00857B0 (ACPIRegDumpAcpiTables.c)
 *     ACPILoadProcessFADT @ 0x1C0085C08 (ACPILoadProcessFADT.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C0085F30 (ACPILoadAddDynamicDataBlockTable.c)
 */

__int64 ACPILoadProcessRSDT()
{
  char v0; // r15
  char v1; // r12
  char v2; // r13
  int v3; // ebx
  _DWORD *v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  int **v7; // r14
  int *v8; // rdi
  int v9; // eax
  _OWORD *v11; // rax
  int v12; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v14; // rdi
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  if ( v4 )
  {
    v5 = *v4;
    if ( *v4 )
    {
      v6 = 0;
      v7 = (int **)(v4 + 2);
      while ( 1 )
      {
        v8 = *v7;
        v9 = **v7;
        if ( v9 == 1413763923 || v9 == 1346584902 || v9 == 1128878145 || v9 == 1413694288 || v9 == 1413763920 )
          break;
LABEL_9:
        ++v6;
        ++v7;
        if ( v6 >= v5 )
        {
          if ( !g_SimulatorCallbackObject && !AcpiLoadSimulatorTable )
            goto LABEL_12;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
          P = PoolWithTag;
          v14 = PoolWithTag;
          if ( !PoolWithTag )
          {
LABEL_35:
            v3 = -1073741670;
            goto LABEL_13;
          }
          memset(PoolWithTag, 0, 0x24uLL);
          *v14 = 1413763923;
          v14[1] = 36;
          *((_WORD *)v14 + 4) = 1;
          v14[6] = 1;
          v14[8] = 1;
          *(_DWORD *)((char *)v14 + 10) = 1413894989;
          *((_QWORD *)v14 + 2) = 0x7274616C756D6973LL;
          v14[7] = 1413894989;
          if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
          {
            v3 = ACPILoadAddDynamicDataBlockTable(P);
            if ( v3 < 0 )
            {
              ExFreePoolWithTag(P, 0);
              goto LABEL_13;
            }
          }
          else
          {
            ExFreePoolWithTag(P, 0);
          }
LABEL_12:
          ACPIRegDumpAcpiTables();
          goto LABEL_13;
        }
      }
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
      P = v11;
      if ( !v11 )
        goto LABEL_35;
      *v11 = *(_OWORD *)v8;
      v11[1] = *((_OWORD *)v8 + 1);
      *((_DWORD *)v11 + 8) = v8[8];
      *((_DWORD *)v11 + 1) = 36;
      if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
        v8 = (int *)P;
      else
        ExFreePoolWithTag(P, 0);
      switch ( *v8 )
      {
        case 1128878145:
          if ( !v1 )
          {
            v1 = 1;
            *((_QWORD *)AcpiInformation + 4) = v8;
          }
          break;
        case 1346584902:
          if ( !v0 )
          {
            v0 = 1;
            *((_QWORD *)AcpiInformation + 1) = v8;
            v12 = ACPILoadProcessFADT();
            goto LABEL_25;
          }
          break;
        case 1413694288:
          if ( !v2 )
          {
            v2 = 1;
            v12 = ACPIPccInitialize((__int64)v8);
            goto LABEL_25;
          }
          break;
        case 1413763920:
        case 1413763923:
          v12 = ACPILoadAddDynamicDataBlockTable(v8);
LABEL_25:
          v3 = v12;
          break;
      }
      if ( v3 < 0 )
        goto LABEL_13;
      goto LABEL_9;
    }
  }
  v3 = -1072431079;
LABEL_13:
  if ( !v0 )
    return (unsigned int)-1072431079;
  return (unsigned int)v3;
}
