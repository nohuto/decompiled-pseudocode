/*
 * XREFs of _PnpCtxOpenMachine @ 0x140523F0C
 * Callers:
 *     PiPnpRtlInit @ 0x140524F8C (PiPnpRtlInit.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _SysCtxOpenMachine @ 0x14052408C (_SysCtxOpenMachine.c)
 *     _SysCtxCloseMachine @ 0x140699978 (_SysCtxCloseMachine.c)
 */

__int64 __fastcall PnpCtxOpenMachine(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, _QWORD *a7)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edi

  *a7 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x158uLL, 0x52504E50u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x158uLL);
    v13 = SysCtxOpenMachine(v11, v10, v12, a4);
    if ( v13 >= 0 )
    {
      if ( MEMORY[0] < 0xA000000u )
      {
        v13 = -1073741637;
      }
      else
      {
        *v9 = 0LL;
        v9[2] = 0LL;
        v9[3] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[6] = 0LL;
        v9[7] = 0LL;
        v9[8] = 0LL;
        v9[9] = 0LL;
        v9[1] = 0LL;
        memset(v9 + 10, 0, 0x30uLL);
        memset(v9 + 16, 0, 0x58uLL);
        v9[17] = PnpDispatchDevice;
        v9[18] = PnpDispatchInstallerClass;
        v9[19] = PnpDispatchDeviceInterface;
        v9[20] = PnpDispatchInterfaceClass;
        v9[21] = PnpDispatchDeviceContainer;
        memset(v9 + 27, 0, 0x58uLL);
        v9[38] = 0LL;
        v9[39] = 0LL;
        v9[40] = 0LL;
        v9[41] = 0LL;
        v9[42] = 0LL;
        *a7 = v9;
        v9 = 0LL;
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
