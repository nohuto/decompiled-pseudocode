/*
 * XREFs of MiFindEmptyAddressRange @ 0x14047A1A0
 * Callers:
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     RtlFindClearBits @ 0x1400A0FD0 (RtlFindClearBits.c)
 *     MiExpandVadBitMap @ 0x140462D7C (MiExpandVadBitMap.c)
 *     MiFindEmptyAddressRangeInTree @ 0x14049C1B0 (MiFindEmptyAddressRangeInTree.c)
 *     MiFindClearBitsAligned @ 0x1404B2ADC (MiFindClearBitsAligned.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        unsigned __int64 a1,
        __int64 a2,
        _BYTE *a3,
        char a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7)
{
  int v7; // esi
  _DWORD *v8; // r10
  _KPROCESS *Process; // r11
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // r12
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // r15d
  ULONG ClearBits; // eax
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  int v25; // edi
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rax
  _KPROCESS *v30; // [rsp+78h] [rbp+10h]
  _BYTE *v31; // [rsp+80h] [rbp+18h]
  __int64 v32; // [rsp+80h] [rbp+18h]
  unsigned int v33; // [rsp+90h] [rbp+28h]

  v31 = a3;
  v7 = 1;
  v8 = a7;
  Process = KeGetCurrentThread()->ApcState.Process;
  v30 = Process;
  *a7 = 1;
  v12 = (a5 < 0) - 0x4332C997F3LL;
  v13 = 40 * v12;
  if ( (a4 & 2) == 0 )
  {
    v7 = 0;
    v14 = 0;
    LODWORD(v15) = 0;
LABEL_3:
    v33 = v14;
    goto LABEL_4;
  }
  v14 = (unsigned __int8)*(_DWORD *)(40 * v12 + 0x1C);
  v26 = Process[1].ActiveProcessors.Bitmap[18];
  v15 = MEMORY[0xFFFFF58010804200] >> 16;
  v33 = (unsigned __int8)*(_DWORD *)(v13 + 28);
  if ( v26 > 0x100000000LL )
    LODWORD(v15) = (v26 >> 16) - MEMORY[0xFFFFF58010804202] - 1;
  if ( !v14 )
  {
    v14 = 1;
    goto LABEL_3;
  }
LABEL_4:
  v16 = 0x10000LL;
  switch ( a2 )
  {
    case 0x1000LL:
      goto LABEL_18;
    case 0x10000LL:
      v17 = a1 + 0xFFFF;
      break;
    case 0x200000LL:
      v17 = a1;
      break;
    default:
      goto LABEL_18;
  }
  v18 = v17 >> 16;
  if ( a3 == (char *)MmHighestUserAddress - 0x10000 )
  {
    while ( 1 )
    {
      v19 = *(unsigned int *)(v13 + 16);
      if ( (_DWORD)v18 != 1 && (unsigned int)v18 >= *(_DWORD *)(v13 + 20) )
        v19 = *(unsigned int *)(v13 + 24);
      v20 = *(_DWORD *)(v13 + 8);
      if ( v7 == 1 )
      {
        v27 = v19 + 8 * v20;
        if ( v27 < v14 || v27 >= (unsigned int)v15 )
        {
          v19 = v14;
          *v8 = 0;
        }
      }
      if ( a2 == 0x10000 )
        ClearBits = RtlFindClearBits((PRTL_BITMAP)v13, v18, v19);
      else
        ClearBits = MiFindClearBitsAligned(v13, (unsigned int)v18, v19);
      if ( ClearBits != -1 )
      {
        if ( v7 != 1 || (v28 = ClearBits + 8 * v20, v28 >= v33) && v28 < (unsigned int)v15 )
        {
          *a6 = (ClearBits + 0x540000000000LL + 8LL * *(_QWORD *)(v13 + 8)) << 16;
          return 0LL;
        }
      }
      if ( (unsigned int)MiExpandVadBitMap((unsigned int *)v13, v18) != 1 )
        break;
      v14 = v33;
      v8 = a7;
    }
    if ( v7 == 1 )
      return 3221225495LL;
    a3 = v31;
    v14 = v33;
    v8 = a7;
    Process = v30;
  }
LABEL_18:
  *v8 = 0;
  if ( v7 == 1 && (unsigned __int64)a3 > (unsigned __int64)(unsigned int)v15 << 16 )
    a3 = (_BYTE *)((unsigned __int64)(unsigned int)v15 << 16);
  v23 = *(_QWORD *)(v13 + 32);
  v32 = (__int64)a3;
  v24 = v23;
  if ( v23 > (unsigned __int64)a3 )
  {
    if ( (Process[1].DirectoryTableBase & 0x2000000) == 0 || (v29 = 0x3FFFFFFFLL, (unsigned __int64)a3 <= 0x3FFFFFFF) )
      v29 = 0xFFFFFFLL;
    v24 = v29 & v23;
    if ( (v29 & v23) == 0 || v24 > (unsigned __int64)a3 )
      v24 = 0x10000LL;
    if ( v7 == 1 && v24 < v23 )
      v24 = (unsigned __int64)v14 << 16;
  }
  v25 = (_DWORD)Process + 1552;
  result = MiFindEmptyAddressRangeInTree((int)Process + 1552, a1, a2, v24, (__int64)a3, (__int64)a6);
  if ( (int)result < 0 )
  {
    if ( v7 == 1 )
      v16 = (unsigned __int64)v33 << 16;
    if ( v16 < v24 )
      return MiFindEmptyAddressRangeInTree(v25, a1, a2, v16, v32, (__int64)a6);
  }
  return result;
}
