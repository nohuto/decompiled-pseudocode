/*
 * XREFs of MiCommitVadCfgBits @ 0x140428720
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiCfgInitializeProcess @ 0x14046BDEC (MiCfgInitializeProcess.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140013E84 (MiIsProcessCfgEnabled.c)
 *     MiMarkProcessCfgBits @ 0x1404288E4 (MiMarkProcessCfgBits.c)
 *     MiSelectCfgBitMap @ 0x14042893C (MiSelectCfgBitMap.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1404D73D8 (MiMarkPrivateOpenCfgBits.c)
 */

__int64 __fastcall MiCommitVadCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 *v6; // rdx
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 **v11; // rax
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r10d
  int v15; // r11d
  __int64 result; // rax
  __int64 v17; // rcx

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !MiIsProcessCfgEnabled() )
    return 0LL;
  v8 = *(unsigned int *)(v7 + 24);
  v9 = (v8 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12;
  v10 = ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) + 4096;
  if ( v6 )
  {
    v9 = *v6;
    v10 = (v6[1] | 0xFFF) + 1;
  }
  else if ( (*(_DWORD *)(v7 + 48) & 0x8000) == 0 )
  {
    v11 = *(__int64 ***)(v7 + 72);
    if ( ((*v11)[7] & 0x20) != 0 )
      v4 = **v11;
  }
  v12 = MiSelectCfgBitMap(Process, v9, v4);
  result = MiMarkProcessCfgBits(v14, v13, v15, v9, v10, v12, a3);
  if ( Process[1].ActiveProcessors.Bitmap[7] && (int)result >= 0 )
  {
    v17 = qword_140327FD0 + 276840664;
    if ( v12 != qword_140327FD0 + 276840664 )
      return MiMarkPrivateOpenCfgBits(v17, v9, v10, 0LL);
    v17 = qword_140327FD0 + 276840688;
    if ( v9 <= 0x100000000LL )
    {
      if ( v10 > 0x100000000LL )
        v10 = 0x100000000LL;
      return MiMarkPrivateOpenCfgBits(v17, v9, v10, 0LL);
    }
  }
  return result;
}
