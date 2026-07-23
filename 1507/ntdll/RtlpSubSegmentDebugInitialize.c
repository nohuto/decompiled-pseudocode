/*
 * XREFs of RtlpSubSegmentDebugInitialize @ 0x1800F08C4
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180032E50 (RtlpSubSegmentInitialize.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x1800663A0 (RtlInitializeSListHead.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 *     RtlpInitializeLfhBitmapData @ 0x1800EA4E4 (RtlpInitializeLfhBitmapData.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1800EFD14 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpGetFirstBlockAddress @ 0x1800F06A4 (RtlpGetFirstBlockAddress.c)
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
  int v17; // ecx
  ULONG *OldProtect; // rax
  __int64 v19; // rcx
  ULONG_PTR *p_RegionSize; // r8
  PVOID *p_BaseAddress; // rdx
  signed __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rcx
  signed __int64 v25; // [rsp+30h] [rbp-40h]
  unsigned __int64 v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  ULONG v29; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  char v31; // [rsp+60h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-8h] BYREF
  int v33; // [rsp+B8h] [rbp+48h]
  unsigned int v34; // [rsp+B8h] [rbp+48h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(unsigned __int8 *)(a7 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v13 = *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL + 192LL * *(unsigned __int8 *)(a2 + 43);
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  *(_QWORD *)a3 = a2;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_QWORD *)a2 = v13;
  v26 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  HIWORD(v33) = ((a5 + 4119) & 0xF000) + 4096;
  v14 = (((a3 + a6) & 0xFFFFFFFFFFFFF000uLL) - ((a3 + 4151) & 0xFFFFFFFFFFFFF000uLL)) / v26;
  *(_WORD *)(a2 + 40) = v14;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  LOWORD(v33) = RtlpGetFirstBlockAddress(a2, (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL) - a3;
  *(_DWORD *)(a3 + 24) = v33 ^ a1 ^ RtlpLFHKey ^ a3;
  *(_QWORD *)(a3 + 32) = (unsigned int)v14;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  RtlpInitializeLfhBitmapData((unsigned __int64 *)(a3 + 32));
  v15 = 0;
  v16 = a3 + (unsigned __int16)v33;
  v34 = 0;
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      v17 = *(_DWORD *)(a1 + 24) ^ RtlpLFHKey ^ (v16 >> 4) ^ (((_DWORD)v16 - (_DWORD)a3) << 12);
      *(_DWORD *)(v16 + 12) &= 0xFF0000FF;
      *(_DWORD *)(v16 + 12) |= (unsigned __int16)v15 << 8;
      *(_BYTE *)(v16 + 15) = 0x80;
      *(_DWORD *)(v16 + 8) = v17;
      if ( (*(_BYTE *)(a2 + 38) & 1) != 0 )
        break;
      if ( (*(_BYTE *)(a2 + 38) & 2) != 0 )
      {
        RegionSize = 4096LL;
        BaseAddress = (PVOID)(v16 - 4096);
        p_RegionSize = &RegionSize;
        OldProtect = (ULONG *)&v31;
        p_BaseAddress = &BaseAddress;
        goto LABEL_11;
      }
LABEL_12:
      ++v15;
      v16 += v26;
      v34 = v15;
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_13;
    }
    OldProtect = &v29;
    v19 = *(unsigned __int16 *)(a2 + 36) + 1LL;
    v27 = 4096LL;
    p_RegionSize = (ULONG_PTR *)&v27;
    p_BaseAddress = (PVOID *)&v28;
    v28 = v16 + 16 * v19;
LABEL_11:
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, p_BaseAddress, p_RegionSize, 1u, OldProtect);
    v15 = v34;
    goto LABEL_12;
  }
LABEL_13:
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead((PSLIST_HEADER)(a2 + 16));
  do
  {
    v22 = *(_QWORD *)(v13 + 160);
    if ( (int)v14 <= 0 )
      v23 = HIDWORD(v22) - 1;
    else
      v23 = HIDWORD(v22) + 1;
    HIDWORD(v25) = v23;
    LODWORD(v25) = v22 + v14;
  }
  while ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 160), v25, v22) );
  v24 = *(_QWORD *)v13;
  *(_DWORD *)(v13 + 168) = ++*(_DWORD *)(v24 + 32);
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
