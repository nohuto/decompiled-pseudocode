/*
 * XREFs of RtlpSubSegmentDebugInitialize @ 0x1800FC04C
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180027260 (RtlpSubSegmentInitialize.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x180001008 (RtlpGetFirstBlockAddress.c)
 *     RtlInitializeSListHead @ 0x180076C80 (RtlInitializeSListHead.c)
 *     RtlpInitializeLfhBitmapData @ 0x18008A430 (RtlpInitializeLfhBitmapData.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1800F9750 (RtlpLogHeapSubSegmentInitialize.c)
 */

__int64 __fastcall RtlpSubSegmentDebugInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  signed __int32 v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // r12
  unsigned int v15; // edx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  int v18; // ecx
  ULONG *OldProtect; // rax
  __int64 v20; // rcx
  ULONG_PTR *p_RegionSize; // r8
  PVOID *p_BaseAddress; // rdx
  signed __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  signed __int32 v26; // [rsp+30h] [rbp-40h]
  signed __int64 v27; // [rsp+30h] [rbp-40h]
  ULONG v28; // [rsp+38h] [rbp-38h] BYREF
  char v29; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-30h]
  __int64 v31; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  int v35; // [rsp+B8h] [rbp+48h]
  unsigned int v36; // [rsp+B8h] [rbp+48h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v26 = v11;
  v12 = *(unsigned __int8 *)(a7 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v13 = *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL + 192LL * *(unsigned __int8 *)(a2 + 43);
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  *(_QWORD *)a3 = a2;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_QWORD *)a2 = v13;
  v30 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  HIWORD(v35) = ((a5 + 4119) & 0xF000) + 4096;
  v14 = (((a3 + a6) & 0xFFFFFFFFFFFFF000uLL) - ((a3 + 4151) & 0xFFFFFFFFFFFFF000uLL)) / v30;
  *(_WORD *)(a2 + 40) = v14;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  LOWORD(v35) = RtlpGetFirstBlockAddress(a2, (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL) - a3;
  *(_DWORD *)(a3 + 24) = v35 ^ a1 ^ RtlpLFHKey ^ a3;
  *(_QWORD *)(a3 + 32) = (unsigned int)v14;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  RtlpInitializeLfhBitmapData((unsigned __int64 *)(a3 + 32));
  v15 = 0;
  v16 = a3 + (unsigned __int16)v35;
  v36 = 0;
  if ( !(_DWORD)v14 )
    goto LABEL_15;
  v17 = v30;
  do
  {
    v18 = *(_DWORD *)(a1 + 24) ^ RtlpLFHKey ^ (v16 >> 4) ^ (((_DWORD)v16 - (_DWORD)a3) << 12);
    *(_DWORD *)(v16 + 12) &= 0xFF0000FF;
    *(_DWORD *)(v16 + 12) |= (unsigned __int16)v15 << 8;
    *(_BYTE *)(v16 + 15) = 0x80;
    *(_DWORD *)(v16 + 8) = v18;
    if ( (*(_BYTE *)(a2 + 38) & 1) != 0 )
    {
      OldProtect = &v28;
      v20 = *(unsigned __int16 *)(a2 + 36) + 1LL;
      v31 = 4096LL;
      p_RegionSize = (ULONG_PTR *)&v31;
      p_BaseAddress = (PVOID *)&v32;
      v32 = v16 + 16 * v20;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 38) & 2) == 0 )
        goto LABEL_13;
      RegionSize = 4096LL;
      BaseAddress = (PVOID)(v16 - 4096);
      p_RegionSize = &RegionSize;
      OldProtect = (ULONG *)&v29;
      p_BaseAddress = &BaseAddress;
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, p_BaseAddress, p_RegionSize, 1u, OldProtect);
    v15 = v36;
LABEL_13:
    ++v15;
    v16 += v17;
    v36 = v15;
  }
  while ( v15 < (unsigned int)v14 );
  v11 = v26;
LABEL_15:
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead((PSLIST_HEADER)(a2 + 16));
  do
  {
    v23 = *(_QWORD *)(v13 + 160);
    if ( (int)v14 <= 0 )
      v24 = HIDWORD(v23) - 1;
    else
      v24 = HIDWORD(v23) + 1;
    HIDWORD(v27) = v24;
    LODWORD(v27) = v23 + v14;
  }
  while ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 160), v27, v23) );
  v25 = *(_QWORD *)v13;
  *(_DWORD *)(v13 + 168) = ++*(_DWORD *)(v25 + 32);
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), (unsigned __int16)v14, v11);
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentInitialize(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a2 + 36),
        *(unsigned __int16 *)(a2 + 40),
        *(unsigned __int8 *)(a2 + 43));
  }
  return 1LL;
}
