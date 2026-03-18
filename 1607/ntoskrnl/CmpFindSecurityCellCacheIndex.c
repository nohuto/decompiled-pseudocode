/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x1403FDF60
 * Callers:
 *     CmpAddSecurityCellToCache @ 0x1403FB3A8 (CmpAddSecurityCellToCache.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckNotifyAccess @ 0x1403FDD14 (CmpCheckNotifyAccess.c)
 *     CmpAssignSecurityToKcb @ 0x1403FDE38 (CmpAssignSecurityToKcb.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmGetKCBCacheSecurity @ 0x140440230 (CmGetKCBCacheSecurity.c)
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmpRemoveFromSecurityCache @ 0x1404D97E8 (CmpRemoveFromSecurityCache.c)
 *     CmpCopyKeyPartial @ 0x1404EBDEC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140609858 (CmpSyncKeyValues.c)
 *     CmpResetCachedSecurity @ 0x14060B7A8 (CmpResetCachedSecurity.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, int a2, unsigned int *a3)
{
  int v3; // eax
  __int16 v4; // si
  unsigned int v7; // r11d
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // r8d
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // edx

  v3 = *(_DWORD *)(a1 + 3040);
  v4 = 0;
  if ( v3 )
  {
    v7 = v3 - 1;
    v8 = *(_DWORD *)(a1 + 3048);
    v9 = 0;
    if ( (v8 & 0x80000000) != 0 || v8 > v7 )
      v8 = v7 >> 1;
    v10 = a2 & 0x7FFFFFFF;
    if ( a2 < 0 )
      v10 = -v10;
    v11 = *(_QWORD *)(a1 + 3056);
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = *(_DWORD *)(v11 + 16LL * v8) & 0x7FFFFFFF;
          if ( *(int *)(v11 + 16LL * v8) < 0 )
            v12 = -v12;
          v13 = v10 - v12;
          if ( v10 == v12 )
          {
            *a3 = v8;
            *(_DWORD *)(a1 + 3048) = v8;
            return 1;
          }
          if ( v4 )
            break;
          if ( v13 >= 0 )
            v9 = v8;
          else
            v7 = v8;
          if ( v7 - v9 <= 1 )
          {
            v8 = v9;
            v4 = 1;
          }
          else
          {
            v8 = v9 + ((v7 - v9) >> 1);
          }
        }
        if ( v4 != 1 )
          break;
        if ( v13 < 0 )
          goto LABEL_25;
        if ( v9 == v7 )
          goto LABEL_27;
        v4 = 2;
        v8 = v7;
      }
    }
    while ( v4 != 2 );
    if ( v13 < 0 )
      goto LABEL_25;
LABEL_27:
    ++v8;
LABEL_25:
    *a3 = v8;
    return 0;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
