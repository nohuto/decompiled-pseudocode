/*
 * XREFs of RmpActivityHostPopulateRunnabilitySettings @ 0x180007CD0
 * Callers:
 *     RmpActivityHostComputeEnforcementSettings @ 0x180007140 (RmpActivityHostComputeEnforcementSettings.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 */

__int64 __fastcall RmpActivityHostPopulateRunnabilitySettings(__int64 a1, __int64 a2)
{
  int v4; // ecx
  __int64 v5; // r11
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  int v9; // r12d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // edx
  struct ExecutionModel::ResourceSet *FirstResourceSet; // r10
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // r13
  int v19; // r15d
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  char v25; // al
  struct ExecutionModel::ResourceSet *NextResourceSetInList; // rax
  int v27; // eax
  __int64 v28; // rcx
  char v29; // al
  __int64 result; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // [rsp+50h] [rbp+8h]

  v4 = 0;
  v5 = 1LL;
  v6 = (_QWORD *)(a1 + 616);
  while ( 1 )
  {
    if ( ((1 << v4) & 2) != 0 && (_QWORD *)*v6 != v6 )
    {
      v7 = *v6 - 1376LL;
      if ( *v6 != 1376LL )
        break;
    }
    ++v4;
    v6 += 3;
    if ( v4 >= 2 )
    {
      v7 = 0LL;
      break;
    }
  }
  v8 = 0LL;
  v9 = 0;
  v10 = -1;
  if ( !v7 )
  {
LABEL_47:
    v19 = v8;
    goto LABEL_28;
  }
  v11 = *(int *)(v7 + 1408);
  v12 = *(_QWORD *)(v7 + 1400);
  v13 = *(_QWORD *)(v7 + 1376);
  if ( v13 == v12 + 8 * (v11 + 2 * v11 + 77)
    || (FirstResourceSet = (struct ExecutionModel::ResourceSet *)(v13 - 1376), v13 == 1376) )
  {
    v14 = v11 + 1;
    if ( v14 < 2 )
    {
      while ( 1 )
      {
        if ( (((_DWORD)v5 << v14) & 2) != 0 )
        {
          FirstResourceSet = (struct ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet(v12, v14);
          if ( FirstResourceSet )
            break;
        }
        if ( ++v14 >= 2 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      FirstResourceSet = 0LL;
    }
  }
  v16 = *(_QWORD *)(a2 + 32);
  v17 = 0xBE0883BCFD008LL;
  v18 = *(_BYTE *)(a2 + 52);
  v19 = 100;
  do
  {
    v20 = *(_QWORD *)(v7 + 200);
    if ( v20 )
    {
      if ( v20 < 0x64 )
        goto LABEL_13;
LABEL_12:
      v20 = 100LL;
      goto LABEL_13;
    }
    v31 = *(int *)(v7 + 1416);
    if ( (unsigned int)v31 > 0x33 || !_bittest64(&v17, v31) )
      goto LABEL_12;
    v20 = v5;
LABEL_13:
    v8 += v20;
    if ( *(_DWORD *)(v7 + 1464) )
      ++v9;
    if ( *(_DWORD *)(a1 + 48) == (_DWORD)v5 )
      *(_DWORD *)(a2 + 44) = *(_DWORD *)(v7 + 1428);
    v21 = *(_QWORD *)(v7 + 1472) | v16;
    *(_QWORD *)(a2 + 32) = v21;
    v22 = *(_DWORD *)(v7 + 1432);
    v23 = *(_DWORD *)(v7 + 1460) & 3;
    v33 = v21;
    if ( (v22 & 0x40) != 0 && (*(_DWORD *)(v7 + 1460) & 3) != 3 )
      v23 = 2;
    if ( (v22 & 0xEu) >= 8 && (v22 & 0x30u) >= 0x20 && v23 <= (int)v5 )
      v23 = v5;
    if ( v10 <= v23 )
    {
      v24 = *(_DWORD *)(v7 + 1432);
      v10 = *(_DWORD *)(v7 + 1460) & 3;
      if ( (v24 & 0x40) != 0 && (*(_DWORD *)(v7 + 1460) & 3) != 3 )
        v10 = 2;
      if ( (v24 & 0xEu) >= 8 && (v24 & 0x30u) >= 0x20 && v10 <= (int)v5 )
        v10 = v5;
    }
    if ( (*(_BYTE *)(v7 + 1460) & 8) != 0 )
      v25 = v5;
    else
      v25 = 0;
    v7 = (__int64)FirstResourceSet;
    v18 |= 2 * (v5 & v25);
    *(_BYTE *)(a2 + 52) = v18;
    if ( FirstResourceSet )
    {
      NextResourceSetInList = RmpActivityHostGetNextResourceSetInList(FirstResourceSet);
      if ( !NextResourceSetInList )
        NextResourceSetInList = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(
                                                                        *(_QWORD *)(v32 + 1400),
                                                                        2,
                                                                        *(_DWORD *)(v32 + 1408) + 1);
    }
    else
    {
      NextResourceSetInList = 0LL;
    }
    v16 = v33;
    FirstResourceSet = NextResourceSetInList;
    v17 = 0xBE0883BCFD008LL;
  }
  while ( v7 );
  if ( v8 < 0x64 )
    goto LABEL_47;
LABEL_28:
  *(_DWORD *)(a2 + 48) = v19;
  if ( v9 && v9 == *(_DWORD *)(a1 + 656) )
    *(_BYTE *)(a2 + 52) |= v5;
  v27 = *(_DWORD *)(a1 + 1112);
  if ( v10 == -1 )
    v10 = v5;
  v28 = *(_QWORD *)(a1 + 40) + 424LL;
  *(_DWORD *)(a2 + 40) = v10;
  if ( (v27 & 0x80u) != 0 || (*(_BYTE *)(v28 + 1416) & 0x20) != 0 )
    v29 = v5;
  else
    v29 = 0;
  *(_BYTE *)(a2 + 52) &= ~4u;
  *(_BYTE *)(a2 + 52) |= 4 * (v5 & v29);
  result = 1024LL;
  if ( (*(_WORD *)(a1 + 1112) & 0x400) == 0
    || (*(_BYTE *)(a1 + 816) & 0x10) != 0
    || (result = *(_QWORD *)(a1 + 40), !*(_BYTE *)(result + 224)) )
  {
    LOBYTE(v5) = 0;
  }
  *(_BYTE *)(a2 + 52) ^= (*(_BYTE *)(a2 + 52) ^ (8 * v5)) & 8;
  return result;
}
