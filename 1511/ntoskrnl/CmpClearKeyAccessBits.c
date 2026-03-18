/*
 * XREFs of CmpClearKeyAccessBits @ 0x1403B5728
 * Callers:
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNumber @ 0x140523D14 (CmpFindSubKeyByNumber.c)
 *     CmpLogClearAccessBitsEvent @ 0x1405DE540 (CmpLogClearAccessBitsEvent.c)
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
  __int64 v12; // rbx
  __int64 v13; // r8
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
      v12 = v11;
      if ( !v11 )
        break;
      if ( *(_DWORD *)(v11 + 12) )
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, LODWORD(PoolWithTag[v5])) )
        {
          SubKeyByNumber = -1073741670;
LABEL_20:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
          goto LABEL_4;
        }
        *(_DWORD *)(v12 + 12) = 0;
        ++v10;
      }
      v13 = HIDWORD(PoolWithTag[v5]);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 20) || (_DWORD)v5 == 511 )
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
