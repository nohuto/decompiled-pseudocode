/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800DFF70
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E077C (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     RtlValidAcl @ 0x180014FC0 (RtlValidAcl.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlMapGenericMask @ 0x1800405F0 (RtlMapGenericMask.c)
 *     RtlCreateAcl @ 0x180040A00 (RtlCreateAcl.c)
 *     RtlpInheritAcl @ 0x18004158C (RtlpInheritAcl.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpCompareAces @ 0x1800DFDD8 (RtlpCompareAces.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        _BYTE *a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        _WORD *a5,
        _WORD *a6,
        _DWORD *a7,
        unsigned __int64 *a8,
        _DWORD *a9)
{
  unsigned __int16 *v9; // r12
  unsigned __int64 *v10; // r14
  _DWORD *v12; // rdi
  unsigned __int64 v13; // r13
  void *ProcessHeap; // r15
  int v15; // ebx
  int v16; // eax
  __int64 Heap; // rax
  __int64 v18; // r9
  unsigned __int16 *v19; // r15
  int v20; // r14d
  unsigned __int8 *v21; // rsi
  int v22; // ebx
  int *v23; // rbx
  int v24; // ecx
  int v25; // ecx
  char v26; // dl
  int v27; // esi
  unsigned __int8 *v28; // r14
  int v29; // ebx
  int v30; // eax
  char v31; // cl
  int v32; // r13d
  int v33; // edi
  _DWORD *v34; // rsi
  char v35; // al
  char v36; // r8
  char v37; // r10
  int v38; // esi
  unsigned __int8 *v39; // rcx
  _DWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int8 *v43; // rbx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // ecx
  _BYTE *v47; // r14
  _DWORD *v48; // r15
  unsigned __int16 *v49; // rdi
  int v50; // ebx
  _BYTE *v51; // r13
  unsigned int v52; // esi
  int v53; // ebx
  int v54; // eax
  unsigned __int64 v55; // rsi
  void *v56; // rax
  int v59; // [rsp+94h] [rbp-7Ch] BYREF
  __int16 v60; // [rsp+98h] [rbp-78h]
  int v61; // [rsp+9Ch] [rbp-74h] BYREF
  int v62; // [rsp+A0h] [rbp-70h] BYREF
  _BYTE v63[4]; // [rsp+A4h] [rbp-6Ch] BYREF
  int v64; // [rsp+A8h] [rbp-68h] BYREF
  void *v65; // [rsp+B0h] [rbp-60h]
  unsigned __int64 *v66; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v67; // [rsp+C0h] [rbp-50h] BYREF
  int v68; // [rsp+C8h] [rbp-48h]
  int v69; // [rsp+CCh] [rbp-44h]
  unsigned __int64 v70; // [rsp+D0h] [rbp-40h]
  __int64 v71; // [rsp+D8h] [rbp-38h] BYREF
  unsigned __int64 v72; // [rsp+E0h] [rbp-30h] BYREF
  int v73; // [rsp+E8h] [rbp-28h] BYREF
  _WORD *v74; // [rsp+F0h] [rbp-20h]
  _WORD *v75; // [rsp+F8h] [rbp-18h]
  _DWORD *v76; // [rsp+100h] [rbp-10h]
  _BYTE *v77; // [rsp+108h] [rbp-8h]
  unsigned __int16 *v78; // [rsp+110h] [rbp+0h]
  char v79[8]; // [rsp+118h] [rbp+8h] BYREF
  int v80; // [rsp+120h] [rbp+10h]
  char v81[8]; // [rsp+148h] [rbp+38h] BYREF
  int v82; // [rsp+150h] [rbp+40h]

  v9 = a2;
  v10 = a8;
  v12 = a9;
  v75 = a5;
  v74 = a6;
  v13 = 0LL;
  v72 = 0LL;
  v67 = 0LL;
  v59 = 0;
  v78 = a2;
  v77 = a1;
  v71 = a3;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v65 = ProcessHeap;
  v66 = a8;
  v76 = a9;
  v60 = 768;
  v15 = RtlInitializeSid((__int64)v81, (__int64)&v59, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v82 = 0;
  v15 = RtlInitializeSid((__int64)v79, (__int64)&v59, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v80 = 1;
  if ( a1 && !RtlValidAcl((__int64)a1) || !RtlValidAcl((__int64)v9) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          a1,
          0LL,
          0,
          a4,
          1,
          0,
          (__int64)v81,
          (__int64)v79,
          (__int64)v81,
          (__int64)v79,
          (__int64)a7,
          2,
          (unsigned __int64)&v71 & -(__int64)(v71 != 0),
          v71 != 0,
          (__int64 *)&v72,
          v63,
          &v73);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_96;
  }
  if ( v16 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 24LL * v9[2]);
    v18 = 0LL;
    v70 = Heap;
    v13 = Heap;
    if ( Heap )
    {
      v19 = v9 + 4;
      v20 = 0;
      v21 = (unsigned __int8 *)(v9 + 4);
      v22 = 1635;
      if ( v9[2] )
      {
        v23 = (int *)(Heap + 4);
        while ( *v21 <= 8u && *v21 != 4 )
        {
          v62 = *((_DWORD *)v21 + 1);
          RtlMapGenericMask(&v62, a7);
          if ( *v21 <= 0xAu && (v24 = 1635, _bittest(&v24, *v21)) )
            v25 = a7[3] & v62;
          else
            v25 = (a7[3] | 0x1000000) & v62;
          v18 = 0LL;
          v26 = v21[1] & 3 | ~v21[1] & 8;
          if ( (v21[1] & 2) != 0 )
          {
            *(v23 - 1) = v25;
            v23[2] = v25;
          }
          else
          {
            *(v23 - 1) = 0;
            v23[2] = 0;
          }
          if ( (v26 & 1) != 0 )
          {
            *v23 = v25;
            v23[3] = v25;
          }
          else
          {
            *v23 = 0;
            v23[3] = 0;
          }
          if ( (v26 & 8) != 0 )
          {
            v23[1] = v25;
            v23[4] = v25;
          }
          else
          {
            v23[1] = 0;
            v23[4] = 0;
          }
          ++v20;
          v23 += 6;
          v21 += *((unsigned __int16 *)v21 + 1);
          if ( v20 >= v9[2] )
          {
            v22 = 1635;
            goto LABEL_31;
          }
        }
        *a9 |= 0x1000u;
        v10 = v66;
        ProcessHeap = v65;
      }
      else
      {
LABEL_31:
        v27 = 0;
        v64 = 0;
        v28 = (unsigned __int8 *)(v72 + 8);
        if ( *(_WORD *)(v72 + 4) )
        {
          while ( 1 )
          {
            if ( *v28 > 8u || *v28 == 4 )
            {
LABEL_60:
              *v12 |= 0x1000u;
              v10 = v66;
              ProcessHeap = v65;
              v13 = v70;
              goto LABEL_96;
            }
            v61 = *((_DWORD *)v28 + 1);
            RtlMapGenericMask(&v61, a7);
            if ( *v28 <= 0xAu && _bittest(&v22, *v28) )
              v29 = a7[3] & v61;
            else
              v29 = (a7[3] | 0x1000000) & v61;
            v18 = 0LL;
            if ( v29 )
            {
              v30 = v28[1] & 3;
              v31 = v30 | ~v28[1] & 8;
              if ( v30 | ~v28[1] & 8 )
              {
                if ( (v28[1] & 2) != 0 )
                {
                  v62 = v29;
                  v69 = v29;
                }
                else
                {
                  v62 = 0;
                  v69 = 0;
                }
                if ( (v31 & 1) != 0 )
                {
                  v61 = v29;
                  v59 = v29;
                }
                else
                {
                  v61 = 0;
                  v59 = 0;
                }
                if ( (v31 & 8) != 0 )
                {
                  v68 = v29;
                }
                else
                {
                  v29 = 0;
                  v68 = 0;
                }
                v32 = 0;
                if ( v9[2] )
                {
                  v33 = v61;
                  v34 = (_DWORD *)(v70 + 20);
                  do
                  {
                    v35 = RtlpCompareAces(v28, (unsigned __int8 *)v19, v75, v74);
                    v18 = 0LL;
                    if ( v35 )
                    {
                      v29 &= ~*(v34 - 3);
                      v62 &= ~*(v34 - 5);
                      v33 &= ~*(v34 - 4);
                      *v34 &= ~v68;
                      *(v34 - 2) &= ~v69;
                      *(v34 - 1) &= ~v59;
                    }
                    ++v32;
                    v19 = (unsigned __int16 *)((char *)v19 + v19[1]);
                    v34 += 6;
                  }
                  while ( v32 < v9[2] );
                  v27 = v64;
                  v61 = v33;
                  v12 = v76;
                }
                if ( v62 | v61 | v29 )
                  goto LABEL_60;
                v19 = v9 + 4;
              }
            }
            ++v27;
            v28 += *((unsigned __int16 *)v28 + 1);
            v64 = v27;
            if ( v27 >= *(unsigned __int16 *)(v72 + 4) )
              break;
            v22 = 1635;
          }
          v13 = v70;
        }
        v15 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v39 = (unsigned __int8 *)v19;
        if ( v9[2] )
        {
          v40 = (_DWORD *)(v13 + 16);
          do
          {
            if ( *v40 | v40[1] | *(v40 - 1) )
            {
              v38 += *((unsigned __int16 *)v39 + 1);
              v42 = *v39;
              if ( !RtlBaseAceType[v42] && v37 || RtlBaseAceType[v42] == 1 && v36 )
              {
                *v12 |= 0x1000u;
                v10 = v66;
                ProcessHeap = v65;
                goto LABEL_97;
              }
            }
            else
            {
              v41 = *v39;
              if ( !RtlBaseAceType[v41] )
                v36 = 1;
              if ( RtlBaseAceType[v41] == 1 )
                v37 = 1;
            }
            ++v18;
            v39 += *((unsigned __int16 *)v39 + 1);
            v40 += 6;
          }
          while ( v18 < v9[2] );
        }
        v15 = RtlpInheritAcl(
                v77,
                0LL,
                0,
                a4,
                1,
                0,
                (__int64)v75,
                (__int64)v74,
                (__int64)v75,
                (__int64)v74,
                (__int64)a7,
                2,
                (unsigned __int64)&v71 & -(__int64)(v71 != 0),
                v71 != 0,
                (__int64 *)&v67,
                v63,
                &v73);
        if ( v15 < 0 )
          goto LABEL_103;
        v43 = (unsigned __int8 *)v67;
        ProcessHeap = v65;
        v44 = RtlAllocateHeap((__int64)v65, NtdllBaseTag + 1310720, v38 + (unsigned int)*(unsigned __int16 *)(v67 + 2));
        v10 = v66;
        *v66 = v44;
        if ( !v44 )
          goto LABEL_101;
        if ( *v43 <= *(_BYTE *)v9 )
          v45 = *(unsigned __int8 *)v9;
        else
          v45 = *v43;
        if ( (int)RtlCreateAcl(v44, v38 + (unsigned int)*((unsigned __int16 *)v43 + 1), v45) >= 0 )
        {
          v46 = 0;
          v47 = (_BYTE *)(*v10 + 8);
          v59 = 0;
          if ( v9[2] )
          {
            v48 = (_DWORD *)(v13 + 16);
            v49 = v9 + 4;
            do
            {
              v50 = *v48 | v48[1] | *(v48 - 1);
              if ( v50 )
              {
                memmove(v47, v49, v49[1]);
                v47[1] &= ~0x10u;
                v51 = v47;
                v47 += v49[1];
                v52 = 0x80000000;
                ++*(_WORD *)(*v66 + 4);
                *((_DWORD *)v51 + 1) = v50 & *((_DWORD *)v49 + 1);
                v53 = ~*((_DWORD *)v49 + 1) & v50;
                if ( v53 )
                {
                  do
                  {
                    if ( v52 < 0x10000000 )
                      break;
                    if ( (v52 & *((_DWORD *)v49 + 1)) != 0 )
                    {
                      v64 = v52;
                      RtlMapGenericMask(&v64, a7);
                      v54 = v64;
                      if ( (v64 & v53) != 0 )
                      {
                        *((_DWORD *)v51 + 1) |= v52;
                        v53 &= ~v54;
                      }
                    }
                    v52 >>= 1;
                  }
                  while ( v53 );
                  v9 = v78;
                }
                *((_DWORD *)v51 + 1) |= v53;
                v46 = v59;
              }
              ++v46;
              v49 = (unsigned __int16 *)((char *)v49 + v49[1]);
              v59 = v46;
              v48 += 6;
            }
            while ( v46 < v9[2] );
            v12 = v76;
            v43 = (unsigned __int8 *)v67;
            ProcessHeap = v65;
          }
          v55 = v67;
          memmove(v47, (const void *)(v67 + 8), (unsigned int)*((unsigned __int16 *)v43 + 1) - 8);
          v10 = v66;
          v13 = v70;
          *(_WORD *)(*v66 + 4) += *(_WORD *)(v55 + 4);
        }
        else
        {
          *v12 |= 0x1000u;
        }
      }
LABEL_96:
      v15 = 0;
LABEL_97:
      if ( (*v12 & 0x1000) == 0 )
        goto LABEL_103;
      if ( *v10 )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, *v10);
        *v10 = 0LL;
      }
      v56 = (void *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v9[1]);
      *v10 = (unsigned __int64)v56;
      if ( v56 )
      {
        memmove(v56, v9, v9[1]);
LABEL_103:
        ProcessHeap = v65;
        if ( v13 )
          RtlFreeHeap((__int64)v65, 0, v13);
        goto LABEL_105;
      }
LABEL_101:
      v15 = -1073741801;
      goto LABEL_103;
    }
    v15 = -1073741801;
  }
LABEL_105:
  if ( v72 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v72);
  if ( v67 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v67);
  return (unsigned int)v15;
}
