/*
 * XREFs of _PnpCtxOpenMachine @ 0x140579A88
 * Callers:
 *     PiPnpRtlInit @ 0x140551E10 (PiPnpRtlInit.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _SysCtxOpenMachine @ 0x140579C44 (_SysCtxOpenMachine.c)
 *     _SysCtxCloseMachine @ 0x1406DFA24 (_SysCtxCloseMachine.c)
 */

__int64 __fastcall PnpCtxOpenMachine(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edi
  struct _ERESOURCE *v14; // rax
  struct _ERESOURCE *v15; // rsi

  *a7 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x160uLL, 0x52504E50u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x160uLL);
    v13 = SysCtxOpenMachine(v11, v10, v12, a4);
    if ( v13 >= 0 )
    {
      if ( MEMORY[0] < 0xA000000u )
      {
        v13 = -1073741637;
      }
      else
      {
        v9[2] = 0LL;
        v9[3] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[6] = 0LL;
        v9[7] = 0LL;
        v9[8] = 0LL;
        v9[9] = 0LL;
        v14 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x52504E50u);
        v15 = v14;
        if ( v14 )
        {
          v13 = ExInitializeResourceLite(v14);
          if ( v13 >= 0 )
          {
            v9[10] = v15;
            v15 = 0LL;
          }
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
          if ( v13 >= 0 )
          {
            *v9 = 0LL;
            v9[1] = 0LL;
            memset(v9 + 11, 0, 0x88uLL);
            v9[18] = PnpDispatchDevice;
            v9[19] = PnpDispatchInstallerClass;
            v9[20] = PnpDispatchDeviceInterface;
            v9[21] = PnpDispatchInterfaceClass;
            v9[22] = PnpDispatchDeviceContainer;
            memset(v9 + 28, 0, 0x58uLL);
            v9[39] = 0LL;
            v9[40] = 0LL;
            v9[41] = 0LL;
            v9[42] = 0LL;
            v9[43] = 0LL;
            *a7 = v9;
            v9 = 0LL;
          }
        }
        else
        {
          v13 = -1073741801;
        }
      }
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
