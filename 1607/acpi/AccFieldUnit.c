/*
 * XREFs of AccFieldUnit @ 0x1C0014F20
 * Callers:
 *     <none>
 * Callees:
 *     AcquireGL @ 0x1C00142E0 (AcquireGL.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     PushAccFieldObj @ 0x1C0019C90 (PushAccFieldObj.c)
 *     WriteField @ 0x1C001AFDC (WriteField.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // eax
  _DWORD *v7; // rsi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int *v11; // rbx
  __int64 v12; // r9
  unsigned int *v13; // rax
  unsigned int *i; // r8
  __int64 **v15; // r10
  __int64 *v16; // rdx
  __int64 v17; // r10
  unsigned int *v18; // rax
  unsigned int *v19; // r10
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v23; // edx
  __int64 v24; // rax
  __int16 v25; // cx
  _DWORD *v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned int Field; // eax
  __int64 v31; // rcx
  unsigned int v32; // ecx
  _QWORD *v33; // r10
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // r8
  __int64 *v38; // rcx
  __int64 **v39; // rax

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return v3;
        goto LABEL_7;
      }
      goto LABEL_23;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v7 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 64LL,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 96LL) + 8LL,
                             *(_QWORD *)(*(_QWORD *)v7 + 96LL) + 16LL,
                             8);
  }
  ++*(_DWORD *)(a2 + 16);
  v23 = v7[5];
  if ( (v23 & 0x80000010) == 0 )
  {
    v24 = *(_QWORD *)v7;
    v25 = *(_WORD *)(*(_QWORD *)v7 + 66LL);
    if ( v25 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
        goto LABEL_23;
    }
    else
    {
      if ( v25 != 132 )
        goto LABEL_23;
      v37 = *(_QWORD **)(v24 + 96);
      if ( (*(_DWORD *)(*(_QWORD *)(*v37 + 96LL) + 20LL) & 0x10) == 0
        && (*(_DWORD *)(*(_QWORD *)(v37[1] + 96LL) + 20LL) & 0x10) == 0 )
      {
        goto LABEL_23;
      }
    }
  }
  v7[5] = v23 | 0x80000000;
  v3 = AcquireGL(a1);
  if ( v3 )
    return v3;
LABEL_23:
  ++*(_DWORD *)(a2 + 16);
  if ( (int)v7[5] < 0 )
    *(_DWORD *)(a2 + 16) |= 0x20000u;
  v26 = v7 + 2;
  v27 = *(_QWORD *)(a2 + 40);
  v28 = *(_QWORD *)(a2 + 32);
  if ( (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    Field = ReadField(a1, v28, v26, v27);
  else
    Field = WriteField(a1, v28, v26, v27);
  v3 = Field;
  if ( Field != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_7:
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 && ghGlobalLock )
      ghGlobalLock(5LL, 1LL, qword_1C0074F28);
    if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      ConPrintf("=");
      PrintObject(*(_QWORD *)(a2 + 40));
    }
    v10 = *(_QWORD *)(a1 + 416);
    v11 = (unsigned int *)(v10 - 16);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
    *(_DWORD *)(v10 - 16) = 0;
    byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v12 = *((_QWORD *)v11 + 1);
    v13 = *(unsigned int **)(v12 + 40);
    for ( i = (unsigned int *)(v12 + 40); v13 != i; v13 = *(unsigned int **)v13 )
    {
      if ( v11 + 4 < v13 )
        break;
    }
    v15 = (__int64 **)*((_QWORD *)v13 + 1);
    v16 = (__int64 *)(v11 + 4);
    if ( *v15 != (__int64 *)v13 )
      __fastfail(3u);
    *((_QWORD *)v11 + 3) = v15;
    *v16 = (__int64)v13;
    *v15 = v16;
    *((_QWORD *)v13 + 1) = v16;
    v17 = *v16 - 16;
    if ( (unsigned int *)*v16 != i )
    {
      v31 = v11[1];
      if ( (unsigned int *)v17 == (unsigned int *)((char *)v11 + v31) )
      {
        v32 = *(_DWORD *)(v17 + 4) + v31;
        v33 = (_QWORD *)*v16;
        v11[1] = v32;
        v34 = *v33;
        v35 = (_QWORD *)v33[1];
        if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v35 != v33 )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
      }
    }
    v18 = (unsigned int *)*((_QWORD *)v11 + 3);
    v19 = v18 - 4;
    if ( v18 != i )
    {
      v36 = v19[1];
      if ( v11 == (unsigned int *)((char *)v19 + v36) )
      {
        v19[1] = v11[1] + v36;
        v38 = (__int64 *)*v16;
        v39 = (__int64 **)*((_QWORD *)v11 + 3);
        if ( *(__int64 **)(*v16 + 8) != v16 || *v39 != v16 )
          __fastfail(3u);
        *v39 = v38;
        v11 = v19;
        v38[1] = (__int64)v39;
      }
    }
    if ( *(_QWORD *)(v12 + 32) <= (unsigned __int64)v11 + v11[1] )
    {
      *(_QWORD *)(v12 + 32) = v11;
      v20 = v11 + 4;
      v21 = *v20;
      v22 = (_QWORD *)v20[1];
      if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v22 != v20 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
    }
    KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
  }
  return v3;
}
