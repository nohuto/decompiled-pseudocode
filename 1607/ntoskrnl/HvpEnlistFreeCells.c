/*
 * XREFs of HvpEnlistFreeCells @ 0x1404F7490
 * Callers:
 *     HvpEnlistBinInMap @ 0x1404F73D0 (HvpEnlistBinInMap.c)
 *     HvpBuildMapForLoaderHive @ 0x140564290 (HvpBuildMapForLoaderHive.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v3; // r10
  unsigned int *v4; // rdi
  unsigned __int8 v8; // r14
  unsigned __int64 v9; // r9
  __int64 v10; // rbx
  unsigned int v12; // eax
  unsigned int v13; // eax

  v3 = *(unsigned int *)(a2 + 8);
  v4 = (unsigned int *)(a2 + 32);
  v8 = 1;
  v9 = v3 + a2;
  if ( a2 + 32 < (unsigned __int64)(v3 + a2) )
  {
    while ( 1 )
    {
      v10 = *v4;
      if ( (int)v10 >= 0 )
      {
        if ( (unsigned int)v10 > (unsigned int)v3 || (unsigned __int64)v4 + v10 > v9 || (v10 & 7) != 0 || !(_DWORD)v10 )
        {
          v8 = 0;
          if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
            return v8;
          v12 = v3 - (_DWORD)v4 + a2;
          *v4 = v12;
          memset(v4 + 1, 0, (int)v12 - 4LL);
          LODWORD(v10) = *v4;
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        }
        HvpEnlistFreeCell(BugCheckParameter2, (unsigned int)(a3 + (_DWORD)v4 - a2), 0);
        *(_DWORD *)(BugCheckParameter2 + 132) += v10;
      }
      else
      {
        LODWORD(v10) = -(int)v10;
        if ( (unsigned int)v10 > (unsigned int)v3
          || (unsigned __int64)v4 + (unsigned int)v10 > v9
          || (v10 & 7) != 0
          || !(_DWORD)v10 )
        {
          v8 = 0;
          if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
            return v8;
          v13 = v3 - (_DWORD)v4 + a2;
          *v4 = v13;
          memset(v4 + 1, 0, (int)v13 - 4LL);
          LODWORD(v10) = *v4;
          HvpEnlistFreeCell(BugCheckParameter2, (unsigned int)(a3 + (_DWORD)v4 - a2), 0);
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
          *(_DWORD *)(BugCheckParameter2 + 132) += v10;
        }
        *(_DWORD *)(BugCheckParameter2 + 136) += v10;
      }
      v3 = *(unsigned int *)(a2 + 8);
      v4 = (unsigned int *)((char *)v4 + (unsigned int)v10);
      v9 = v3 + a2;
      if ( (unsigned __int64)v4 >= v3 + a2 )
        return v8;
    }
  }
  return 1LL;
}
