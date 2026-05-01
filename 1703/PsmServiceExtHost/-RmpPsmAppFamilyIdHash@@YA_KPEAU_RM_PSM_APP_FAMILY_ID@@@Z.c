/*
 * XREFs of ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180017860
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800165E4 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmpPsmAppFamilyIdHash(struct _RM_PSM_APP_FAMILY_ID *a1)
{
  WCHAR *v1; // rsi
  WCHAR *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  WCHAR v10; // [rsp+30h] [rbp+8h]

  v1 = (WCHAR *)((char *)a1 + 464);
  v2 = (WCHAR *)a1;
  v3 = 314159LL;
  if ( a1 < (struct _RM_PSM_APP_FAMILY_ID *)((char *)a1 + 464) )
  {
    do
    {
      v10 = RtlUpcaseUnicodeChar(*v2++);
      v3 = HIBYTE(v10) + 37 * ((unsigned __int8)v10 + 37 * v3);
    }
    while ( v2 < v1 );
  }
  v4 = 9LL;
  do
  {
    v5 = *(unsigned __int8 *)v1;
    v1 += 4;
    v6 = *((unsigned __int8 *)v1 - 3)
       + 37
       * (*((unsigned __int8 *)v1 - 4)
        + 37
        * (*((unsigned __int8 *)v1 - 5)
         + 37 * (*((unsigned __int8 *)v1 - 6) + 37 * (*((unsigned __int8 *)v1 - 7) + 37 * (v5 + 37 * v3)))));
    v7 = *((unsigned __int8 *)v1 - 2);
    v8 = *((unsigned __int8 *)v1 - 1);
    v3 = v8 + 37 * (v7 + 37 * v6);
    --v4;
  }
  while ( v4 );
  return v8 + 37 * (v7 + 37 * v6);
}
