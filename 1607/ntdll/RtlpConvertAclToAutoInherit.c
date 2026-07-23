/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800E0030
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E083C (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000D5E0 (RtlInitializeSid.c)
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlMapGenericMask @ 0x1800405E0 (RtlMapGenericMask.c)
 *     RtlCreateAcl @ 0x1800409F0 (RtlCreateAcl.c)
 *     RtlpInheritAcl @ 0x18004157C (RtlpInheritAcl.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpCompareAces @ 0x1800DFE98 (RtlpCompareAces.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        ACL *a1,
        ACL *Src,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        PGENERIC_MAPPING GenericMapping,
        PVOID *a8,
        _DWORD *a9)
{
  ACL *v9; // r12
  PVOID *v10; // r14
  _DWORD *v12; // rdi
  _DWORD *v13; // r13
  void *ProcessHeap; // r15
  int v15; // ebx
  int v16; // eax
  _DWORD *Heap; // rax
  __int64 v18; // r9
  ACL *v19; // r15
  int v20; // r14d
  ACL *v21; // rsi
  int v22; // ebx
  unsigned int *v23; // rbx
  int v24; // ecx
  unsigned int v25; // ecx
  char v26; // dl
  int v27; // esi
  unsigned __int8 *v28; // r14
  ACCESS_MASK v29; // ebx
  int v30; // eax
  char v31; // cl
  int v32; // r13d
  ACCESS_MASK v33; // edi
  _DWORD *v34; // rsi
  char v35; // al
  char v36; // r8
  char v37; // r10
  int v38; // esi
  ACL *v39; // rcx
  _DWORD *v40; // rdx
  __int64 v41; // rax
  __int64 AclRevision; // rax
  unsigned __int8 *v43; // rbx
  ACL *v44; // rax
  ULONG v45; // r8d
  int v46; // ecx
  _BYTE *v47; // r14
  _DWORD *v48; // r15
  ACL *v49; // rdi
  int v50; // ebx
  _BYTE *v51; // r13
  unsigned int v52; // esi
  int v53; // ebx
  int v54; // eax
  _WORD *v55; // rsi
  PVOID v56; // rax
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+94h] [rbp-7Ch] BYREF
  ACCESS_MASK v60; // [rsp+9Ch] [rbp-74h] BYREF
  ACCESS_MASK AccessMask; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v62; // [rsp+A4h] [rbp-6Ch] BYREF
  PVOID HeapHandle; // [rsp+B0h] [rbp-60h]
  __int64 v64; // [rsp+B8h] [rbp-58h]
  PVOID v65; // [rsp+C0h] [rbp-50h] BYREF
  ACCESS_MASK v66; // [rsp+C8h] [rbp-48h]
  ACCESS_MASK v67; // [rsp+CCh] [rbp-44h]
  _DWORD *v68; // [rsp+D0h] [rbp-40h]
  __int64 v69; // [rsp+D8h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp-30h] BYREF
  int v71; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-20h]
  __int64 v73; // [rsp+F8h] [rbp-18h]
  _DWORD *v74; // [rsp+100h] [rbp-10h]
  int v75[2]; // [rsp+108h] [rbp-8h]
  ACL *v76; // [rsp+110h] [rbp+0h]
  __int64 v77; // [rsp+118h] [rbp+8h] BYREF
  int v78; // [rsp+120h] [rbp+10h]
  char Sid[8]; // [rsp+148h] [rbp+38h] BYREF
  int v80; // [rsp+150h] [rbp+40h]

  v9 = Src;
  v10 = a8;
  v12 = a9;
  v73 = a5;
  v72 = a6;
  v13 = 0LL;
  BaseAddress = 0LL;
  v65 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v76 = Src;
  *(_QWORD *)v75 = a1;
  v69 = a3;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v64 = (__int64)a8;
  v74 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v80 = 0;
  v15 = RtlInitializeSid(&v77, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v78 = 1;
  if ( a1 && !RtlValidAcl(a1) || !RtlValidAcl(v9) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          a1,
          0LL,
          0,
          a4,
          1,
          0,
          (__int64)Sid,
          (__int64)&v77,
          (__int64)Sid,
          (__int64)&v77,
          GenericMapping,
          2,
          (unsigned __int64)&v69 & -(__int64)(v69 != 0),
          v69 != 0,
          &BaseAddress,
          &v62,
          &v71);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_96;
  }
  if ( v16 >= 0 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 24LL * v9->AceCount);
    v18 = 0LL;
    v68 = Heap;
    v13 = Heap;
    if ( Heap )
    {
      v19 = v9 + 1;
      v20 = 0;
      v21 = v9 + 1;
      v22 = 1635;
      if ( v9->AceCount )
      {
        v23 = Heap + 1;
        while ( v21->AclRevision <= 8u && v21->AclRevision != 4 )
        {
          AccessMask = *(_DWORD *)&v21->AceCount;
          RtlMapGenericMask(&AccessMask, GenericMapping);
          if ( v21->AclRevision <= 0xAu && (v24 = 1635, _bittest(&v24, v21->AclRevision)) )
            v25 = GenericMapping->GenericAll & AccessMask;
          else
            v25 = (GenericMapping->GenericAll | 0x1000000) & AccessMask;
          v18 = 0LL;
          v26 = v21->Sbz1 & 3 | ~v21->Sbz1 & 8;
          if ( (v21->Sbz1 & 2) != 0 )
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
          v21 = (ACL *)((char *)v21 + v21->AclSize);
          if ( v20 >= v9->AceCount )
          {
            v22 = 1635;
            goto LABEL_31;
          }
        }
        *a9 |= 0x1000u;
        v10 = (PVOID *)v64;
        ProcessHeap = HeapHandle;
      }
      else
      {
LABEL_31:
        v27 = 0;
        HIDWORD(v62) = 0;
        v28 = (unsigned __int8 *)BaseAddress + 8;
        if ( *((_WORD *)BaseAddress + 2) )
        {
          while ( 1 )
          {
            if ( *v28 > 8u || *v28 == 4 )
            {
LABEL_60:
              *v12 |= 0x1000u;
              v10 = (PVOID *)v64;
              ProcessHeap = HeapHandle;
              v13 = v68;
              goto LABEL_96;
            }
            v60 = *((_DWORD *)v28 + 1);
            RtlMapGenericMask(&v60, GenericMapping);
            if ( *v28 <= 0xAu && _bittest(&v22, *v28) )
              v29 = GenericMapping->GenericAll & v60;
            else
              v29 = (GenericMapping->GenericAll | 0x1000000) & v60;
            v18 = 0LL;
            if ( v29 )
            {
              v30 = v28[1] & 3;
              v31 = v30 | ~v28[1] & 8;
              if ( v30 | ~v28[1] & 8 )
              {
                if ( (v28[1] & 2) != 0 )
                {
                  AccessMask = v29;
                  v67 = v29;
                }
                else
                {
                  AccessMask = 0;
                  v67 = 0;
                }
                if ( (v31 & 1) != 0 )
                {
                  v60 = v29;
                  *(_DWORD *)IdentifierAuthority.Value = v29;
                }
                else
                {
                  v60 = 0;
                  *(_DWORD *)IdentifierAuthority.Value = 0;
                }
                if ( (v31 & 8) != 0 )
                {
                  v66 = v29;
                }
                else
                {
                  v29 = 0;
                  v66 = 0;
                }
                v32 = 0;
                if ( v9->AceCount )
                {
                  v33 = v60;
                  v34 = v68 + 5;
                  do
                  {
                    v35 = RtlpCompareAces(v28, (unsigned __int8 *)v19, (void *)v73, (void *)v72);
                    v18 = 0LL;
                    if ( v35 )
                    {
                      v29 &= ~*(v34 - 3);
                      AccessMask &= ~*(v34 - 5);
                      v33 &= ~*(v34 - 4);
                      *v34 &= ~v66;
                      *(v34 - 2) &= ~v67;
                      *(v34 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
                    }
                    ++v32;
                    v19 = (ACL *)((char *)v19 + v19->AclSize);
                    v34 += 6;
                  }
                  while ( v32 < v9->AceCount );
                  v27 = HIDWORD(v62);
                  v60 = v33;
                  v12 = v74;
                }
                if ( AccessMask | v60 | v29 )
                  goto LABEL_60;
                v19 = v9 + 1;
              }
            }
            ++v27;
            v28 += *((unsigned __int16 *)v28 + 1);
            HIDWORD(v62) = v27;
            if ( v27 >= *((unsigned __int16 *)BaseAddress + 2) )
              break;
            v22 = 1635;
          }
          v13 = v68;
        }
        v15 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v39 = v19;
        if ( v9->AceCount )
        {
          v40 = v13 + 4;
          do
          {
            if ( *v40 | v40[1] | *(v40 - 1) )
            {
              v38 += v39->AclSize;
              AclRevision = v39->AclRevision;
              if ( !RtlBaseAceType[AclRevision] && v37 || RtlBaseAceType[AclRevision] == 1 && v36 )
              {
                *v12 |= 0x1000u;
                v10 = (PVOID *)v64;
                ProcessHeap = HeapHandle;
                goto LABEL_97;
              }
            }
            else
            {
              v41 = v39->AclRevision;
              if ( !RtlBaseAceType[v41] )
                v36 = 1;
              if ( RtlBaseAceType[v41] == 1 )
                v37 = 1;
            }
            ++v18;
            v39 = (ACL *)((char *)v39 + v39->AclSize);
            v40 += 6;
          }
          while ( v18 < v9->AceCount );
        }
        v15 = RtlpInheritAcl(
                *(_BYTE **)v75,
                0LL,
                0,
                a4,
                1,
                0,
                v73,
                v72,
                v73,
                v72,
                GenericMapping,
                2,
                (unsigned __int64)&v69 & -(__int64)(v69 != 0),
                v69 != 0,
                &v65,
                &v62,
                &v71);
        if ( v15 < 0 )
          goto LABEL_103;
        v43 = (unsigned __int8 *)v65;
        ProcessHeap = HeapHandle;
        v44 = (ACL *)RtlAllocateHeap(
                       HeapHandle,
                       NtdllBaseTag + 1310720,
                       v38 + (unsigned int)*((unsigned __int16 *)v65 + 1));
        v10 = (PVOID *)v64;
        *(_QWORD *)v64 = v44;
        if ( !v44 )
          goto LABEL_101;
        if ( *v43 <= v9->AclRevision )
          v45 = v9->AclRevision;
        else
          v45 = *v43;
        if ( RtlCreateAcl(v44, v38 + *((unsigned __int16 *)v43 + 1), v45) >= 0 )
        {
          v46 = 0;
          v47 = (char *)*v10 + 8;
          *(_DWORD *)IdentifierAuthority.Value = 0;
          if ( v9->AceCount )
          {
            v48 = v13 + 4;
            v49 = v9 + 1;
            do
            {
              v50 = *v48 | v48[1] | *(v48 - 1);
              if ( v50 )
              {
                memmove(v47, v49, v49->AclSize);
                v47[1] &= ~0x10u;
                v51 = v47;
                v47 += v49->AclSize;
                v52 = 0x80000000;
                ++*(_WORD *)(*(_QWORD *)v64 + 4LL);
                *((_DWORD *)v51 + 1) = v50 & *(_DWORD *)&v49->AceCount;
                v53 = ~*(_DWORD *)&v49->AceCount & v50;
                if ( v53 )
                {
                  do
                  {
                    if ( v52 < 0x10000000 )
                      break;
                    if ( (v52 & *(_DWORD *)&v49->AceCount) != 0 )
                    {
                      HIDWORD(v62) = v52;
                      RtlMapGenericMask((PACCESS_MASK)&v62 + 1, GenericMapping);
                      v54 = HIDWORD(v62);
                      if ( (HIDWORD(v62) & v53) != 0 )
                      {
                        *((_DWORD *)v51 + 1) |= v52;
                        v53 &= ~v54;
                      }
                    }
                    v52 >>= 1;
                  }
                  while ( v53 );
                  v9 = v76;
                }
                *((_DWORD *)v51 + 1) |= v53;
                v46 = *(_DWORD *)IdentifierAuthority.Value;
              }
              ++v46;
              v49 = (ACL *)((char *)v49 + v49->AclSize);
              *(_DWORD *)IdentifierAuthority.Value = v46;
              v48 += 6;
            }
            while ( v46 < v9->AceCount );
            v12 = v74;
            v43 = (unsigned __int8 *)v65;
            ProcessHeap = HeapHandle;
          }
          v55 = v65;
          memmove(v47, (char *)v65 + 8, (unsigned int)*((unsigned __int16 *)v43 + 1) - 8);
          v10 = (PVOID *)v64;
          v13 = v68;
          *(_WORD *)(*(_QWORD *)v64 + 4LL) += v55[2];
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
        RtlFreeHeap(ProcessHeap, 0, *v10);
        *v10 = 0LL;
      }
      v56 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v9->AclSize);
      *v10 = v56;
      if ( v56 )
      {
        memmove(v56, v9, v9->AclSize);
LABEL_103:
        ProcessHeap = HeapHandle;
        if ( v13 )
          RtlFreeHeap(HeapHandle, 0, v13);
        goto LABEL_105;
      }
LABEL_101:
      v15 = -1073741801;
      goto LABEL_103;
    }
    v15 = -1073741801;
  }
LABEL_105:
  if ( BaseAddress )
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v65 )
    RtlFreeHeap(ProcessHeap, 0, v65);
  return (unsigned int)v15;
}
