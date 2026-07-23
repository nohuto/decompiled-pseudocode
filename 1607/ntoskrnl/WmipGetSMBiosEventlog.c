/*
 * XREFs of WmipGetSMBiosEventlog @ 0x14069D588
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     WmipFindSMBiosStructure @ 0x14069D378 (WmipFindSMBiosStructure.c)
 */

__int64 __fastcall WmipGetSMBiosEventlog(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned __int8 v6; // r11
  __int128 *v7; // r10
  unsigned __int16 v8; // r12
  char v9; // r13
  unsigned int v10; // ebx
  unsigned __int16 v11; // r9
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  void *v17; // r14
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  const void *v22; // rax
  void *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+20h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+58h] BYREF

  result = WmipFindSMBiosStructure(15, &v27, &BaseAddress, &NumberOfBytes);
  if ( (int)result < 0 )
    return result;
  v5 = v27;
  v6 = *(_BYTE *)(v27 + 1);
  v7 = (__int128 *)(v27 + 4);
  v8 = *(_WORD *)(v27 + 4);
  v9 = *(_BYTE *)(v27 + 10);
  v10 = *(_DWORD *)(v27 + 16);
  if ( v6 < 0x17u )
  {
    v11 = 0;
    v12 = 0;
  }
  else
  {
    v11 = *(unsigned __int8 *)(v27 + 21) * *(unsigned __int8 *)(v27 + 22);
    v12 = 1;
    if ( v6 != v11 + 23 )
    {
      if ( BaseAddress )
        MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
      ExReleaseResourceLite(&WmipSMBiosLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
      return 3221225473LL;
    }
  }
  v16 = v11 + v8 + 23;
  if ( *a2 < v16 )
  {
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
    result = 3221225507LL;
  }
  else
  {
    *(_BYTE *)(a1 + 3) = 0;
    v17 = (void *)(v11 + a1 + 23);
    *(_WORD *)a1 = v11;
    *(_BYTE *)(a1 + 2) = v12;
    if ( v12 == 1 )
    {
      memmove((void *)(a1 + 4), v7, *(unsigned __int8 *)(v5 + 1) - 4);
    }
    else
    {
      v18 = *v7;
      *(_WORD *)(a1 + 20) = 0;
      *(_OWORD *)(a1 + 4) = v18;
      *(_BYTE *)(a1 + 22) = 0;
    }
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
    if ( v9
      && v9 == 3
      && (NumberOfBytes = v10, v22 = (const void *)MmMapIoSpaceEx(v10, v8, 4u), v23 = (void *)v22, v17)
      && v22 )
    {
      memmove(v17, v22, v8);
      MmUnmapIoSpace(v23, v8);
      result = 0LL;
    }
    else
    {
      result = 3221225473LL;
    }
  }
  *a2 = v16;
  return result;
}
