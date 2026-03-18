/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x1404658B4
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14046567C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     MmGetCfgBitMapInformation @ 0x140465A04 (MmGetCfgBitMapInformation.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 CfgBitMapInformation; // rsi
  __int64 v5; // r15
  _KPROCESS *Process; // r9
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0LL;
  CfgBitMapInformation = 0LL;
  v10 = 0LL;
  v5 = 0LL;
  v11 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      v3 = DWORD2(xmmword_14077F400);
      CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v10, a2, Process);
    }
  }
  else
  {
    v3 = PspSystemDllInitBlock;
    CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v10, a2, Process);
    if ( *(_QWORD *)(v7 + 1064) )
      v5 = MmGetCfgBitMapInformation(1LL, &v11, v2, v7);
  }
  if ( v2 )
    v8 = *(_QWORD *)(v2 + 352);
  else
    v8 = 0LL;
  if ( *(_DWORD *)v3 != 128 )
    return 3221225561LL;
  *(_QWORD *)(v3 + 8) = *((_QWORD *)PspSystemDlls + 8);
  *(_DWORD *)(v3 + 4) = *((_DWORD *)off_14077E0E0 + 16);
  *(_OWORD *)(v3 + 16) = PsWow64SharedInformation;
  *(_OWORD *)(v3 + 32) = xmmword_14077F3F0;
  *(_OWORD *)(v3 + 48) = xmmword_14077F400;
  *(_OWORD *)(v3 + 64) = xmmword_14077F410;
  *(_DWORD *)(v3 + 80) = ExGenRandom(1);
  *(_QWORD *)(v3 + 88) = v8;
  *(_QWORD *)(v3 + 96) = CfgBitMapInformation;
  *(_QWORD *)(v3 + 104) = v10;
  *(_QWORD *)(v3 + 112) = v5;
  *(_QWORD *)(v3 + 120) = v11;
  return 0LL;
}
