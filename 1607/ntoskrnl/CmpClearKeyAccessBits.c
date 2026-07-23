/*
 * XREFs of CmpClearKeyAccessBits @ 0x140603828
 * Callers:
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpLogClearAccessBitsEvent @ 0x1405FC49C (CmpLogClearAccessBitsEvent.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter2, unsigned __int16 *a2)
{
  int SubKeyByNumber; // ebx
  _QWORD *PoolWithTag; // rsi
  __int64 v7; // rbp
  unsigned int v8; // ecx
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r8d
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF
  int v16; // [rsp+7Ch] [rbp+24h]

  SubKeyByNumber = 0;
  v16 = 0;
  v15 = -1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x317A6D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  *PoolWithTag = v8;
  if ( v8 != -1 )
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 88);
    v10 = 0;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              LODWORD(PoolWithTag[(unsigned int)v7]),
              &v15);
      v12 = v11;
      if ( !v11 )
        break;
      if ( *(_BYTE *)(v11 + 12) )
      {
        if ( !HvpMarkCellDirty(BugCheckParameter2, LODWORD(PoolWithTag[(unsigned int)v7]), 0) )
        {
          SubKeyByNumber = -1073741670;
LABEL_18:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
          goto LABEL_20;
        }
        *(_BYTE *)(v12 + 12) = 0;
        ++v10;
      }
      v13 = HIDWORD(PoolWithTag[(unsigned int)v7]);
      if ( v13 >= *(_DWORD *)(v12 + 20) || (_DWORD)v7 == 511 )
      {
        if ( !(_DWORD)v7 )
        {
          CmpLogClearAccessBitsEvent(a2, v10, (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 88) - v9) >> 3);
          SubKeyByNumber = 0;
          goto LABEL_18;
        }
        LODWORD(v7) = v7 - 1;
      }
      else
      {
        SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter2, (_DWORD *)v12, v13, &v14);
        if ( SubKeyByNumber < 0 )
          goto LABEL_18;
        ++HIDWORD(PoolWithTag[(unsigned int)v7]);
        v7 = (unsigned int)(v7 + 1);
        PoolWithTag[v7] = v14;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
    }
    SubKeyByNumber = -1073741670;
  }
LABEL_20:
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SubKeyByNumber;
}
