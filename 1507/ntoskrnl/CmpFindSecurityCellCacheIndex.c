/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x1404CC7A0
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 *     CmpAddSecurityCellToCache @ 0x140447E14 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckKey @ 0x1404C2C40 (CmpCheckKey.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpCheckNotifyAccess @ 0x1404EC768 (CmpCheckNotifyAccess.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpRemoveFromSecurityCache @ 0x14054E720 (CmpRemoveFromSecurityCache.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpCreateEmptyKey @ 0x140658120 (CmpCreateEmptyKey.c)
 *     CmpResetCachedSecurity @ 0x140660A74 (CmpResetCachedSecurity.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
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
