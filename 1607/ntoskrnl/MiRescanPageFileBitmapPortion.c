/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1400B41F8
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x140019FE0 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x140143114 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 *     RtlFindNextClearRunUlong @ 0x1400B4864 (RtlFindNextClearRunUlong.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  int v6; // r14d
  int v8; // r15d
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r8
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rcx
  _QWORD *v16; // rax
  BOOLEAN v17; // r8
  _RTL_BALANCED_NODE *v18; // rdx
  _RTL_BALANCED_NODE *v19; // rax
  BOOLEAN v20; // r8
  __int64 *v21; // rdx
  __int64 *v22; // rax
  _QWORD *v23; // rbx
  unsigned int v24; // ecx
  int v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v6 = a3 & 0x1F;
  v8 = a3 - v6;
  v9 = (_QWORD *)*a5;
  v10 = *(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)(unsigned int)(a3 - v6) >> 5);
  v26 = v10;
  v25 = v6 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)&v25, v6, v10, -1, (__int64)&v27);
    v12 = result;
    if ( !(_DWORD)result )
      break;
    v6 = v27 + result;
    v13 = *((_DWORD *)v9 + 13);
    v14 = v27 + v8;
    if ( v12 <= v13 )
    {
      if ( *(_DWORD *)(a1 + 140) > v12 )
        v12 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v12;
    }
    else
    {
      if ( v13 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v9);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v9 + 1);
        v24 = *((_DWORD *)v9 + 13);
        if ( *(_DWORD *)(a1 + 140) > v24 )
          v24 = *(_DWORD *)(a1 + 140);
        *(_DWORD *)(a1 + 140) = v24;
      }
      else
      {
        v15 = *v9;
        v16 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v16 != v9 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      *((_DWORD *)v9 + 13) = v12;
      *((_DWORD *)v9 + 12) = v14;
      v17 = 0;
      v18 = *(_RTL_BALANCED_NODE **)(a1 + 144);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( (_RTL_BALANCED_NODE *)__PAIR64__(v12, v14) >= v18[2].Children[0] )
          {
            v19 = v18->Children[1];
            if ( !v19 )
            {
              v17 = 1;
              break;
            }
          }
          else
          {
            v19 = v18->Children[0];
            if ( !v18->Children[0] )
            {
              v17 = 0;
              break;
            }
          }
          v18 = v19;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 144), v18, v17, (PRTL_BALANCED_NODE)v9);
      v20 = 0;
      v21 = *(__int64 **)(a1 + 160);
      if ( v21 )
      {
        while ( 1 )
        {
          if ( *((_DWORD *)v9 + 12) < *((_DWORD *)v21 + 6) )
          {
            v22 = (__int64 *)*v21;
            if ( !*v21 )
            {
              v20 = 0;
              break;
            }
          }
          else
          {
            v22 = (__int64 *)v21[1];
            if ( !v22 )
            {
              v20 = 1;
              break;
            }
          }
          v21 = v22;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v21, v20, (PRTL_BALANCED_NODE)v9 + 1);
      v23 = (_QWORD *)(a1 + 176);
      if ( (_QWORD *)*v23 == v23 )
        v9 = *(_QWORD **)(a1 + 152);
      else
        v9 = (_QWORD *)*v23;
    }
  }
  *v5 = v9;
  return result;
}
