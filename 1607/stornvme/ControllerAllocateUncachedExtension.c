/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1C00043E8
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 */

char __fastcall ControllerAllocateUncachedExtension(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 UncachedExtension; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  bool v7; // zf
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 PhysicalAddress; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = 0;
  v3 = *(_BYTE *)(a1 + 16) != 0 ? 0xFFFF9000 : 0;
  UncachedExtension = StorPortGetUncachedExtension(a1, a2, v3 + 69632);
  *(_QWORD *)(a1 + 1096) = UncachedExtension;
  if ( UncachedExtension )
  {
    NVMeZeroMemory(UncachedExtension, v3 + 69632);
    if ( *(_BYTE *)(a1 + 16) )
      *(_QWORD *)(a1 + 1096) = (*(_QWORD *)(a1 + 1096) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v5 = *(_QWORD *)(a1 + 1096);
    *(_QWORD *)(a1 + 1080) = v5;
    *(_QWORD *)(a1 + 1088) = StorPortGetPhysicalAddress(a1, 0LL, v5, &v18);
    v6 = *(_QWORD *)(a1 + 1096) + 4096LL;
    *(_QWORD *)(a1 + 656) = v6;
    v7 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 1096) = v6 + 0x2000;
    if ( v7 )
    {
      v8 = (_QWORD *)(a1 + 760);
      v9 = 4LL;
      do
      {
        *v8 = *(_QWORD *)(a1 + 1096);
        v8 += 13;
        *(_QWORD *)(a1 + 1096) += 0x2000LL;
        --v9;
      }
      while ( v9 );
    }
    v10 = *(_QWORD *)(a1 + 1096);
    *(_QWORD *)(a1 + 1168) = v10;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v10, &v18);
    v12 = *(_QWORD *)(a1 + 1096);
    *(_QWORD *)(a1 + 1176) = PhysicalAddress;
    v12 += 4096LL;
    v13 = (unsigned __int64)*(unsigned __int16 *)(a1 + 228) << 6;
    *(_QWORD *)(a1 + 240) = v12;
    v14 = v13 + v12;
    v7 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 376) = v14;
    v15 = v14 + 4096;
    *(_QWORD *)(a1 + 1096) = v14 + 4096;
    if ( !v7 )
    {
      v16 = v14 + 12288;
      *(_QWORD *)(a1 + 1096) = v16;
      *(_QWORD *)(a1 + 552) = v16 - 168;
      *(_QWORD *)(a1 + 544) = v16 - 304;
      *(_QWORD *)(v16 - 304) = v15;
      **(_QWORD **)(a1 + 552) = v15 + 4096;
    }
    LOBYTE(UncachedExtension) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1;
  }
  return UncachedExtension;
}
