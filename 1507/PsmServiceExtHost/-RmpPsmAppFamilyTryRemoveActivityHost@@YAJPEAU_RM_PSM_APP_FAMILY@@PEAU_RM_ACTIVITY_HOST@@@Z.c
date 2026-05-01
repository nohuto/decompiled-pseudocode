/*
 * XREFs of ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E38
 * Callers:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180008410 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 * Callees:
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 */

__int64 __fastcall RmpPsmAppFamilyTryRemoveActivityHost(struct _RM_PSM_APP_FAMILY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v7; // rax

  v2 = 0;
  v3 = 0LL;
  v4 = (_QWORD *)((char *)a1 + 560);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = v4 - 1;
      if ( (struct _RM_ACTIVITY_HOST *)*(v4 - 1) == a2 )
        break;
      v3 = v4;
      v4 = (_QWORD *)*v4;
      if ( !v4 )
        return (unsigned int)-1073741275;
    }
    if ( !v3 )
    {
      v7 = *v4;
      if ( !*v4 )
      {
        *v5 = 0LL;
        *v4 = 0LL;
        return v2;
      }
      v3 = v4;
      *(_OWORD *)v5 = *(_OWORD *)(v7 - 8);
      v5 = (_QWORD *)(v7 - 8);
    }
    *v3 = *v4;
    RmpFreeHeap(v5);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
