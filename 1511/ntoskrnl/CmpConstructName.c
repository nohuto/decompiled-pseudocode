/*
 * XREFs of CmpConstructName @ 0x1403FC9B0
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A9258 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpPublishEventForPcaResolver @ 0x1404F9D2C (CmpPublishEventForPcaResolver.c)
 *     CmCallbackGetKeyObjectID @ 0x1405DD018 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x1405DD7C4 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1405DDA84 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1405DE204 (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405E0BE0 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x1405E0F18 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1405E3324 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall CmpConstructName(__int64 a1)
{
  char v1; // r15
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // r14
  __int64 v9; // r9
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rcx
  _WORD *v14; // rdx
  _WORD *v15; // rdx
  unsigned __int8 *v16; // rax
  _WORD *i; // r8
  __int16 v18; // cx
  PVOID v20; // rax
  void *v21; // rsi
  _WORD *v22; // r8
  __int16 *v23; // rcx
  unsigned __int16 j; // dx
  __int16 v25; // ax
  int v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = -1;
  v1 = 0;
  v2 = a1;
  v3 = 0LL;
  if ( a1 )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 80);
      v5 = *(unsigned __int16 *)(v4 + 24);
      if ( (*(_DWORD *)v4 & 1) != 0 )
        v6 = v3 + 2 * v5;
      else
        v6 = v5 + v3;
      a1 = *(_QWORD *)(a1 + 72);
      v3 = v6 + 2;
    }
    while ( a1 );
    if ( v3 > 0xFFFF )
      return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 + 16, 0x624E4D43u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_WORD *)PoolWithTag = v3;
    PoolWithTag[1] = PoolWithTag + 2;
    *((_WORD *)PoolWithTag + 1) = v3;
    if ( v2 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v2 + 32);
        if ( !v9
          || (v10 = *(_DWORD *)(v2 + 4), (v10 & 0x10) != 0)
          || (v11 = (v10 >> 17) & 1) == 0 && *(_DWORD *)(v2 + 40) == -1 )
        {
LABEL_29:
          ExFreePoolWithTag(v8, 0x624E4D43u);
          return 0LL;
        }
        if ( *(_QWORD *)(v2 + 192) )
          goto LABEL_13;
        if ( v11 || v1 )
          break;
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(v9 + 8))(
                *(_QWORD *)(v2 + 32),
                *(unsigned int *)(v2 + 40),
                &v26);
        if ( !v12 )
          goto LABEL_29;
LABEL_14:
        v13 = *(_QWORD *)(v2 + 80);
        if ( (*(_DWORD *)v13 & 1) != 0 )
        {
          v3 -= 2LL * (*(unsigned __int16 *)(v13 + 24) + 1);
          v14 = (_WORD *)(v8[1] + 2 * (v3 >> 1));
          *v14 = 92;
          v15 = v14 + 1;
          if ( (*(_BYTE *)(v2 + 186) & 6) != 0 )
            goto LABEL_18;
          v16 = *(unsigned __int8 **)(v2 + 192);
          if ( v16 )
          {
            if ( v16 == (unsigned __int8 *)1 )
              goto LABEL_18;
          }
          else if ( v12 )
          {
            v16 = (unsigned __int8 *)(v12 + 76);
          }
          else
          {
LABEL_18:
            v16 = (unsigned __int8 *)(*(_QWORD *)(v2 + 80) + 26LL);
          }
          for ( i = 0LL; (unsigned __int16)i < *(_WORD *)(*(_QWORD *)(v2 + 80) + 24LL); ++v15 )
          {
            v18 = *v16++;
            *v15 = v18;
            LOWORD(i) = (_WORD)i + 1;
          }
          goto LABEL_21;
        }
        v3 += -2LL - *(unsigned __int16 *)(v13 + 24);
        v22 = (_WORD *)(v8[1] + 2 * (v3 >> 1));
        *v22 = 92;
        i = v22 + 1;
        if ( (*(_BYTE *)(v2 + 186) & 6) == 0 )
        {
          v23 = *(__int16 **)(v2 + 192);
          if ( v23 )
          {
            if ( v23 != (__int16 *)1 )
              goto LABEL_45;
          }
          else if ( v12 )
          {
            v23 = (__int16 *)(v12 + 76);
            goto LABEL_45;
          }
        }
        v23 = (__int16 *)(*(_QWORD *)(v2 + 80) + 26LL);
LABEL_45:
        for ( j = 0; j < *(_WORD *)(*(_QWORD *)(v2 + 80) + 24LL); ++i )
        {
          v25 = *v23++;
          *i = v25;
          j += 2;
        }
LABEL_21:
        if ( *(_QWORD *)(v2 + 192) )
          goto LABEL_22;
        if ( v12 )
        {
          v20 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(*(_QWORD *)(v2 + 80) + 24LL), 0x624E4D43u);
          v21 = v20;
          if ( v20 )
          {
            memmove(v20, (const void *)(v12 + 76), *(unsigned __int16 *)(*(_QWORD *)(v2 + 80) + 24LL));
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 192), (signed __int64)v21, 0LL) )
              ExFreePoolWithTag(v21, 0x624E4D43u);
          }
LABEL_22:
          if ( v12 )
            (*(void (__fastcall **)(_QWORD, int *, _WORD *))(*(_QWORD *)(v2 + 32) + 16LL))(
              *(_QWORD *)(v2 + 32),
              &v26,
              i);
        }
        v2 = *(_QWORD *)(v2 + 72);
        if ( !v2 )
          return v8;
      }
      v1 = 1;
LABEL_13:
      v12 = 0LL;
      goto LABEL_14;
    }
  }
  return v8;
}
