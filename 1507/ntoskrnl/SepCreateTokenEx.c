/*
 * XREFs of SepCreateTokenEx @ 0x14002EC40
 * Callers:
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x140594FCC (SepCreateToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x140015510 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x140015FC4 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepSetTokenTrust @ 0x14043666C (SepSetTokenTrust.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
 *     SepReferenceLogonSession @ 0x14046E1E4 (SepReferenceLogonSession.c)
 *     SepSetTokenClaims @ 0x14046E38C (SepSetTokenClaims.c)
 *     RtlCopySidAndAttributesArray @ 0x1404709F0 (RtlCopySidAndAttributesArray.c)
 *     RtlIdentifierAuthoritySid @ 0x140470AC0 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     SepAppendAdminAceToTokenAcl @ 0x14055A978 (SepAppendAdminAceToTokenAcl.c)
 *     SepSetTokenUserAndGroups @ 0x1406D5C44 (SepSetTokenUserAndGroups.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        PSID_AND_ATTRIBUTES a11,
        unsigned int a12,
        unsigned int a13,
        __int64 a14,
        void *a15,
        void *a16,
        void *a17,
        _OWORD *a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        _DWORD *a23,
        char a24)
{
  char v24; // r13
  PSID_AND_ATTRIBUTES v25; // rbx
  char v26; // di
  ULONG v27; // r14d
  __int64 result; // rax
  unsigned __int8 *Sid; // rsi
  ULONG v30; // r12d
  ULONG v31; // ebx
  _SID_AND_ATTRIBUTES *v32; // rdi
  __int64 v33; // rax
  PSID v34; // rbx
  ULONG Attributes; // eax
  int v36; // r9d
  PSID v37; // r12
  ULONG *p_Attributes; // rbx
  int v39; // edi
  ULONG v40; // esi
  _BYTE *v41; // r13
  PSID_IDENTIFIER_AUTHORITY v42; // rax
  __int64 v43; // r8
  int v44; // r9d
  int v45; // edx
  __int64 v46; // rdi
  __int64 v47; // r12
  __int64 v48; // rsi
  unsigned int v49; // r9d
  int *v50; // rdx
  unsigned __int64 v51; // r8
  int v52; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v54; // rbx
  _QWORD *v55; // rax
  ULONG v56; // r13d
  ULONG v57; // eax
  int v58; // r9d
  ULONG v59; // ecx
  ULONG v60; // eax
  int v61; // r13d
  struct _ERESOURCE *v62; // rcx
  _DWORD *v63; // rbx
  char *v64; // r13
  __int64 v65; // rax
  ULONG v66; // edx
  _QWORD *v67; // rax
  __int64 v68; // rax
  int v69; // edx
  __int64 v70; // rcx
  int v71; // edi
  ULONG v72; // edx
  SIZE_T v73; // rdx
  char *v74; // rax
  char *v75; // rdi
  unsigned __int8 *v76; // rsi
  ULONG v77; // ebx
  char *v78; // rdi
  unsigned __int16 *v79; // rax
  NTSTATUS inserted; // ebx
  unsigned __int8 v81; // dl
  PVOID v82; // rdi
  char v83; // [rsp+50h] [rbp-B0h]
  bool v84; // [rsp+51h] [rbp-AFh]
  char v85; // [rsp+52h] [rbp-AEh]
  char v86; // [rsp+53h] [rbp-ADh] BYREF
  char v87; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v89; // [rsp+5Ch] [rbp-A4h]
  int v90; // [rsp+60h] [rbp-A0h]
  int v91; // [rsp+64h] [rbp-9Ch]
  PERESOURCE Resource; // [rsp+68h] [rbp-98h]
  int v93; // [rsp+70h] [rbp-90h]
  unsigned int v94; // [rsp+74h] [rbp-8Ch]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  ULONG NumberOfBytes; // [rsp+80h] [rbp-80h]
  ULONG NumberOfBytes_4; // [rsp+84h] [rbp-7Ch]
  PSID_AND_ATTRIBUTES Src; // [rsp+88h] [rbp-78h]
  ULONG v99; // [rsp+90h] [rbp-70h]
  int v100; // [rsp+94h] [rbp-6Ch]
  __int64 v101; // [rsp+98h] [rbp-68h]
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  unsigned int v103; // [rsp+A8h] [rbp-58h]
  PHANDLE Handle; // [rsp+B0h] [rbp-50h]
  PSID SidArea; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v106; // [rsp+C0h] [rbp-40h]
  void *v107; // [rsp+C8h] [rbp-38h]
  _DWORD *v108; // [rsp+D0h] [rbp-30h]
  __int64 v109; // [rsp+D8h] [rbp-28h]
  __int64 v110; // [rsp+E0h] [rbp-20h]
  __int64 v111; // [rsp+E8h] [rbp-18h]
  __int64 v112; // [rsp+F0h] [rbp-10h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+100h] [rbp+0h] BYREF
  char v114[224]; // [rsp+1A0h] [rbp+A0h] BYREF

  v24 = 0;
  v25 = a9;
  v26 = 0;
  v27 = Count;
  v106 = a7;
  v101 = a14;
  Object = a15;
  Sid1 = a16;
  v107 = a17;
  v110 = a19;
  v109 = a20;
  v111 = a22;
  v103 = a3;
  Handle = a1;
  v90 = 0;
  v85 = 0;
  v87 = 0;
  v86 = 0;
  v112 = a4;
  v89 = a2;
  Src = a9;
  v91 = 0;
  v93 = -1;
  v83 = 0;
  v84 = 0;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v86);
  if ( (int)result >= 0 )
  {
    Sid = (unsigned __int8 *)a9->Sid;
    v30 = 0;
    if ( Count )
    {
      do
      {
        v31 = v30;
        while ( v31 < v27 )
        {
          v32 = &a11[v31];
          if ( *(_WORD *)Sid == *(_WORD *)v32->Sid
            && !memcmp(Sid, v32->Sid, 4 * (unsigned int)Sid[1] + 8)
            && (v32->Attributes & 0x20) == 0 )
          {
            *v32 = a11[--v27];
          }
          else
          {
            ++v31;
          }
        }
        v33 = v30++;
        Sid = (unsigned __int8 *)a11[v33].Sid;
      }
      while ( v30 < v27 );
      v25 = Src;
      v26 = 0;
    }
    v34 = v25->Sid;
    if ( RtlEqualSid(Sid1, v34) )
    {
      v26 = 1;
      v84 = 1;
    }
    if ( !Object || RtlEqualSid(Object, v34) )
    {
      v24 = 1;
      v83 = 1;
      v91 = 0;
    }
    Attributes = Src->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v36 = 2048;
      v90 = 2048;
    }
    else
    {
      v36 = v90;
    }
    if ( v27 )
    {
      v37 = SeUntrustedMandatorySid;
      p_Attributes = &a11->Attributes;
      v39 = 1;
      while ( 1 )
      {
        if ( (*p_Attributes & 1) != 0 )
          *p_Attributes |= 6u;
        v40 = *p_Attributes;
        if ( (*p_Attributes & 0x10) != 0 )
        {
          if ( (v40 & 6) != 0 )
            return 3221225485LL;
          v90 = v36 | 0x800;
        }
        v41 = (_BYTE *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v41);
        v42 = RtlIdentifierAuthoritySid(v37);
        v45 = *(_DWORD *)v42->Value - *(_DWORD *)v43;
        if ( *(_DWORD *)v42->Value == *(_DWORD *)v43 )
          v45 = *(unsigned __int16 *)&v42->Value[4] - *(unsigned __int16 *)(v43 + 4);
        if ( !v45 )
        {
          v81 = v41[1];
          if ( v81 && *(_DWORD *)&v41[4 * v81 + 4] > 0x4000u )
            return 3221226566LL;
          if ( (v40 & 0x40) != 0 )
          {
            if ( v93 != -1 )
              return 3221225485LL;
            v93 = v39;
            if ( v81 && *(_DWORD *)&v41[4 * v81 + 4] >= 0x3000u )
            {
              v85 = 1;
              v90 = v44 | 0x2000;
            }
            else
            {
              v85 = 0;
              if ( v81 && *(_DWORD *)&v41[4 * v81 + 4] >= 0x2000u )
                v90 = v44 | 0x2000;
              else
                v87 = 1;
            }
          }
        }
        if ( !v84 )
          v84 = RtlEqualSid(Sid1, v41) != 0;
        if ( v83 || !RtlEqualSid(Object, v41) )
        {
          v24 = v83;
        }
        else
        {
          if ( (v40 & 8) == 0 )
            return 3221225562LL;
          v24 = 1;
          v91 = v39;
          v83 = 1;
        }
        ++v39;
        p_Attributes += 4;
        if ( v39 - 1 >= v27 )
        {
          v26 = v84;
          break;
        }
        v36 = v90;
      }
    }
    if ( !v26 )
      return 3221225563LL;
    if ( !v24 )
      return 3221225562LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0;
    if ( a13 )
    {
      v50 = (int *)(v101 + 8);
      while ( (*v50 & 0x7FFFFFF8) == 0 )
      {
        v51 = (unsigned int)*(v50 - 2);
        v52 = *v50 & 3;
        *v50 = v52;
        if ( (unsigned int)v51 > 0x23 )
          return 3221225568LL;
        if ( _bittest64(&v46, v51) )
          return 3221225894LL;
        v46 |= 1LL << v51;
        if ( (v52 & 2) != 0 )
          _bittestandset64(&v47, (unsigned int)v51);
        if ( (v52 & 1) != 0 )
          _bittestandset64(&v48, (unsigned int)v51);
        ++v49;
        v50 += 3;
        if ( v49 >= a13 )
          goto LABEL_43;
      }
      return 3221225485LL;
    }
LABEL_43:
    if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
      return 3221225485LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
    v108 = PoolWithTag;
    v54 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      v55 = PoolWithTag + 2;
      v55[1] = v55;
      *v55 = v55;
      v54[6] = 0;
      *((_QWORD *)v54 + 5) = v54 + 8;
      *((_QWORD *)v54 + 4) = v54 + 8;
      v101 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
      if ( Resource )
      {
        v100 = 16 * v27;
        if ( SepTokenSidSharingEnabled )
        {
          v56 = (16 * v27 + 23) & 0xFFFFFFF8;
          v94 = a12;
        }
        else
        {
          v94 = (a12 + 7) & 0xFFFFFFF8;
          v56 = ((16 * v27 + 7) & 0xFFFFFFF8)
              + ((RtlLengthRequiredSid(*((unsigned __int8 *)Src->Sid + 1)) + 3) & 0xFFFFFFFC)
              + v94
              + 16;
        }
        SidAreaSize = v56;
        NumberOfBytes_4 = v56;
        v57 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
        NumberOfBytes = v57;
        if ( v107 )
        {
          v57 += (*((unsigned __int16 *)v107 + 1) + 3) & 0xFFFFFFFC;
          NumberOfBytes = v57;
        }
        v59 = v56 + 1144;
        if ( v57 >= 0x1000 )
          v60 = v59 + v57;
        else
          v60 = v56 + 5240;
        LOBYTE(v58) = 1;
        v99 = v60;
        v61 = ObCreateObject(v89, (_DWORD)SeTokenObjectType, v112, v58, 0, v59, v60, 0, (__int64)&Object);
        if ( v61 < 0 )
        {
          ExFreePoolWithTag(v54, 0);
          ExFreePoolWithTag(Resource, 0);
          return (unsigned int)v61;
        }
        v62 = Resource;
        v63 = Object;
        *((_QWORD *)Object + 6) = Resource;
        ExInitializeResourceLite(v62);
        v64 = (char *)Object;
        v65 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        v63[4] = v65;
        v66 = v99;
        v63[5] = HIDWORD(v65);
        *((_QWORD *)v64 + 4) = 0LL;
        v67 = (_QWORD *)v106;
        *((_QWORD *)v64 + 28) = 0LL;
        Resource = 0LL;
        *((_QWORD *)v64 + 3) = *v67;
        v68 = v101;
        v64[204] = 0;
        *((_QWORD *)v64 + 7) = v68;
        *((_QWORD *)v64 + 5) = *a8;
        *((_DWORD *)v64 + 48) = a5;
        *((_DWORD *)v64 + 49) = a6;
        LODWORD(v68) = v90;
        *(_OWORD *)v64 = *a18;
        *((_DWORD *)v64 + 50) = v68;
        LODWORD(v68) = NumberOfBytes_4;
        *((_DWORD *)v64 + 30) = 0;
        *((_QWORD *)v64 + 142) = 0LL;
        v69 = v66 - (v68 + 1144);
        LODWORD(v68) = v91;
        *((_DWORD *)v64 + 34) = v69;
        *((_DWORD *)v64 + 35) = 0;
        *((_DWORD *)v64 + 36) = v68;
        LODWORD(v68) = SidAreaSize;
        *((_QWORD *)v64 + 23) = 0LL;
        *((_QWORD *)v64 + 140) = 0LL;
        *((_QWORD *)v64 + 141) = 0LL;
        *((_DWORD *)v64 + 33) = v68;
        *((_DWORD *)v64 + 52) = v93;
        *((_DWORD *)v64 + 53) = 0;
        *((_QWORD *)v64 + 8) = v46;
        *((_QWORD *)v64 + 9) = v47;
        *((_QWORD *)v64 + 10) = v48;
        *((_DWORD *)v64 + 200) = 0;
        *((_QWORD *)v64 + 99) = 0LL;
        *((_QWORD *)v64 + 98) = 0LL;
        *((_QWORD *)v64 + 135) = 0LL;
        *((_QWORD *)v64 + 136) = 0LL;
        memset(v64 + 808, 0, 0x110uLL);
        *((_QWORD *)v64 + 138) = 0LL;
        *((_QWORD *)v64 + 139) = 0LL;
        if ( a23 )
          *((_DWORD *)v64 + 53) = *a23;
        if ( !v85 )
        {
          *((_QWORD *)v64 + 9) &= 0xFFFFFFFEDFE9F97BuLL;
          *((_QWORD *)v64 + 10) &= 0xFFFFFFFEDFE9F97BuLL;
        }
        if ( v87 == 1 )
        {
          *((_QWORD *)v64 + 9) &= 0x202800000uLL;
          *((_QWORD *)v64 + 10) &= 0x202800000uLL;
        }
        v70 = v106;
        *((_QWORD *)v64 + 11) = 0LL;
        *((_QWORD *)v64 + 12) = 0LL;
        *((_QWORD *)v64 + 13) = 0LL;
        *((_DWORD *)v64 + 28) = 0;
        *((_WORD *)v64 + 58) = 0;
        v64[118] = 0;
        *((_QWORD *)v64 + 97) = v108;
        *((_QWORD *)v64 + 137) = 0LL;
        *((_QWORD *)v64 + 22) = 0LL;
        v71 = SepReferenceLogonSession(v70, v64 + 216);
        if ( v71 < 0 )
        {
          *((_DWORD *)v64 + 50) |= 0x20u;
          *((_QWORD *)v64 + 27) = 0LL;
          ObfDereferenceObjectWithTag(v64, 0x746C6644u);
          return (unsigned int)v71;
        }
        if ( SepTokenSidSharingEnabled )
        {
          inserted = SepSetTokenUserAndGroups((_DWORD)v64, (_DWORD)Src, v27, (_DWORD)a11, v94);
          if ( inserted < 0 )
            goto LABEL_71;
        }
        else
        {
          v72 = SidAreaSize;
          *((_QWORD *)v64 + 19) = v64 + 1144;
          *((_DWORD *)v64 + 31) = v27 + 1;
          SidArea = &v64[16 * v27 + 1160];
          SidAreaSize = -16 - v100 + v72;
          RtlCopySidAndAttributesArray(
            1u,
            Src,
            SidAreaSize,
            (PSID_AND_ATTRIBUTES)(v64 + 1144),
            SidArea,
            &SidArea,
            &SidAreaSize);
          RtlCopySidAndAttributesArray(
            v27,
            a11,
            SidAreaSize,
            (PSID_AND_ATTRIBUTES)(v64 + 1160),
            SidArea,
            &SidArea,
            &SidAreaSize);
        }
        RtlSidHashInitialize(
          *((PSID_AND_ATTRIBUTES *)v64 + 19),
          *((_DWORD *)v64 + 31),
          (PSID_AND_ATTRIBUTES_HASH)(v64 + 232));
        v73 = NumberOfBytes;
        *((_QWORD *)v64 + 20) = 0LL;
        *((_DWORD *)v64 + 32) = 0;
        v74 = (char *)ExAllocatePoolWithTag(PagedPool, v73, 0x64546553u);
        *((_QWORD *)v64 + 22) = v74;
        v75 = v74;
        if ( !v74 )
        {
          ObfDereferenceObjectWithTag(v64, 0x746C6644u);
          return 3221225495LL;
        }
        v76 = (unsigned __int8 *)Sid1;
        *((_QWORD *)v64 + 21) = v74;
        v77 = RtlLengthRequiredSid(v76[1]);
        RtlCopySid(v77, v75, v76);
        v78 = &v75[(v77 + 3) & 0xFFFFFFFC];
        v79 = (unsigned __int16 *)v107;
        if ( v107 )
        {
          *((_QWORD *)v64 + 23) = v78;
          memmove(v78, v79, v79[1]);
        }
        inserted = SepSetTokenClaims((_DWORD)v64, v110, v109, a21, v111);
        if ( inserted >= 0 )
        {
          if ( a24 )
          {
            inserted = SepSetTokenTrust(v64, SeProcTrustWinTcbSid);
            if ( inserted >= 0 )
            {
              v82 = Object;
              if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
              if ( inserted < 0 )
              {
                *Handle = 0LL;
              }
              else
              {
                if ( !v86 )
                  SepAppendAdminAceToTokenAcl(v82);
                *Handle = v82;
              }
              return (unsigned int)inserted;
            }
          }
          else
          {
            inserted = SeCreateAccessState(&PassedAccessState, v114, v103, (char *)SeTokenObjectType + 76);
            if ( inserted >= 0 )
            {
              inserted = ObInsertObject(v64, &PassedAccessState, 0, 1u, 0LL, Handle);
              SeDeleteAccessState(&PassedAccessState);
              if ( inserted < 0 )
                return (unsigned int)inserted;
              if ( !v86 )
                SepAppendAdminAceToTokenAcl(v64);
            }
          }
        }
LABEL_71:
        ObfDereferenceObjectWithTag(v64, 0x746C6644u);
        return (unsigned int)inserted;
      }
      ExFreePoolWithTag(v54, 0);
    }
    return 3221225626LL;
  }
  return result;
}
