/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C0017318
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0013E60 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008000 (memset.c)
 *     TopologyCountComponents @ 0x1C0015A70 (TopologyCountComponents.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 **v2; // rbx
  int v3; // edi
  unsigned int v5; // edx
  __int64 *v6; // r8
  unsigned int i; // r9d
  __int64 v8; // rsi
  bool v9; // cl
  __int64 *v10; // r10
  __int64 *v11; // rax
  int v12; // r14d
  unsigned int v13; // eax
  __int64 *j; // rcx
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rax
  GUID *PoolWithTag; // rax
  GUID *v24; // rdi
  int v25; // r15d
  size_t v26; // r8
  GUID *v27; // r13
  int *v28; // r14
  int *v29; // rsi
  __int64 v30; // rdx
  unsigned __int8 *Data4; // rcx
  _DWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rdi
  unsigned int v36; // r8d
  unsigned int v37; // r9d
  int v38; // eax
  int v39; // eax
  int v40; // edx
  bool k; // zf
  int v42; // r10d
  __int64 v43; // r15
  unsigned __int8 *v44; // rcx
  __int64 v45; // rax
  int v46; // edx
  __int64 **v47; // rbx
  __int64 *v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // [rsp+40h] [rbp-28h] BYREF
  int v51; // [rsp+44h] [rbp-24h] BYREF
  NTSTATUS v52; // [rsp+48h] [rbp-20h] BYREF
  __int64 v53; // [rsp+50h] [rbp-18h] BYREF
  int v54; // [rsp+58h] [rbp-10h]
  int v57; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v58; // [rsp+C8h] [rbp+60h] BYREF

  v2 = (__int64 **)(*(_QWORD *)(a1 + 16) + 80LL);
  v57 = 0;
  v58 = 0;
  v3 = 0;
  v5 = 0;
  v6 = *v2;
  if ( *v2 == (__int64 *)v2 )
  {
    v3 = -1073741438;
  }
  else
  {
    do
    {
      if ( v3 < 0 )
        break;
      for ( i = 0; i < *((_DWORD *)v6 + 8); ++i )
      {
        v8 = v6[7];
        v9 = 0;
        v3 = -1073741275;
        v10 = 0LL;
        v11 = *v2;
        v12 = *(_DWORD *)(v8 + 12LL * i);
        while ( v11 != (__int64 *)v2 && !v9 )
        {
          v9 = *((_DWORD *)v11 + 4) == v12;
          if ( *((_DWORD *)v11 + 4) == v12 )
          {
            v10 = v11;
            v3 = 0;
          }
          else
          {
            v11 = (__int64 *)*v11;
          }
        }
        if ( v3 >= 0 )
        {
          *(_DWORD *)(v8 + 12LL * i + 4) = *((_DWORD *)v10 + 6);
          *(_DWORD *)(v6[7] + 12LL * i + 8) = *((_DWORD *)v10 + 7);
        }
      }
      if ( *((_DWORD *)v6 + 5) <= 1u )
      {
        v13 = *((_DWORD *)v6 + 16);
        if ( v13 != -1 && v13 > v5 )
          v5 = *((_DWORD *)v6 + 16);
      }
      v6 = (__int64 *)*v6;
    }
    while ( v6 != (__int64 *)v2 );
  }
  for ( j = *v2; j != (__int64 *)v2; j = (__int64 *)*j )
  {
    if ( v3 < 0 )
      goto LABEL_32;
    if ( *((_DWORD *)j + 5) <= 1u && *((_DWORD *)j + 16) == -1 )
      *((_DWORD *)j + 16) = ++v5;
  }
  if ( v3 >= 0 )
  {
    TopologyCountComponents(v2, &v52, &v50, &v53, &v51);
    v15 = v50;
    v16 = v50;
    v17 = (unsigned int)v53;
    v54 = v52 + 1;
    v18 = (unsigned int)(v52 + 1);
    v19 = 184LL * v50 + 16 * ((unsigned int)v53 + v18);
    *(_DWORD *)(a2 + 68) = 152;
    v53 = v15;
    if ( v19 > 0xFFFFFFFF )
      return 3221225858LL;
    PoolWithTag = (GUID *)ExAllocatePoolWithTag(NonPagedPool, (unsigned int)v19, 0x41627845u);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v52 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool);
    v25 = v52;
    if ( v52 >= 0 )
    {
      v26 = 152 * v16;
      v27 = &v24[v18];
      *(_QWORD *)(a2 + 56) = v24;
      *(_QWORD *)(a2 + 72) = v27;
      v28 = (int *)v27 + 38 * v16;
      *(_QWORD *)(a2 + 88) = v28;
      memset(v27, 0, v26);
      v29 = &v28[4 * v17];
      if ( (_DWORD)v15 )
      {
        v30 = v15;
        Data4 = v27[6].Data4;
        do
        {
          *((_QWORD *)Data4 - 12) = v29;
          v32 = v29 + 4;
          *((_DWORD *)Data4 - 5) = -1;
          *((_QWORD *)Data4 - 11) = v32;
          v29 = v32 + 4;
          *(_DWORD *)Data4 = -1;
          *((_QWORD *)Data4 - 13) = Data4 - 80;
          Data4 += 152;
          --v30;
        }
        while ( v30 );
        LODWORD(v15) = v50;
      }
      k = (v51 & 1) == 0;
      v33 = 1LL;
      *v24 = KSCATEGORY_AUDIO;
      if ( !k )
      {
        v33 = 2LL;
        v24[1] = KSCATEGORY_RENDER;
      }
      if ( (v51 & 2) != 0 )
        v24[v33] = KSCATEGORY_CAPTURE;
      v34 = a2;
      *(_DWORD *)(a2 + 48) = v54;
      v35 = *v2;
      if ( *v2 == (__int64 *)v2 )
      {
LABEL_54:
        if ( v25 >= 0 )
        {
          v36 = v58;
          v37 = 0;
          *(_DWORD *)(v34 + 64) = v57;
          for ( *(_DWORD *)(v34 + 80) = v36; v37 < v36; ++v37 )
          {
            v38 = *v28;
            if ( *v28 != -1 )
            {
              if ( v38 >= 0 )
              {
                v40 = v15;
                for ( k = (_DWORD)v15 == 0; ; k = v42 == 0 )
                {
                  v57 = v40;
                  if ( k )
                    break;
                  v42 = v40 - 1;
                  if ( *v28 == *(&v27[5].Data1 + 38 * (unsigned int)(v40 - 1)) )
                  {
                    v39 = v40 - 1;
                    goto LABEL_65;
                  }
                  --v40;
                }
              }
              else
              {
                v39 = v38 & 0x7FFFFFFF;
LABEL_65:
                *v28 = v39;
                v36 = v58;
              }
            }
            v28 += 4;
          }
          if ( (_DWORD)v15 )
          {
            v43 = v53;
            v44 = v27[1].Data4;
            do
            {
              v45 = 2LL * *((unsigned int *)v44 + 13);
              v46 = dword_1C000A670[4 * *((unsigned int *)v44 + 13)];
              if ( v46 )
              {
                *(_DWORD *)v44 = v46;
                *((_QWORD *)v44 + 1) = (&off_1C000A678)[v45];
                *((_DWORD *)v44 + 1) = 72;
              }
              v44 += 152;
              --v43;
            }
            while ( v43 );
            return (unsigned int)v52;
          }
          return (unsigned int)v25;
        }
      }
      else
      {
        while ( v25 >= 0 )
        {
          v52 = pUnitProcessRtn[*((unsigned int *)v35 + 5)](
                  a1,
                  (int)v35,
                  (int)v27,
                  (int)v28,
                  (__int64)&v57,
                  (__int64)&v58);
          v25 = v52;
          if ( v52 >= 0 )
            v35 = (__int64 *)*v35;
          if ( v35 == (__int64 *)v2 )
          {
            v34 = a2;
            goto LABEL_54;
          }
        }
      }
      v47 = (__int64 **)(*(_QWORD *)(a1 + 16) + 80LL);
      while ( *v47 != (__int64 *)v47 )
      {
        v48 = *v47;
        v49 = **v47;
        if ( (__int64 **)(*v47)[1] != v47 || *(__int64 **)(v49 + 8) != v48 )
          __fastfail(3u);
        *v47 = (__int64 *)v49;
        *(_QWORD *)(v49 + 8) = v47;
        ExFreePool(v48);
      }
    }
    else
    {
      ExFreePool(v24);
    }
    return (unsigned int)v25;
  }
LABEL_32:
  while ( *v2 != (__int64 *)v2 )
  {
    v21 = *v2;
    v22 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v22 + 8) != v21 )
      __fastfail(3u);
    *v2 = (__int64 *)v22;
    *(_QWORD *)(v22 + 8) = v2;
    ExFreePool(v21);
  }
  return (unsigned int)v3;
}
