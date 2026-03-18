/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1C00013BC
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 * Callees:
 *     memset @ 0x1C000EE00 (memset.c)
 */

char __fastcall ControllerAllocateUncachedExtension(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  void *UncachedExtension; // rax
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 PhysicalAddress; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = 0;
  v3 = *(_BYTE *)(a1 + 16) != 0 ? 40960 : 69632;
  UncachedExtension = (void *)StorPortGetUncachedExtension(a1, a2, v3);
  *(_QWORD *)(a1 + 1088) = UncachedExtension;
  if ( UncachedExtension )
  {
    v5 = v3 >> 2;
    if ( v5 )
      memset(UncachedExtension, 0, 4LL * v5);
    if ( *(_BYTE *)(a1 + 16) )
      *(_QWORD *)(a1 + 1088) = (*(_QWORD *)(a1 + 1088) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v6 = *(_QWORD *)(a1 + 1088);
    *(_QWORD *)(a1 + 1072) = v6;
    *(_QWORD *)(a1 + 1080) = StorPortGetPhysicalAddress(a1, 0LL, v6, &v21);
    v7 = *(_QWORD *)(a1 + 1088) + 4096LL;
    *(_QWORD *)(a1 + 648) = v7;
    v8 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 1088) = v7 + 0x2000;
    if ( v8 )
    {
      v9 = (_QWORD *)(a1 + 752);
      v10 = 4LL;
      do
      {
        *v9 = *(_QWORD *)(a1 + 1088);
        v9 += 13;
        *(_QWORD *)(a1 + 1088) += 0x2000LL;
        --v10;
      }
      while ( v10 );
    }
    v11 = *(_QWORD *)(a1 + 1088);
    *(_QWORD *)(a1 + 1152) = v11;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v11, &v21);
    v13 = *(_QWORD *)(a1 + 1088) + 4096LL;
    *(_QWORD *)(a1 + 1160) = PhysicalAddress;
    v14 = (unsigned __int64)*(unsigned __int16 *)(a1 + 220) << 6;
    *(_QWORD *)(a1 + 232) = v13;
    v15 = v14 + v13;
    *(_QWORD *)(a1 + 368) = v15;
    v16 = v15 + 4096;
    v8 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 1088) = v16;
    if ( !v8 )
    {
      v17 = v16;
      v18 = v16 + 4096;
      v19 = v16 + 0x2000;
      *(_QWORD *)(a1 + 1088) = v19;
      *(_QWORD *)(a1 + 544) = v19 - 168;
      *(_QWORD *)(a1 + 536) = v19 - 304;
      *(_QWORD *)(v19 - 304) = v17;
      **(_QWORD **)(a1 + 544) = v18;
    }
    LOBYTE(UncachedExtension) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1;
  }
  return (char)UncachedExtension;
}
