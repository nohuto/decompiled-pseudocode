/*
 * XREFs of ?RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@@Z @ 0x180015CC0
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015A38 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostIdentifierHash(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // r8
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = a1;
  if ( !a2 )
    return utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, a1, a1);
  result = 314159LL;
  v4 = 69LL;
  do
  {
    v5 = 37 * result;
    v6 = *v2;
    v2 += 8;
    result = *(v2 - 1)
           + 37
           * (*(v2 - 2)
            + 37
            * (*(v2 - 3) + 37 * (*(v2 - 4) + 37 * (*(v2 - 5) + 37 * (*(v2 - 6) + 37 * (*(v2 - 7) + 37 * (v6 + v5)))))));
    --v4;
  }
  while ( v4 );
  return result;
}
