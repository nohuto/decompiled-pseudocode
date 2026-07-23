/*
 * XREFs of MiFindEmptyAddressRange @ 0x1404B61A0
 * Callers:
 *     MiSelectUserAddress @ 0x1404B59C4 (MiSelectUserAddress.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     RtlFindClearBits @ 0x140089F70 (RtlFindClearBits.c)
 *     MiExpandVadBitMap @ 0x140467ED4 (MiExpandVadBitMap.c)
 *     MiFindEmptyAddressRangeInTree @ 0x140521520 (MiFindEmptyAddressRangeInTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(unsigned __int64 a1, __int64 a2, _BYTE *a3, char a4, _QWORD *a5, _DWORD *a6)
{
  int v8; // edi
  _KPROCESS *Process; // rdx
  unsigned int v12; // r10d
  __int64 v13; // r9
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned int v17; // ecx
  __int64 v18; // r8
  ULONG v19; // eax
  int v20; // r14d
  ULONG ClearBits; // edx
  __int64 result; // rax
  unsigned __int64 v23; // rbx
  int v24; // r14d
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // r9d
  unsigned int v30; // r10d
  _DWORD *v31; // rcx
  unsigned int i; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-48h] BYREF
  _KPROCESS *v34; // [rsp+88h] [rbp+10h]
  unsigned int v35; // [rsp+98h] [rbp+20h]
  __int64 v36; // [rsp+A8h] [rbp+30h]

  v8 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v34 = Process;
  *a6 = 1;
  if ( (a4 & 2) != 0 )
  {
    v25 = Process[1].ActiveProcessors.Bitmap[17];
    v12 = MEMORY[0xFFFFF58010804208];
    v13 = MEMORY[0xFFFFF58010804240] >> 16;
    v36 = MEMORY[0xFFFFF58010804240] >> 16;
    v35 = MEMORY[0xFFFFF58010804208];
    if ( v25 > 0x100000000LL )
    {
      LODWORD(v13) = (v25 >> 16) - MEMORY[0xFFFFF58010804242] - 1;
      LODWORD(v36) = v13;
    }
    if ( !MEMORY[0xFFFFF58010804208] )
    {
      v12 = 1;
      v35 = 1;
    }
  }
  else
  {
    v12 = 0;
    v8 = 0;
    LODWORD(v13) = 0;
    v35 = 0;
    LODWORD(v36) = 0;
  }
  v14 = 0x10000LL;
  if ( a2 == 4096 )
  {
LABEL_20:
    *a6 = 0;
    if ( v8 == 1 && (unsigned __int64)a3 > (unsigned __int64)(unsigned int)v13 << 16 )
      a3 = (_BYTE *)((unsigned __int64)(unsigned int)v13 << 16);
    v23 = MEMORY[0xFFFFF58010804238];
    if ( MEMORY[0xFFFFF58010804238] > (unsigned __int64)a3 )
    {
      if ( (Process[1].DirectoryTableBase & 0x2000000) == 0 || (v28 = 0x3FFFFFFFLL, (unsigned __int64)a3 <= 0x3FFFFFFF) )
        v28 = 0xFFFFFFLL;
      v23 = v28 & MEMORY[0xFFFFF58010804238];
      if ( (v28 & MEMORY[0xFFFFF58010804238]) == 0 || v23 > (unsigned __int64)a3 )
        v23 = 0x10000LL;
      if ( v8 == 1 && v23 < MEMORY[0xFFFFF58010804238] )
        v23 = (unsigned __int64)v12 << 16;
    }
    v24 = (_DWORD)Process + 1544;
    result = MiFindEmptyAddressRangeInTree((int)Process + 1544, a1, a2, v23, (__int64)a3, (__int64)a5);
    if ( (int)result < 0 )
    {
      if ( v8 == 1 )
        v14 = (unsigned __int64)v35 << 16;
      if ( v14 < v23 )
        return MiFindEmptyAddressRangeInTree(v24, a1, a2, v14, (__int64)a3, (__int64)a5);
    }
    return result;
  }
  if ( a2 == 0x10000 )
    v15 = a1 + 0xFFFF;
  else
    v15 = a1;
  v16 = v15 >> 16;
  while ( 1 )
  {
    v17 = MEMORY[0xFFFFF5801080420C];
    v18 = MEMORY[0xFFFFF58010804230];
    BitMapHeader.Buffer = (unsigned int *)MEMORY[0xFFFFF58010804230];
    BitMapHeader.SizeOfBitMap = MEMORY[0xFFFFF5801080420C];
    if ( a3 != (char *)MmHighestUserAddress - 0x10000 )
      goto LABEL_19;
    v19 = MEMORY[0xFFFFF580108041FC];
    if ( (_DWORD)v16 != 1 && (unsigned int)v16 >= MEMORY[0xFFFFF58010804204] )
      v19 = MEMORY[0xFFFFF58010804200];
    v20 = MEMORY[0xFFFFF58010804230];
    if ( v8 == 1 )
    {
      v26 = v19 + 8 * MEMORY[0xFFFFF58010804230];
      if ( v26 < v12 || v26 >= (unsigned int)v13 )
      {
        v19 = v12;
        *a6 = 0;
      }
    }
    if ( a2 == 0x10000 )
    {
      ClearBits = RtlFindClearBits(&BitMapHeader, v16, v19);
    }
    else
    {
      ClearBits = -1;
      if ( (unsigned int)v16 >= v17 )
        goto LABEL_13;
      v29 = 32;
      v30 = v17 - v16;
      if ( v19 < v17 && v19 > 0x20 )
        v29 = (v19 + 31) & 0xFFFFFFE0;
      if ( v29 <= v30 )
      {
        while ( 1 )
        {
          v31 = (_DWORD *)(v18 + 4 * ((unsigned __int64)v29 >> 5));
          for ( i = 0; i < (unsigned int)v16; ++v31 )
          {
            if ( *v31 )
              break;
            i += 32;
          }
          if ( i == (_DWORD)v16 )
            break;
          v29 = ((i + v29) & 0xFFFFFFE0) + 32;
          if ( v29 > v30 )
            goto LABEL_12;
        }
        ClearBits = v29;
      }
    }
LABEL_12:
    v12 = v35;
    LODWORD(v13) = v36;
LABEL_13:
    if ( ClearBits != -1 )
    {
      if ( v8 != 1 || (v27 = ClearBits + 8 * v20, v27 >= v12) && v27 < (unsigned int)v13 )
      {
        *a5 = (ClearBits + 0x540000000000LL + 8LL * MEMORY[0xFFFFF58010804230]) << 16;
        return 0LL;
      }
    }
    if ( (unsigned int)MiExpandVadBitMap(v16) != 1 )
      break;
    LODWORD(v13) = v36;
    v12 = v35;
  }
  if ( v8 != 1 )
  {
    LODWORD(v13) = v36;
    v12 = v35;
LABEL_19:
    Process = v34;
    goto LABEL_20;
  }
  return 3221225495LL;
}
