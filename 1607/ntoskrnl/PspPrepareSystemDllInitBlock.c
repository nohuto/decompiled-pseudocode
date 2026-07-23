/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x1404FDC24
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MmGetCfgBitMapInformation @ 0x1404FDDB0 (MmGetCfgBitMapInformation.c)
 *     PsWow64GetProcessMachine @ 0x1404FDDF0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 CfgBitMapInformation; // rsi
  __int64 v6; // r12
  _KPROCESS *Process; // r9
  __int64 v8; // r8
  __int64 v9; // r15
  int v10; // eax
  int *v11; // rdx
  int v13; // ecx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  CfgBitMapInformation = 0LL;
  v14 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)a1 )
  {
    v13 = a1 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_4;
      v4 = (unsigned int)dword_1407485FC;
    }
    else
    {
      v4 = (unsigned int)dword_1407485BC;
    }
    CfgBitMapInformation = MmGetCfgBitMapInformation(1LL, &v14, a3, Process);
    goto LABEL_4;
  }
  v4 = PspSystemDllInitBlock;
  CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v14, a3, Process);
  if ( Process[1].ActiveProcessors.Bitmap[7] )
    v6 = MmGetCfgBitMapInformation(1LL, &v15, v8, Process);
LABEL_4:
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 352);
  else
    v9 = 0LL;
  if ( *(_DWORD *)v4 != 128 )
    return 3221225561LL;
  *(_QWORD *)(v4 + 8) = *((_QWORD *)PspSystemDlls + 8);
  if ( (unsigned __int16)PsWow64GetProcessMachine(Process) == 452 )
  {
    v10 = 2;
    v11 = &PsWowArmSharedInformation;
  }
  else
  {
    v10 = 1;
    v11 = &PsWow64SharedInformation;
  }
  *(_DWORD *)(v4 + 4) = *((_DWORD *)*(&PspSystemDlls + v10) + 16);
  *(_OWORD *)(v4 + 16) = *(_OWORD *)v11;
  *(_OWORD *)(v4 + 32) = *((_OWORD *)v11 + 1);
  *(_OWORD *)(v4 + 48) = *((_OWORD *)v11 + 2);
  *(_OWORD *)(v4 + 64) = *((_OWORD *)v11 + 3);
  *(_DWORD *)(v4 + 80) = ExGenRandom(1);
  *(_DWORD *)(v4 + 84) = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      *(_DWORD *)(v4 + 84) |= 1u;
  }
  *(_QWORD *)(v4 + 88) = v9;
  *(_QWORD *)(v4 + 96) = CfgBitMapInformation;
  *(_QWORD *)(v4 + 104) = v14;
  *(_QWORD *)(v4 + 112) = v6;
  *(_QWORD *)(v4 + 120) = v15;
  return 0LL;
}
