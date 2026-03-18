/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x1400B6934
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400B65FC (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x140119444 (MiGatherPagefilePages.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDF10 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     MiBitmapsCachedEntryLengthChanged @ 0x14001BDE8 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char v5; // di
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 *v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 *v15; // rax
  int v16; // r10d
  int v17; // ecx
  _QWORD **v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  _QWORD **v21; // r14
  _QWORD *v22; // r8
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 *v27; // rdx
  __int64 *v28; // rax

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
          a4 = (__int64)(v11 - 3);
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
      v15 = *(__int64 **)(v14 + 8);
      if ( *v15 != v14 )
        __fastfail(3u);
      *(_QWORD *)a4 = v14;
      *(_QWORD *)(a4 + 8) = v15;
      *v15 = a4;
      *(_QWORD *)(v14 + 8) = a4;
      return;
    }
LABEL_6:
    MiBitmapsCachedEntryLengthChanged(a1, v10, 0);
    return;
  }
  v18 = (_QWORD **)(a1 + 176);
  v19 = v17 - a2 - a3;
  v20 = a2 - v8;
  if ( *v18 == v18 )
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
  v21 = (_QWORD **)*v18;
  v22 = (_QWORD *)**v18;
  if ( (_QWORD **)(*v18)[1] != v18 || (_QWORD **)v22[1] != v21 )
    __fastfail(3u);
  *v18 = v22;
  v22[1] = v18;
  *((_DWORD *)v21 + 13) = v19;
  *((_DWORD *)v21 + 12) = v16;
  *(_DWORD *)(a4 + 52) = v20;
  MiBitmapsCachedEntryLengthChanged(a1, a4, 0);
  LOBYTE(v23) = 0;
  v24 = *(_QWORD **)(a1 + 144);
  if ( !v24 )
    goto LABEL_28;
  v23 = *((unsigned int *)v21 + 13);
  while ( (unsigned __int64)v21[6] >= v24[6] )
  {
    v25 = (_QWORD *)v24[1];
    if ( !v25 )
    {
      LOBYTE(v23) = 1;
      goto LABEL_28;
    }
LABEL_35:
    v24 = v25;
  }
  v25 = (_QWORD *)*v24;
  if ( *v24 )
    goto LABEL_35;
  LOBYTE(v23) = 0;
LABEL_28:
  RtlRbInsertNodeEx(a1 + 144, v24, v23, v21);
  v27 = *(__int64 **)(a1 + 160);
  if ( !v27 )
    goto LABEL_32;
  while ( 2 )
  {
    if ( *((_DWORD *)v21 + 12) < *((_DWORD *)v27 + 6) )
    {
      v28 = (__int64 *)*v27;
      if ( !*v27 )
        goto LABEL_32;
      goto LABEL_37;
    }
    v28 = (__int64 *)v27[1];
    if ( v28 )
    {
LABEL_37:
      v27 = v28;
      continue;
    }
    break;
  }
  v5 = 1;
LABEL_32:
  LOBYTE(v26) = v5;
  RtlRbInsertNodeEx(a1 + 160, v27, v26, v21 + 3);
}
