/*
 * XREFs of KsepEngineGetShimsFromRegistry @ 0x140514ED8
 * Callers:
 *     KsepGetShimsForDriver @ 0x1405139C0 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KsepRegistryQueryDriverShims @ 0x140514A24 (KsepRegistryQueryDriverShims.c)
 *     KsepStringDuplicate @ 0x140514AB8 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x140653CC8 (KsepStringSplitMultiString.c)
 */

__int64 __fastcall KsepEngineGetShimsFromRegistry(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  _QWORD *v6; // rdi
  PVOID Paged; // rax
  __int64 v9; // r8
  void *v10; // r12
  int DriverShims; // ebx
  int v13; // eax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  char *v16; // rsi
  __int64 i; // rbx
  __int64 v18; // rcx
  char v19; // al
  char *v20; // r15
  _QWORD *v21; // rax
  char *v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp+50h]

  v25 = a3;
  v22 = 0LL;
  v4 = 0LL;
  v24 = 0;
  v6 = a3;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    DriverShims = -1073741275;
    goto LABEL_5;
  }
  Paged = KsepPoolAllocatePaged(0x800uLL);
  v10 = Paged;
  if ( !Paged )
  {
    DriverShims = -1073741801;
    goto LABEL_5;
  }
  DriverShims = KsepRegistryQueryDriverShims(*(_QWORD *)(a2 + 8), (__int64)Paged, v9, (__int64)&v23);
  if ( DriverShims >= 0 )
  {
    v13 = KsepStringSplitMultiString(v10, v23, &v22, &v24);
    v14 = v24;
    DriverShims = v13;
    if ( v13 >= 0 )
    {
      v15 = KsepPoolAllocatePaged(80LL * v24);
      v16 = v22;
      v4 = v15;
      if ( !v15 )
      {
        DriverShims = -1073741801;
LABEL_20:
        if ( v16 )
        {
          if ( (_DWORD)v14 )
          {
            v20 = v16;
            do
            {
              KsepStringFree(v20);
              v20 += 16;
              --v14;
            }
            while ( v14 );
          }
          KsepPoolFreePaged(v16);
        }
        v6 = v25;
        goto LABEL_4;
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
      {
        if ( (int)KsepStringDuplicate((__int64)&v4[20 * i + 4], *(_WORD **)&v16[16 * (unsigned int)i + 8]) < 0 )
          break;
        v4[20 * i + 17] = 0;
      }
      DriverShims = KsepDbGetShimInfo(v4, (unsigned int)v14);
      if ( DriverShims >= 0 )
      {
        v21 = v25;
        DriverShims = 0;
        *a4 = v14;
        *v21 = v4;
        goto LABEL_20;
      }
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      v19 = KsepDebugFlag;
      KsepHistoryErrors[2 * v18 + 1] = DriverShims;
      KsepHistoryErrors[2 * v18] = 132112;
      if ( (v19 & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: Cannot resolve registry shims to Sdb: 0x%x\n", DriverShims);
      KsepLogError(0, "KSE: Cannot resolve registry shims to Sdb: 0x%x\n", DriverShims);
      v14 = v24;
    }
    v16 = v22;
    goto LABEL_20;
  }
LABEL_4:
  KsepPoolFreePaged(v10);
  if ( DriverShims < 0 )
  {
LABEL_5:
    KsepPoolFreePaged(v4);
    *v6 = 0LL;
    *a4 = 0;
  }
  return (unsigned int)DriverShims;
}
