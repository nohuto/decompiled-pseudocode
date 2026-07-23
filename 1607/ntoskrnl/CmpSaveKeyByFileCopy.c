/*
 * XREFs of CmpSaveKeyByFileCopy @ 0x14060DB48
 * Callers:
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpFileWrite @ 0x1403F4FCC (CmpFileWrite.c)
 *     CmpFileRead @ 0x140480BD0 (CmpFileRead.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14054E064 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14054E3B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFileFlush @ 0x1406042B8 (CmpFileFlush.c)
 */

__int64 __fastcall CmpSaveKeyByFileCopy(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithQuotaTag; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  ULONG v8; // r15d
  char v9; // al
  unsigned int v11; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+40h] [rbp-10h]
  ULONG v14; // [rsp+90h] [rbp+40h] BYREF

  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolBaseCacheAligned|PagedPool|0x8, 0x10000uLL, 0x20204D43u);
  if ( PoolWithQuotaTag )
  {
    CmpBecomeActiveFlusherAndReconciler(a1);
    if ( (*(_DWORD *)(a1 + 5488) & 8) != 0 )
    {
      v5 = -1073741670;
    }
    else
    {
      *(_QWORD *)(a1 + 2680) = a2;
      v14 = 0;
      v5 = -1073741491;
      if ( CmpFileRead(a1, 0, &v14, (char *)PoolWithQuotaTag, 0x1000u) )
      {
        v6 = PoolWithQuotaTag[10];
        ++PoolWithQuotaTag[1];
        v14 = 0;
        v11 = 0;
        v12 = PoolWithQuotaTag;
        v13 = 4096;
        if ( CmpFileWrite(a1, 2u, (int)&v11, 1, (__int64)&v14, 0) )
        {
          v7 = 0;
          if ( v6 )
          {
            while ( 1 )
            {
              v14 = v7 + 4096;
              v8 = v6 - v7;
              if ( v6 - v7 > 0x10000 )
                v8 = 0x10000;
              if ( !CmpFileRead(a1, 0, &v14, (char *)PoolWithQuotaTag, v8) )
                break;
              v14 = v7 + 4096;
              v11 = v7 + 4096;
              v12 = PoolWithQuotaTag;
              v13 = v8;
              if ( !CmpFileWrite(a1, 2u, (int)&v11, 1, (__int64)&v14, 0) )
                break;
              v7 += v8;
              if ( v7 >= v6 )
                goto LABEL_13;
            }
          }
          else
          {
LABEL_13:
            v9 = CmpFileFlush(a1, 2u);
            v14 = 0;
            if ( v9 )
              v5 = 0;
            if ( CmpFileRead(a1, 0, &v14, (char *)PoolWithQuotaTag, 0x1000u) )
            {
              ++PoolWithQuotaTag[1];
              ++PoolWithQuotaTag[2];
              v14 = 0;
              v11 = 0;
              v12 = PoolWithQuotaTag;
              v13 = 4096;
              if ( CmpFileWrite(a1, 2u, (int)&v11, 1, (__int64)&v14, 0) )
              {
                if ( CmpFileFlush(a1, 2u) )
                  v5 = 0;
              }
            }
          }
        }
      }
    }
    *(_QWORD *)(a1 + 2680) = 0LL;
    CmpFinishBeingActiveFlusherAndReconciler(a1);
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
