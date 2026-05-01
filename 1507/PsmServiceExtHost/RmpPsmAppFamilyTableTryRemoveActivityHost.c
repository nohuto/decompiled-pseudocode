/*
 * XREFs of RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180008410
 * Callers:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D044 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006644 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180008D80 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     RmpPsmAppFamilyTableFind @ 0x180008EC0 (RmpPsmAppFamilyTableFind.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E38 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // ebx
  int v3; // r15d
  __int64 v4; // rdx
  _WORD *v5; // rcx
  __int16 v6; // ax
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  struct _RM_PSM_APP_FAMILY *v12; // rax
  struct _RM_PSM_APP_FAMILY *v13; // rdi
  _BYTE v15[464]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+1F0h] [rbp+F0h]
  __int128 v17; // [rsp+200h] [rbp+100h]
  __int128 v18; // [rsp+210h] [rbp+110h]
  __int128 v19; // [rsp+220h] [rbp+120h]
  int v20; // [rsp+230h] [rbp+130h]
  int v21; // [rsp+234h] [rbp+134h]
  _BYTE v22[464]; // [rsp+240h] [rbp+140h] BYREF

  v2 = RmpPsmAppFamilyNameFromPsmKey((char *)a1 + 48, v22);
  if ( v2 >= 0 )
  {
    v3 = *((_DWORD *)a1 + 145);
    memset_0(v15, 0, 0x218uLL);
    v4 = 232LL;
    v5 = v15;
    do
    {
      if ( v4 == -2147483414 )
        break;
      v6 = *(_WORD *)((char *)v5 + v22 - v15);
      if ( !v6 )
        break;
      *v5++ = v6;
      --v4;
    }
    while ( v4 );
    if ( !v4 )
      --v5;
    v7 = *((_OWORD *)a1 + 32);
    v8 = *((_DWORD *)a1 + 144);
    v9 = *((_OWORD *)a1 + 33);
    *v5 = 0;
    v16 = v7;
    v10 = *((_OWORD *)a1 + 34);
    v20 = v8;
    v17 = v9;
    v11 = *((_OWORD *)a1 + 35);
    v21 = v3;
    v18 = v10;
    v19 = v11;
  }
  if ( v2 >= 0 )
  {
    v12 = (struct _RM_PSM_APP_FAMILY *)RmpPsmAppFamilyTableFind(v15);
    v13 = v12;
    if ( v12 )
    {
      v2 = RmpPsmAppFamilyTryRemoveActivityHost(v12, a1);
      if ( v2 >= 0 )
      {
        if ( !*((_QWORD *)v13 + 69) )
          RmpPsmAppFamilyTableRemove(v13);
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)v2;
}
