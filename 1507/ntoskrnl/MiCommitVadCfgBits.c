/*
 * XREFs of MiCommitVadCfgBits @ 0x14000FE10
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiCfgInitializeProcess @ 0x14046549C (MiCfgInitializeProcess.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateOpenCfgBits @ 0x140421578 (MiMarkPrivateOpenCfgBits.c)
 *     MiSelectCfgBitMap @ 0x140421944 (MiSelectCfgBitMap.c)
 *     MiMarkPrivateImageCfgBits @ 0x14054886C (MiMarkPrivateImageCfgBits.c)
 */

__int64 __fastcall MiCommitVadCfgBits(__int64 a1, unsigned __int64 *a2, unsigned __int8 *a3)
{
  __int64 v3; // rsi
  _KPROCESS *Process; // r14
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 **v9; // rax
  __int64 *v10; // rdx
  int v11; // r9d
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned int v15; // r11d
  __int64 v16; // rsi
  int v17; // r9d
  int v18; // r9d
  __int64 result; // rax
  int v20; // r9d
  unsigned __int64 v21; // rcx

  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !MEMORY[0xFFFFF58010804270] )
    return 0LL;
  v6 = *(unsigned int *)(a1 + 24);
  v7 = (v6 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v8 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) + 4096;
  if ( a2 )
  {
    v12 = 3LL;
    v7 = *a2;
    v8 = (a2[1] | 0xFFF) + 1;
  }
  else if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0
         && (v9 = *(__int64 ***)(a1 + 72), v10 = *v9, v11 = *((_DWORD *)*v9 + 14), (v11 & 0x20) != 0)
         && (v3 = *v10, (*(_BYTE *)(*(_QWORD *)(*v10 + 56) + 51LL) & 4) != 0) )
  {
    if ( (v6 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) - ((*(_QWORD *)(a1 + 80) - v10[16]) >> 3) != *(_QWORD *)(v3 + 32) >> 12
      || (v11 & 0x10000000) != 0
      || (v12 = 1LL, *((_DWORD *)v10 + 22) == -1) )
    {
      v12 = 2LL;
    }
  }
  else
  {
    v12 = 3LL;
  }
  v13 = MiSelectCfgBitMap(Process, v7, v3, v12);
  v16 = v13;
  v18 = v17 - v15;
  if ( v18 )
  {
    v20 = v18 - v15;
    if ( v20 )
    {
      if ( v20 == v15 )
      {
        if ( a3 )
          v15 = *a3;
        result = MiMarkPrivateOpenCfgBits(v13, v7, v8, v15);
      }
      else
      {
        result = 3221225473LL;
      }
    }
    else
    {
      result = MiMarkPrivateImageCfgBits(v13, v14);
    }
  }
  else
  {
    result = MiMarkSharedImageCfgBits(v13, v14);
  }
  if ( Process[1].ActiveProcessors.Bitmap[7] && (int)result >= 0 )
  {
    v21 = 0xFFFFF58010804268uLL;
    if ( v16 != 0xFFFFF58010804268uLL )
      return MiMarkPrivateOpenCfgBits(v21, v7, v8, 0LL);
    v21 = 0xFFFFF58010804280uLL;
    if ( v7 <= 0x100000000LL )
    {
      if ( v8 > 0x100000000LL )
        v8 = 0x100000000LL;
      return MiMarkPrivateOpenCfgBits(v21, v7, v8, 0LL);
    }
  }
  return result;
}
