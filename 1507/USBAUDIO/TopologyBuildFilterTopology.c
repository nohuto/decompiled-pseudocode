/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C0018338
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0014E60 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008240 (memset.c)
 *     TopologyCountComponents @ 0x1C0016A90 (TopologyCountComponents.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 **v2; // rbx
  int v3; // edi
  __int64 v5; // r14
  unsigned int v6; // edx
  __int64 *v7; // r8
  unsigned int i; // r9d
  __int64 v9; // rsi
  bool v10; // cl
  __int64 *v11; // r10
  __int64 *v12; // rax
  int v13; // r14d
  unsigned int v14; // eax
  __int64 *j; // rcx
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rax
  GUID *PoolWithTag; // rax
  GUID *v24; // rsi
  int v25; // r14d
  size_t v26; // r8
  GUID *v27; // r13
  int *v28; // r15
  unsigned int v29; // r11d
  int *v30; // rdi
  unsigned __int8 *Data4; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // r8d
  unsigned int v39; // r9d
  int v40; // eax
  int v41; // eax
  unsigned int v42; // edx
  bool k; // zf
  unsigned int v44; // r10d
  __int64 v45; // r14
  unsigned __int8 *v46; // rcx
  __int64 v47; // rax
  int v48; // edx
  __int64 **v49; // rbx
  __int64 *v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // [rsp+40h] [rbp-18h] BYREF
  NTSTATUS v53; // [rsp+44h] [rbp-14h] BYREF
  int v54; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v55[3]; // [rsp+4Ch] [rbp-Ch] BYREF
  unsigned int v58; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v59; // [rsp+B8h] [rbp+60h] BYREF

  v2 = (__int64 **)(*(_QWORD *)(a1 + 16) + 80LL);
  v59 = 0;
  v52 = 0;
  v3 = 0;
  v5 = a1;
  v6 = 0;
  v7 = *v2;
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
      for ( i = 0; i < *((_DWORD *)v7 + 8); ++i )
      {
        v9 = v7[7];
        v10 = 0;
        v3 = -1073741275;
        v11 = 0LL;
        v12 = *v2;
        v13 = *(_DWORD *)(v9 + 12LL * i);
        while ( v12 != (__int64 *)v2 && !v10 )
        {
          v10 = *((_DWORD *)v12 + 4) == v13;
          if ( *((_DWORD *)v12 + 4) == v13 )
          {
            v11 = v12;
            v3 = 0;
          }
          else
          {
            v12 = (__int64 *)*v12;
          }
        }
        if ( v3 >= 0 )
        {
          *(_DWORD *)(v9 + 12LL * i + 4) = *((_DWORD *)v11 + 6);
          *(_DWORD *)(v7[7] + 12LL * i + 8) = *((_DWORD *)v11 + 7);
        }
      }
      if ( *((_DWORD *)v7 + 5) <= 1u )
      {
        v14 = *((_DWORD *)v7 + 16);
        if ( v14 != -1 && v14 > v6 )
          v6 = *((_DWORD *)v7 + 16);
      }
      v7 = (__int64 *)*v7;
    }
    while ( v7 != (__int64 *)v2 );
    v5 = a1;
  }
  for ( j = *v2; j != (__int64 *)v2; j = (__int64 *)*j )
  {
    if ( v3 < 0 )
      goto LABEL_33;
    if ( *((_DWORD *)j + 5) <= 1u && *((_DWORD *)j + 16) == -1 )
      *((_DWORD *)j + 16) = ++v6;
  }
  if ( v3 >= 0 )
  {
    TopologyCountComponents(v2, &v53, &v58, v55, &v54);
    v16 = v55[0];
    v17 = (unsigned int)(v53 + 1);
    *(_DWORD *)(a2 + 68) = 152;
    v18 = v58;
    v19 = 184LL * v58 + 16 * (v16 + v17);
    if ( v19 > 0xFFFFFFFF )
      return 3221225858LL;
    PoolWithTag = (GUID *)ExAllocatePoolWithTag(NonPagedPool, (unsigned int)v19, 0x41627845u);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v53 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v5 + 8), PoolWithTag, ExFreePool);
    v25 = v53;
    if ( v53 >= 0 )
    {
      v26 = 152 * v18;
      v27 = &v24[(unsigned int)v17];
      *(_QWORD *)(a2 + 56) = v24;
      *(_QWORD *)(a2 + 72) = v27;
      v28 = (int *)v27 + 38 * v18;
      *(_QWORD *)(a2 + 88) = v28;
      memset(v27, 0, v26);
      v29 = v58;
      v30 = &v28[4 * v16];
      if ( v58 )
      {
        Data4 = v27[6].Data4;
        v32 = v58;
        do
        {
          *((_QWORD *)Data4 - 12) = v30;
          v33 = v30 + 4;
          *((_DWORD *)Data4 - 5) = -1;
          *((_QWORD *)Data4 - 11) = v33;
          v30 = v33 + 4;
          *(_DWORD *)Data4 = -1;
          *((_QWORD *)Data4 - 13) = Data4 - 80;
          Data4 += 152;
          --v32;
        }
        while ( v32 );
        v25 = v53;
      }
      k = (v54 & 1) == 0;
      v34 = 1LL;
      *v24 = KSCATEGORY_AUDIO;
      if ( !k )
      {
        v34 = 2LL;
        v24[1] = KSCATEGORY_RENDER;
      }
      if ( (v54 & 2) != 0 )
        v24[v34] = KSCATEGORY_CAPTURE;
      v35 = a2;
      *(_DWORD *)(a2 + 48) = v17;
      v36 = *v2;
      if ( *v2 == (__int64 *)v2 )
      {
LABEL_57:
        if ( v25 >= 0 )
        {
          v38 = v52;
          v39 = 0;
          *(_DWORD *)(v35 + 64) = v59;
          for ( *(_DWORD *)(v35 + 80) = v38; v39 < v38; ++v39 )
          {
            v40 = *v28;
            if ( *v28 != -1 )
            {
              if ( v40 >= 0 )
              {
                v42 = v29;
                for ( k = v29 == 0; ; k = v44 == 0 )
                {
                  v59 = v42;
                  if ( k )
                    break;
                  v44 = v42 - 1;
                  if ( *v28 == *((_DWORD *)&v27[-4] + 38 * v42 - 2) )
                  {
                    v41 = v42 - 1;
                    goto LABEL_68;
                  }
                  --v42;
                }
              }
              else
              {
                v41 = v40 & 0x7FFFFFFF;
LABEL_68:
                *v28 = v41;
                v38 = v52;
              }
            }
            v28 += 4;
          }
          if ( v29 )
          {
            v45 = v58;
            v46 = v27[1].Data4;
            do
            {
              v47 = 2LL * *((unsigned int *)v46 + 13);
              v48 = dword_1C000A670[4 * *((unsigned int *)v46 + 13)];
              if ( v48 )
              {
                *(_DWORD *)v46 = v48;
                *((_QWORD *)v46 + 1) = (&off_1C000A678)[v47];
                *((_DWORD *)v46 + 1) = 72;
              }
              v46 += 152;
              --v45;
            }
            while ( v45 );
            return (unsigned int)v53;
          }
          return (unsigned int)v25;
        }
      }
      else
      {
        while ( v25 >= 0 )
        {
          v37 = *((unsigned int *)v36 + 5);
          if ( (unsigned int)v37 >= 9 )
          {
            v25 = -1073741637;
            v53 = -1073741637;
          }
          else
          {
            v53 = pUnitProcessRtn[v37](a1, (int)v36, (int)v27, (int)v28, (__int64)&v59, (__int64)&v52);
            v25 = v53;
            if ( v53 >= 0 )
              v36 = (__int64 *)*v36;
          }
          if ( v36 == (__int64 *)v2 )
          {
            v29 = v58;
            v35 = a2;
            goto LABEL_57;
          }
        }
      }
      v49 = (__int64 **)(*(_QWORD *)(a1 + 16) + 80LL);
      while ( *v49 != (__int64 *)v49 )
      {
        v50 = *v49;
        v51 = **v49;
        if ( (__int64 **)(*v49)[1] != v49 || *(__int64 **)(v51 + 8) != v50 )
          __fastfail(3u);
        *v49 = (__int64 *)v51;
        *(_QWORD *)(v51 + 8) = v49;
        ExFreePool(v50);
      }
    }
    else
    {
      ExFreePool(v24);
    }
    return (unsigned int)v25;
  }
LABEL_33:
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
