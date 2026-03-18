/*
 * XREFs of CmpClearKeyAccessBits @ 0x14058ECA8
 * Callers:
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 *     CmpLogClearAccessBitsEvent @ 0x140653A6C (CmpLogClearAccessBitsEvent.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v5; // rbp
  unsigned int v6; // ecx
  int SubKeyByNumber; // ebx
  int v9; // r12d
  unsigned int v10; // r15d
  __int64 v11; // rax
  _DWORD *v12; // rbx
  unsigned int v13; // r8d
  int v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = -1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x317A6D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  *PoolWithTag = v6;
  if ( v6 == -1 )
  {
    SubKeyByNumber = 0;
  }
  else
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 88);
    v10 = 0;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              LODWORD(PoolWithTag[v5]),
              &v14);
      v12 = (_DWORD *)v11;
      if ( !v11 )
        break;
      if ( *(_DWORD *)(v11 + 12) )
      {
        if ( !HvpMarkCellDirty(BugCheckParameter2, LODWORD(PoolWithTag[v5]), 0, 0LL) )
        {
          SubKeyByNumber = -1073741670;
LABEL_20:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
          goto LABEL_4;
        }
        v12[3] = 0;
        ++v10;
      }
      v13 = HIDWORD(PoolWithTag[v5]);
      if ( v13 >= v12[5] || (_DWORD)v5 == 511 )
      {
        if ( !(_DWORD)v5 )
        {
          CmpLogClearAccessBitsEvent(a2, v10, (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 88) - v9) >> 3);
          SubKeyByNumber = 0;
          goto LABEL_20;
        }
        v5 = (unsigned int)(v5 - 1);
      }
      else
      {
        SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter2, v12, v13, &v15);
        if ( SubKeyByNumber < 0 )
          goto LABEL_20;
        ++HIDWORD(PoolWithTag[v5]);
        v5 = (unsigned int)(v5 + 1);
        PoolWithTag[v5] = v15;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
    }
    SubKeyByNumber = -1073741670;
  }
LABEL_4:
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SubKeyByNumber;
}
