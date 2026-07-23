/*
 * XREFs of MiFindEmptyAddressRange @ 0x1404352A0
 * Callers:
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     RtlFindClearBits @ 0x14002C630 (RtlFindClearBits.c)
 *     MiExpandVadBitMap @ 0x14046C874 (MiExpandVadBitMap.c)
 *     MiFindEmptyAddressRangeInTree @ 0x1404A2440 (MiFindEmptyAddressRangeInTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7)
{
  int v7; // ebp
  _DWORD *v8; // r10
  _KPROCESS *Process; // r11
  __int64 v13; // rdi
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  ULONG v19; // eax
  int v20; // esi
  ULONG ClearBits; // edx
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  int v25; // edi
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // r9d
  unsigned __int64 v30; // r8
  ULONG v31; // ecx
  ULONG v32; // r10d
  _DWORD *v33; // r9
  unsigned int i; // eax
  __int64 v35; // rax
  _KPROCESS *v36; // [rsp+30h] [rbp-38h]
  unsigned int v37; // [rsp+78h] [rbp+10h]
  unsigned int v38; // [rsp+90h] [rbp+28h]

  v7 = 1;
  v8 = a7;
  Process = KeGetCurrentThread()->ApcState.Process;
  *a7 = 1;
  v36 = Process;
  v13 = qword_140327FD0 + 276840448 + 40LL * (a5 < 0);
  if ( (a4 & 2) != 0 )
  {
    v26 = Process[1].ActiveProcessors.Bitmap[18];
    v14 = (unsigned __int8)*(_DWORD *)(v13 + 44);
    v15 = *(_QWORD *)(qword_140327FD0 + 276840456) >> 16;
    v37 = v15;
    v38 = v14;
    if ( v26 > 0x100000000LL )
    {
      LODWORD(v15) = (v26 >> 16) - (unsigned __int8)v15 - 1;
      v37 = v15;
    }
    if ( !(unsigned __int8)*(_DWORD *)(v13 + 44) )
    {
      v14 = 1;
      v38 = 1;
    }
  }
  else
  {
    v14 = 0;
    v7 = 0;
    LODWORD(v15) = 0;
    v38 = 0;
    v37 = 0;
  }
  v16 = 0x10000LL;
  switch ( a2 )
  {
    case 0x1000uLL:
      goto LABEL_17;
    case 0x10000uLL:
      v17 = a1 + 0xFFFF;
      break;
    case 0x200000uLL:
    case 0x40000000uLL:
      v17 = a1;
      break;
    default:
      goto LABEL_17;
  }
  v18 = v17 >> 16;
  if ( a3 == 0x7FFFFFFDFFFFLL )
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(v13 + 32);
      if ( (_DWORD)v18 != 1 && (unsigned int)v18 >= *(_DWORD *)(v13 + 36) )
        v19 = *(_DWORD *)(v13 + 40);
      v20 = *(_DWORD *)(v13 + 24) - qword_140327FD0;
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
      {
        ClearBits = RtlFindClearBits((PRTL_BITMAP)(v13 + 16), v18, v19);
      }
      else
      {
        v29 = *(_DWORD *)(v13 + 16);
        v30 = a2 >> 16;
        ClearBits = -1;
        if ( (unsigned int)v18 < v29 )
        {
          v31 = a2 >> 16;
          v32 = v29 - v18;
          if ( v19 > (unsigned int)v30 && v19 < v29 )
            v31 = ~(v30 - 1) & (v19 + v30 - 1);
          if ( v31 <= v32 )
          {
            while ( 1 )
            {
              v33 = (_DWORD *)(*(_QWORD *)(v13 + 24) + 4 * ((unsigned __int64)v31 >> 5));
              for ( i = 0; i < (unsigned int)v18; ++v33 )
              {
                if ( *v33 )
                  break;
                i += 32;
              }
              if ( i == (_DWORD)v18 )
                break;
              v31 = v30 + (~(v30 - 1) & (i + v31));
              if ( v31 > v32 )
                goto LABEL_11;
            }
            ClearBits = v31;
          }
        }
      }
LABEL_11:
      if ( ClearBits != -1 )
      {
        if ( v7 != 1 || (v28 = ClearBits + 8 * v20, v28 >= v38) && v28 < v37 )
        {
          *a6 = (ClearBits + 8 * (*(_QWORD *)(v13 + 24) - qword_140327FD0)) << 16;
          return 0LL;
        }
      }
      if ( (unsigned int)MiExpandVadBitMap(v13 + 16, (unsigned int)v18) != 1 )
        break;
      LODWORD(v15) = v37;
      v14 = v38;
      v8 = a7;
    }
    if ( v7 == 1 )
      return 3221225495LL;
    LODWORD(v15) = v37;
    v14 = v38;
    v8 = a7;
    Process = v36;
  }
LABEL_17:
  *v8 = 0;
  if ( v7 == 1 && a3 > (unsigned __int64)(unsigned int)v15 << 16 )
    a3 = (unsigned __int64)(unsigned int)v15 << 16;
  v23 = *(_QWORD *)(v13 + 48);
  v24 = v23;
  if ( v23 > a3 )
  {
    if ( (Process[1].DirectoryTableBase & 0x2000000) == 0 || (v35 = 0x3FFFFFFFLL, a3 <= 0x3FFFFFFF) )
      v35 = 0xFFFFFFLL;
    v24 = v35 & v23;
    if ( (v35 & v23) == 0 || v24 > a3 )
      v24 = 0x10000LL;
    if ( v7 == 1 && v24 < v23 )
      v24 = (unsigned __int64)v14 << 16;
  }
  v25 = (_DWORD)Process + 1568;
  result = MiFindEmptyAddressRangeInTree((int)Process + 1568, a1, a2, v24, a3, (__int64)a6);
  if ( (int)result < 0 )
  {
    if ( v7 == 1 )
      v16 = (unsigned __int64)v38 << 16;
    if ( v16 < v24 )
      return MiFindEmptyAddressRangeInTree(v25, a1, a2, v16, a3, (__int64)a6);
  }
  return result;
}
