/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x1400F5258
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400BA9EC (MiBitmapsCachedEntryLengthChanged.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  bool v5; // di
  int v8; // r8d
  int v9; // ecx
  unsigned __int64 v10; // rdx
  __int64 *v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rsi
  unsigned __int64 *v15; // rax
  int v16; // r10d
  int v17; // ecx
  unsigned __int64 *v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned __int64 v21; // r14
  _QWORD *v22; // r8
  bool v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax

  v5 = 0;
  if ( !a4 )
  {
    v11 = *(__int64 **)(a1 + 160);
    if ( !v11 )
      return;
    v12 = a2 + a3;
    while ( 1 )
    {
      v13 = *((_DWORD *)v11 + 6);
      if ( v12 > v13 )
      {
        if ( a2 < *((_DWORD *)v11 + 7) + v13 )
        {
          a4 = (unsigned __int64)(v11 - 3);
          break;
        }
        v11 = (__int64 *)v11[1];
      }
      else
      {
        v11 = (__int64 *)*v11;
      }
      if ( !v11 )
        return;
    }
  }
  v8 = *(_DWORD *)(a4 + 48);
  if ( v8 == a2 || (v16 = a2 + a3, v17 = v8 + *(_DWORD *)(a4 + 52), a2 + a3 == v17) )
  {
    *(_DWORD *)(a4 + 52) -= a3;
    v9 = *(_DWORD *)(a4 + 52);
    if ( v8 == a2 )
      *(_DWORD *)(a4 + 48) = v8 + a3;
    v10 = a4;
    if ( !v9 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(a1 + 144), (unsigned __int64 *)a4);
      RtlRbRemoveNode((unsigned __int64 *)(a1 + 160), (unsigned __int64 *)(a4 + 24));
      v14 = a1 + 176;
      v15 = *(unsigned __int64 **)(v14 + 8);
      *(_QWORD *)a4 = v14;
      *(_QWORD *)(a4 + 8) = v15;
      if ( *v15 != v14 )
        __fastfail(3u);
      *v15 = a4;
      *(_QWORD *)(v14 + 8) = a4;
      return;
    }
LABEL_6:
    MiBitmapsCachedEntryLengthChanged(a1, v10, 0);
    return;
  }
  v18 = (unsigned __int64 *)(a1 + 176);
  v19 = v17 - a2 - a3;
  v20 = a2 - v8;
  if ( (unsigned __int64 *)*v18 == v18 )
  {
    if ( v20 <= v19 )
    {
      *(_DWORD *)(a4 + 52) = v19;
      *(_DWORD *)(a4 + 48) = v16;
      if ( *(_DWORD *)(a1 + 140) > v20 )
        v20 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v20;
    }
    else
    {
      *(_DWORD *)(a4 + 52) = v20;
      if ( *(_DWORD *)(a1 + 140) > v19 )
        v19 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v19;
    }
    v10 = a4;
    goto LABEL_6;
  }
  v21 = *v18;
  v22 = *(_QWORD **)*v18;
  if ( *(unsigned __int64 **)(*v18 + 8) != v18 || v22[1] != v21 )
    __fastfail(3u);
  *v18 = (unsigned __int64)v22;
  v22[1] = v18;
  *(_DWORD *)(v21 + 52) = v19;
  *(_DWORD *)(v21 + 48) = v16;
  *(_DWORD *)(a4 + 52) = v20;
  MiBitmapsCachedEntryLengthChanged(a1, a4, 0);
  v23 = 0;
  v24 = *(_QWORD **)(a1 + 144);
  if ( !v24 )
    goto LABEL_27;
  while ( *(_QWORD *)(v21 + 48) >= v24[6] )
  {
    v25 = (_QWORD *)v24[1];
    if ( !v25 )
    {
      v23 = 1;
      goto LABEL_27;
    }
LABEL_34:
    v24 = v25;
  }
  v25 = (_QWORD *)*v24;
  if ( *v24 )
    goto LABEL_34;
  v23 = 0;
LABEL_27:
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 144), (unsigned __int64)v24, v23, v21);
  v26 = *(_QWORD *)(a1 + 160);
  if ( !v26 )
    goto LABEL_31;
  while ( 2 )
  {
    if ( *(_DWORD *)(v21 + 48) < *(_DWORD *)(v26 + 24) )
    {
      v27 = *(_QWORD *)v26;
      if ( !*(_QWORD *)v26 )
        goto LABEL_31;
      goto LABEL_36;
    }
    v27 = *(_QWORD *)(v26 + 8);
    if ( v27 )
    {
LABEL_36:
      v26 = v27;
      continue;
    }
    break;
  }
  v5 = 1;
LABEL_31:
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 160), v26, v5, v21 + 24);
}
