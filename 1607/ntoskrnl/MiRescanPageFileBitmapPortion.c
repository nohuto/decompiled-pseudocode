/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1400B63D0
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x14001A460 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x140142BA4 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     RtlFindNextClearRunUlong @ 0x1400B6A3C (RtlFindNextClearRunUlong.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
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
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rdx
  __int64 *v21; // rax
  _QWORD *v22; // rbx
  unsigned int v23; // ecx
  int v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v6 = a3 & 0x1F;
  v8 = a3 - v6;
  v9 = (_QWORD *)*a5;
  v10 = *(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)(unsigned int)(a3 - v6) >> 5);
  v25 = v10;
  v24 = v6 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)&v24, v6, v10, -1, (__int64)&v26);
    v12 = result;
    if ( !(_DWORD)result )
      break;
    v6 = v26 + result;
    v13 = *((_DWORD *)v9 + 13);
    v14 = v26 + v8;
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
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 144), v9);
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 160), v9 + 3);
        v23 = *((_DWORD *)v9 + 13);
        if ( *(_DWORD *)(a1 + 140) > v23 )
          v23 = *(_DWORD *)(a1 + 140);
        *(_DWORD *)(a1 + 140) = v23;
      }
      else
      {
        v15 = *v9;
        v16 = (unsigned __int64 *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v16 != v9 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      *((_DWORD *)v9 + 13) = v12;
      *((_DWORD *)v9 + 12) = v14;
      LOBYTE(v10) = 0;
      v17 = *(_QWORD **)(a1 + 144);
      if ( v17 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v12, v14) >= v17[6] )
          {
            v18 = (_QWORD *)v17[1];
            if ( !v18 )
            {
              LOBYTE(v10) = 1;
              break;
            }
          }
          else
          {
            v18 = (_QWORD *)*v17;
            if ( !*v17 )
            {
              LOBYTE(v10) = 0;
              break;
            }
          }
          v17 = v18;
        }
      }
      RtlRbInsertNodeEx(a1 + 144, v17, v10, v9);
      LOBYTE(v19) = 0;
      v20 = *(__int64 **)(a1 + 160);
      if ( v20 )
      {
        while ( 1 )
        {
          if ( *((_DWORD *)v9 + 12) < *((_DWORD *)v20 + 6) )
          {
            v21 = (__int64 *)*v20;
            if ( !*v20 )
            {
              LOBYTE(v19) = 0;
              break;
            }
          }
          else
          {
            v21 = (__int64 *)v20[1];
            if ( !v21 )
            {
              LOBYTE(v19) = 1;
              break;
            }
          }
          v20 = v21;
        }
      }
      RtlRbInsertNodeEx(a1 + 160, v20, v19, v9 + 3);
      v22 = (_QWORD *)(a1 + 176);
      if ( (_QWORD *)*v22 == v22 )
        v9 = *(_QWORD **)(a1 + 152);
      else
        v9 = (_QWORD *)*v22;
    }
  }
  *v5 = v9;
  return result;
}
