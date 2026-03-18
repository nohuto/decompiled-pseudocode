/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1400F4D64
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x1400B8500 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x140139FC0 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     RtlFindNextClearRunUlong @ 0x1400F5360 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r12
  int v6; // r14d
  int v8; // r15d
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  bool v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  bool v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // rbx
  unsigned int v24; // ecx
  int v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v6 = a3 & 0x1F;
  v8 = a3 - v6;
  v9 = *a5;
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
    v13 = *(_DWORD *)(v9 + 52);
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
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 144), (unsigned __int64 *)v9);
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 160), (unsigned __int64 *)(v9 + 24));
        v24 = *(_DWORD *)(v9 + 52);
        if ( *(_DWORD *)(a1 + 140) > v24 )
          v24 = *(_DWORD *)(a1 + 140);
        *(_DWORD *)(a1 + 140) = v24;
      }
      else
      {
        v15 = *(_QWORD *)v9;
        v16 = *(unsigned __int64 **)(v9 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v16 != v9 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      *(_DWORD *)(v9 + 52) = v12;
      *(_DWORD *)(v9 + 48) = v14;
      v17 = 0;
      v18 = *(_QWORD **)(a1 + 144);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v12, v14) >= v18[6] )
          {
            v19 = (_QWORD *)v18[1];
            if ( !v19 )
            {
              v17 = 1;
              break;
            }
          }
          else
          {
            v19 = (_QWORD *)*v18;
            if ( !*v18 )
            {
              v17 = 0;
              break;
            }
          }
          v18 = v19;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 144), (unsigned __int64)v18, v17, v9);
      v20 = 0;
      v21 = *(_QWORD *)(a1 + 160);
      if ( v21 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v9 + 48) < *(_DWORD *)(v21 + 24) )
          {
            v22 = *(_QWORD *)v21;
            if ( !*(_QWORD *)v21 )
            {
              v20 = 0;
              break;
            }
          }
          else
          {
            v22 = *(_QWORD *)(v21 + 8);
            if ( !v22 )
            {
              v20 = 1;
              break;
            }
          }
          v21 = v22;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 160), v21, v20, v9 + 24);
      v23 = (unsigned __int64 *)(a1 + 176);
      if ( (unsigned __int64 *)*v23 == v23 )
        v9 = *(_QWORD *)(a1 + 152);
      else
        v9 = *v23;
    }
  }
  *v5 = v9;
  return result;
}
