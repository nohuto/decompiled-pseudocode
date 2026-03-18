/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0058840
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0059180 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C0058F8C (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        VIDMM_LINEAR_POOL *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  _QWORD *v11; // r15
  unsigned __int64 v13; // rdi
  unsigned int v14; // edx
  _QWORD *i; // rbx
  unsigned __int64 v16; // r14
  _DWORD *v17; // r13
  __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  _DWORD *v20; // rax
  _DWORD *v21; // r10
  _QWORD *v22; // rdx
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r9
  _QWORD *v25; // r8
  __int64 v26; // rcx
  bool v27; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-54h]
  unsigned __int64 v29; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]
  VIDMM_LINEAR_POOL *v32; // [rsp+B0h] [rbp+8h]
  char v33; // [rsp+C8h] [rbp+20h]

  v33 = a4;
  v32 = a1;
  v11 = (_QWORD *)((char *)a1 + 40);
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( (_QWORD *)*v11 == v11 )
    return 3223191808LL;
  v13 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v14 = (a3 + 4095) & 0xFFFFF000;
  v31 = v13;
  v28 = v14;
  if ( a4 )
    i = (_QWORD *)*v11;
  else
    i = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( i == v11 )
    return 3223191808LL;
  while ( 1 )
  {
    v16 = *(i - 3);
    v17 = i - 4;
    v18 = (__int64)(i - 4);
    v19 = v16 + *(i - 2);
    v29 = v16;
    v30 = v19;
    if ( a7 )
    {
      if ( a4 )
      {
        for ( i = (_QWORD *)*i; i != v11; a1 = v32 )
        {
          if ( *(i - 3) != v19 )
            break;
          if ( a7 == 2 || *((_DWORD *)i - 8) == 2 || (*((unsigned int (__fastcall **)(_QWORD))a1 + 4))(*(i - 1)) )
          {
            v19 += *(i - 2);
            v18 = (__int64)(i - 4);
            v30 = v19;
          }
          i = (_QWORD *)*i;
        }
      }
      else
      {
        i = (_QWORD *)i[1];
        if ( i != v11 )
        {
          do
          {
            if ( *(i - 2) + *(i - 3) != v16 )
              break;
            if ( a7 == 2 || *((_DWORD *)i - 8) == 2 || (*((unsigned int (__fastcall **)(_QWORD))a1 + 4))(*(i - 1)) )
            {
              v16 -= *(i - 2);
              v18 = (__int64)(i - 4);
            }
            i = (_QWORD *)i[1];
            a1 = v32;
          }
          while ( i != v11 );
          v29 = v16;
        }
        v20 = v17;
        v17 = (_DWORD *)v18;
        v18 = (__int64)v20;
      }
      v13 = v31;
      a4 = v33;
      v14 = v28;
    }
    else
    {
      if ( a4 )
        i = (_QWORD *)*i;
      else
        i = (_QWORD *)i[1];
      if ( *v17 != 2 )
        goto LABEL_37;
    }
    if ( v19 - v16 < v13 )
      break;
    VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(a1, &v27, &v29, &v30, v13, v14, a4, a5, a6);
    if ( !v27 )
    {
      v16 = v29;
      v19 = v30;
      break;
    }
LABEL_36:
    v14 = v28;
    a4 = v33;
    a1 = v32;
LABEL_37:
    if ( i == v11 )
      return 3223191808LL;
  }
  if ( v19 - v16 < v13 )
    goto LABEL_36;
  v21 = *(_DWORD **)(v18 + 32);
  v22 = v17 + 8;
  v23 = v16 + v13;
  if ( v17 + 8 == v21 )
    goto LABEL_46;
  while ( 2 )
  {
    v24 = *(v22 - 3);
    v25 = v22 - 4;
    v26 = *(v22 - 2);
    v22 = (_QWORD *)*v22;
    if ( v24 + v26 <= v16 )
    {
      v17 = v22 - 4;
      goto LABEL_43;
    }
    if ( v24 < v23 )
    {
LABEL_43:
      if ( v22 == (_QWORD *)v21 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  v18 = v25[5] - 32LL;
LABEL_46:
  *a8 = v17;
  *a9 = v18;
  *a10 = v16;
  *a11 = v23;
  return 0LL;
}
