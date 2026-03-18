/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C003E2C4
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C003EA8C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C003E89C (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
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
  _QWORD *v11; // r14
  unsigned __int64 v12; // r12
  unsigned int v13; // edx
  _QWORD *v14; // rbx
  _DWORD *v15; // r13
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  _DWORD *v19; // rax
  unsigned __int64 v21; // r10
  _QWORD *v22; // rdx
  _QWORD *v23; // r8
  unsigned __int64 v24; // r11
  bool v25; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-54h]
  unsigned __int64 v27; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v28[9]; // [rsp+60h] [rbp-48h] BYREF
  VIDMM_LINEAR_POOL *v29; // [rsp+B0h] [rbp+8h]
  char v30; // [rsp+C8h] [rbp+20h]

  v30 = a4;
  v29 = a1;
  v11 = (_QWORD *)((char *)a1 + 40);
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( (_QWORD *)*v11 != v11 )
  {
    v12 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v13 = (a3 + 4095) & 0xFFFFF000;
    v26 = v13;
    if ( a4 )
      v14 = (_QWORD *)*v11;
    else
      v14 = (_QWORD *)*((_QWORD *)a1 + 6);
    while ( 1 )
    {
      if ( v14 == v11 )
        return 3223191808LL;
      v15 = v14 - 4;
      v16 = *(v14 - 3);
      v17 = (__int64)(v14 - 4);
      v18 = v16 + *(v14 - 2);
      v27 = v16;
      v28[0] = v18;
      if ( a7 )
      {
        if ( a4 )
        {
          while ( 1 )
          {
            v14 = (_QWORD *)*v14;
            if ( v14 == v11 || *(v14 - 3) != v18 )
              break;
            if ( a7 == 2 || *((_DWORD *)v14 - 8) == 2 || (*((unsigned int (__fastcall **)(_QWORD))a1 + 4))(*(v14 - 1)) )
            {
              v18 += *(v14 - 2);
              v17 = (__int64)(v14 - 4);
              v28[0] = v18;
            }
            a1 = v29;
          }
        }
        else
        {
          v14 = (_QWORD *)v14[1];
          if ( v14 != v11 )
          {
            do
            {
              if ( *(v14 - 2) + *(v14 - 3) != v16 )
                break;
              if ( a7 == 2 || *((_DWORD *)v14 - 8) == 2 || (*((unsigned int (__fastcall **)(_QWORD))a1 + 4))(*(v14 - 1)) )
              {
                v16 -= *(v14 - 2);
                v17 = (__int64)(v14 - 4);
              }
              v14 = (_QWORD *)v14[1];
              a1 = v29;
            }
            while ( v14 != v11 );
            v27 = v16;
          }
          v19 = v15;
          v15 = (_DWORD *)v17;
          v17 = (__int64)v19;
        }
        a4 = v30;
        v13 = v26;
LABEL_22:
        if ( v18 - v16 >= v12 )
        {
          VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(a1, &v25, &v27, v28, v12, v13, a4, a5, a6);
          if ( v25 )
            goto LABEL_26;
          v16 = v27;
          v18 = v28[0];
        }
        if ( v18 - v16 >= v12 )
        {
          v21 = v16 + v12;
          v22 = v15 + 8;
          while ( v22 != *(_QWORD **)(v17 + 32) )
          {
            v23 = v22 - 4;
            v22 = (_QWORD *)*v22;
            v24 = v23[1];
            if ( v24 + v23[2] > v16 )
            {
              if ( v24 >= v21 )
              {
                v17 = v23[5] - 32LL;
                break;
              }
            }
            else
            {
              v15 = v22 - 4;
            }
          }
          *a8 = v15;
          *a9 = v17;
          *a10 = v16;
          *a11 = v21;
          return 0LL;
        }
LABEL_26:
        v13 = v26;
        a1 = v29;
        a4 = v30;
      }
      else
      {
        if ( a4 )
          v14 = (_QWORD *)*v14;
        else
          v14 = (_QWORD *)v14[1];
        if ( *v15 == 2 )
          goto LABEL_22;
      }
    }
  }
  return 3223191808LL;
}
