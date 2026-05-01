/*
 * XREFs of ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008B70
 * Callers:
 *     RmpPsmAppFamilyTableAddActivityHost @ 0x180008A9C (RmpPsmAppFamilyTableAddActivityHost.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006AE0 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180006BF0 (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180008D80 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     RmpPsmAppFamilyTableFind @ 0x180008EC0 (RmpPsmAppFamilyTableFind.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x1800193B0 (RmpPsmAppFamilyIdFromPsmAppInstanceId.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFindOrCreateByActivityHost(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_PSM_APP_FAMILY **a2)
{
  char *v2; // rdi
  int v4; // ebx
  int v5; // r14d
  __int64 v6; // rdx
  _WORD *v7; // rcx
  __int16 v8; // ax
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _RM_PSM_APP_FAMILY *v14; // rax
  char *Heap; // rax
  char *v17; // rdi
  __int64 v18; // r8
  _OWORD *v19; // rdx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  _BYTE v30[464]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+1F0h] [rbp+F0h]
  __int128 v32; // [rsp+200h] [rbp+100h]
  __int128 v33; // [rsp+210h] [rbp+110h]
  __int128 v34; // [rsp+220h] [rbp+120h]
  int v35; // [rsp+230h] [rbp+130h]
  int v36; // [rsp+234h] [rbp+134h]
  _BYTE v37[464]; // [rsp+240h] [rbp+140h] BYREF

  v2 = (char *)a1 + 48;
  v4 = RmpPsmAppFamilyNameFromPsmKey((char *)a1 + 48, v37);
  if ( v4 >= 0 )
  {
    v5 = *((_DWORD *)v2 + 133);
    memset_0(v30, 0, 0x218uLL);
    v6 = 232LL;
    v7 = v30;
    do
    {
      if ( v6 == -2147483414 )
        break;
      v8 = *(_WORD *)((char *)v7 + v37 - v30);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
      --v7;
    v9 = *((_OWORD *)v2 + 29);
    v10 = *((_DWORD *)v2 + 132);
    v11 = *((_OWORD *)v2 + 30);
    *v7 = 0;
    v31 = v9;
    v12 = *((_OWORD *)v2 + 31);
    v35 = v10;
    v32 = v11;
    v13 = *((_OWORD *)v2 + 32);
    v36 = v5;
    v33 = v12;
    v34 = v13;
  }
  if ( v4 < 0 )
  {
LABEL_12:
    if ( v4 != -1073741275 )
      return (unsigned int)v4;
    goto LABEL_14;
  }
  v14 = (struct _RM_PSM_APP_FAMILY *)RmpPsmAppFamilyTableFind(v30);
  if ( v14 )
  {
    v4 = 0;
    *a2 = v14;
    goto LABEL_12;
  }
LABEL_14:
  v4 = RmpPsmAppFamilyIdFromPsmAppInstanceId(v2, v30);
  if ( v4 >= 0 )
  {
    Heap = (char *)RmpAllocateHeap(0x238uLL);
    v17 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x238uLL);
      v18 = 4LL;
      v19 = v17 + 16;
      v20 = v30;
      do
      {
        v21 = v20[1];
        *v19 = *v20;
        v22 = v20[2];
        v19[1] = v21;
        v23 = v20[3];
        v19[2] = v22;
        v24 = v20[4];
        v19[3] = v23;
        v25 = v20[5];
        v19[4] = v24;
        v26 = v20[6];
        v19[5] = v25;
        v27 = v20[7];
        v20 += 8;
        v19[6] = v26;
        v19 += 8;
        *(v19 - 1) = v27;
        --v18;
      }
      while ( v18 );
      v28 = *v20;
      v29 = *((_QWORD *)v20 + 2);
      *v19 = v28;
      *((_QWORD *)v19 + 2) = v29;
      *((_QWORD *)v17 + 1) = RmpPsmAppFamilyIdHash((struct _RM_PSM_APP_FAMILY_ID *)(v17 + 16));
      RmpPsmAppFamilyTableAdd((struct _RM_PSM_APP_FAMILY *)v17);
      v4 = 0;
      *a2 = (struct _RM_PSM_APP_FAMILY *)v17;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v4;
}
