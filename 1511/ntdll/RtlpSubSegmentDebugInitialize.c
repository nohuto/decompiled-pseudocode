/*
 * XREFs of RtlpSubSegmentDebugInitialize @ 0x1800F2544
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180029DF0 (RtlpSubSegmentInitialize.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180072510 (RtlInitializeSListHead.c)
 *     RtlpGetFirstBlockAddress @ 0x180086688 (RtlpGetFirstBlockAddress.c)
 *     RtlpInitializeLfhBitmapData @ 0x180086758 (RtlpInitializeLfhBitmapData.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1800F1C6C (RtlpLogHeapSubSegmentInitialize.c)
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
  signed __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  signed __int64 v21; // [rsp+30h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-38h]
  int v23; // [rsp+B8h] [rbp+48h]
  unsigned int i; // [rsp+B8h] [rbp+48h]

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
  v22 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  HIWORD(v23) = ((a5 + 4119) & 0xF000) + 4096;
  v14 = (((a3 + a6) & 0xFFFFFFFFFFFFF000uLL) - ((a3 + 4151) & 0xFFFFFFFFFFFFF000uLL)) / v22;
  *(_WORD *)(a2 + 40) = v14;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  LOWORD(v23) = RtlpGetFirstBlockAddress(a2, (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL) - a3;
  *(_DWORD *)(a3 + 24) = v23 ^ a1 ^ RtlpLFHKey ^ a3;
  *(_QWORD *)(a3 + 32) = (unsigned int)v14;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  RtlpInitializeLfhBitmapData((unsigned __int64 *)(a3 + 32));
  v15 = 0;
  v16 = a3 + (unsigned __int16)v23;
  for ( i = 0; v15 < (unsigned int)v14; i = v15 )
  {
    v17 = *(_DWORD *)(a1 + 24) ^ RtlpLFHKey ^ (v16 >> 4) ^ (((_DWORD)v16 - (_DWORD)a3) << 12);
    *(_DWORD *)(v16 + 12) &= 0xFF0000FF;
    *(_DWORD *)(v16 + 12) |= (unsigned __int16)v15 << 8;
    *(_BYTE *)(v16 + 15) = 0x80;
    *(_DWORD *)(v16 + 8) = v17;
    if ( (*(_BYTE *)(a2 + 38) & 1) != 0 || (*(_BYTE *)(a2 + 38) & 2) != 0 )
    {
      ZwProtectVirtualMemory();
      v15 = i;
    }
    ++v15;
    v16 += v22;
  }
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead((PSLIST_HEADER)(a2 + 16));
  do
  {
    v18 = *(_QWORD *)(v13 + 160);
    if ( (int)v14 <= 0 )
      v19 = HIDWORD(v18) - 1;
    else
      v19 = HIDWORD(v18) + 1;
    HIDWORD(v21) = v19;
    LODWORD(v21) = v18 + v14;
  }
  while ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 160), v21, v18) );
  v20 = *(_QWORD *)v13;
  *(_DWORD *)(v13 + 168) = ++*(_DWORD *)(v20 + 32);
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
