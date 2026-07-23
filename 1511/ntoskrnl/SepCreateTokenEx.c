/*
 * XREFs of SepCreateTokenEx @ 0x140004180
 * Callers:
 *     NtCreateTokenEx @ 0x1403C35AC (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x1405280B8 (SepCreateToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x14009E1C0 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14009E848 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlIdentifierAuthoritySid @ 0x1403C1B28 (RtlIdentifierAuthoritySid.c)
 *     RtlCopySidAndAttributesArray @ 0x1403C1E10 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenClaims @ 0x1403C2354 (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x1403C245C (SepReferenceLogonSession.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     SepSetTokenTrust @ 0x1404783E4 (SepSetTokenTrust.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1404C5FA8 (SepAppendAdminAceToTokenAcl.c)
 *     SepSetTokenUserAndGroups @ 0x140653D98 (SepSetTokenUserAndGroups.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        __int64 a14,
        PSID a15,
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
  ULONG v24; // ebx
  PSID_AND_ATTRIBUTES v25; // rsi
  char v26; // r13
  PVOID v27; // rdi
  ULONG v28; // r15d
  __int64 result; // rax
  PSID Sid; // r14
  ULONG v31; // esi
  __int64 v32; // rax
  PSID v33; // rbx
  unsigned __int8 *v34; // r14
  BOOLEAN v35; // al
  int v36; // r10d
  bool v37; // r12
  ULONG Attributes; // eax
  int v39; // r9d
  int v40; // esi
  ULONG *p_Attributes; // rdi
  ULONG v42; // r14d
  _BYTE *v43; // rbx
  PSID v44; // rdx
  PSID_IDENTIFIER_AUTHORITY v45; // rax
  __int64 v46; // r8
  int v47; // r9d
  unsigned int v48; // r11d
  int v49; // edx
  __int64 v50; // r10
  __int64 v51; // rdi
  __int64 v52; // r11
  unsigned int v53; // r9d
  int *v54; // rdx
  unsigned __int64 v55; // r8
  int v56; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v58; // rsi
  _QWORD *v59; // rax
  int v60; // r13d
  unsigned __int8 *v61; // rax
  ULONG v62; // ebx
  ULONG v63; // ecx
  ULONG v64; // r14d
  ULONG v65; // r12d
  ULONG v66; // eax
  PVOID *p_Object; // rcx
  NTSTATUS inserted; // ebx
  struct _ERESOURCE *v69; // rcx
  _QWORD *v70; // rbx
  char *v71; // rdi
  _QWORD *v72; // rax
  __int64 v73; // rax
  ULONG v74; // r12d
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // esi
  _SID_AND_ATTRIBUTES *v78; // rdx
  char *v79; // rax
  char *v80; // rsi
  unsigned __int8 *v81; // r14
  ULONG v82; // ebx
  char *v83; // rsi
  unsigned __int16 *v84; // rax
  int v85; // eax
  unsigned __int8 v86; // dl
  BOOLEAN v87; // al
  BOOLEAN v88; // al
  PVOID v89; // rdi
  char v90; // [rsp+50h] [rbp-B0h] BYREF
  char v91; // [rsp+51h] [rbp-AFh]
  char v92; // [rsp+52h] [rbp-AEh]
  char v93; // [rsp+53h] [rbp-ADh]
  int v94; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  int v96; // [rsp+5Ch] [rbp-A4h]
  PERESOURCE Resource; // [rsp+60h] [rbp-A0h]
  int v98; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v100; // [rsp+78h] [rbp-88h]
  ULONG v101; // [rsp+7Ch] [rbp-84h]
  __int64 v102; // [rsp+80h] [rbp-80h]
  PSID_AND_ATTRIBUTES Src; // [rsp+88h] [rbp-78h]
  PSID Sid1; // [rsp+90h] [rbp-70h]
  __int64 v105; // [rsp+98h] [rbp-68h]
  PSID_AND_ATTRIBUTES v106; // [rsp+A0h] [rbp-60h]
  PSID SidArea; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v108; // [rsp+B0h] [rbp-50h]
  PHANDLE Handle; // [rsp+B8h] [rbp-48h]
  void *v110; // [rsp+C0h] [rbp-40h]
  __int64 v111; // [rsp+C8h] [rbp-38h]
  __int64 v112; // [rsp+D0h] [rbp-30h]
  __int64 v113; // [rsp+D8h] [rbp-28h]
  __int64 v114; // [rsp+E0h] [rbp-20h]
  __int64 v115; // [rsp+E8h] [rbp-18h]
  __int64 v116; // [rsp+F0h] [rbp-10h]
  __int64 v117; // [rsp+F8h] [rbp-8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+100h] [rbp+0h] BYREF
  char v119[224]; // [rsp+1A0h] [rbp+A0h] BYREF

  v24 = 0;
  v25 = a9;
  v26 = 0;
  v27 = a15;
  v28 = Count;
  v98 = -1;
  v111 = a7;
  v105 = a14;
  Sid1 = a16;
  v110 = a17;
  v115 = a19;
  v117 = a20;
  v108 = a3;
  Handle = a1;
  v114 = a22;
  v116 = a4;
  v93 = a2;
  Src = a9;
  v106 = a11;
  Object = a15;
  v96 = 0;
  v94 = 0;
  v91 = 0;
  v92 = 0;
  v90 = 0;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v90);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    if ( Count )
    {
      do
      {
        v31 = v24;
        while ( v31 < v28 )
        {
          if ( !RtlEqualSid(Sid, a11[v31].Sid) || (a11[v31].Attributes & 0x20) != 0 )
            ++v31;
          else
            a11[v31] = a11[--v28];
        }
        v32 = v24++;
        Sid = a11[v32].Sid;
      }
      while ( v24 < v28 );
      v27 = Object;
      v25 = Src;
    }
    v33 = v25->Sid;
    v34 = (unsigned __int8 *)Sid1;
    v35 = RtlEqualSid(Sid1, v25->Sid);
    LOBYTE(v36) = 1;
    v37 = v35 != 0;
    if ( !v27 || (v88 = RtlEqualSid(v27, v33), LOBYTE(v36) = 1, v88) )
    {
      v26 = 1;
      v96 = 0;
    }
    Attributes = v25->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v39 = 2048;
      v94 = 2048;
    }
    else
    {
      v39 = v94;
    }
    if ( v28 )
    {
      v40 = 1;
      p_Attributes = &v106->Attributes;
      v102 = SeUntrustedMandatorySid;
      while ( 1 )
      {
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v36) != 0 )
          *p_Attributes |= 6u;
        v42 = *p_Attributes;
        if ( (*p_Attributes & 0x10) != 0 )
        {
          if ( (v42 & 6) != 0 )
            return 3221225485LL;
          v94 = v39 | 0x800;
        }
        v43 = (_BYTE *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v43);
        v45 = RtlIdentifierAuthoritySid(v44);
        v49 = *(_DWORD *)v45->Value - *(_DWORD *)v46;
        if ( *(_DWORD *)v45->Value == *(_DWORD *)v46 )
          v49 = *(unsigned __int16 *)&v45->Value[4] - *(unsigned __int16 *)(v46 + 4);
        if ( !v49 )
        {
          v86 = v43[1];
          if ( v86 && *(_DWORD *)&v43[4 * (v86 - v36) + 8] > 0x4000u )
            return 3221226566LL;
          if ( (v42 & 0x40) != 0 )
          {
            if ( v98 != -1 )
              return 3221225485LL;
            v98 = v40;
            if ( v86 && *(_DWORD *)&v43[4 * (v86 - v36) + 8] >= 0x3000u )
            {
              v91 = v36;
LABEL_79:
              v94 = v48 | v47;
              goto LABEL_21;
            }
            v91 = 0;
            if ( v86 && *(_DWORD *)&v43[4 * (v86 - v36) + 8] >= v48 )
              goto LABEL_79;
            v92 = v36;
          }
        }
LABEL_21:
        if ( !v37 )
        {
          v87 = RtlEqualSid(Sid1, v43);
          v36 = 1;
          v37 = v87 != 0;
        }
        if ( !v26 )
        {
          if ( RtlEqualSid(Object, v43) )
          {
            if ( (v42 & 8) == 0 )
              return 3221225562LL;
            v36 = 1;
            v96 = v40;
            v26 = 1;
          }
          else
          {
            v36 = 1;
          }
        }
        v40 += v36;
        p_Attributes += 4;
        if ( v40 - 1 >= v28 )
        {
          v34 = (unsigned __int8 *)Sid1;
          break;
        }
        v39 = v94;
      }
    }
    if ( !v37 )
      return 3221225563LL;
    if ( !v26 )
      return 3221225562LL;
    v50 = 0LL;
    v112 = 0LL;
    v51 = 0LL;
    v113 = 0LL;
    v52 = 0LL;
    v102 = 0LL;
    v53 = 0;
    if ( a13 )
    {
      v54 = (int *)(v105 + 8);
      while ( (*v54 & 0x7FFFFFF8) == 0 )
      {
        v55 = (unsigned int)*(v54 - 2);
        v56 = *v54 & 3;
        *v54 = v56;
        if ( (unsigned int)v55 > 0x23 )
          return 3221225568LL;
        if ( _bittest64(&v50, v55) )
          return 3221225894LL;
        v50 |= 1LL << v55;
        v112 = v50;
        if ( (v56 & 2) != 0 )
        {
          _bittestandset64(&v51, (unsigned int)v55);
          v113 = v51;
        }
        if ( (v56 & 1) != 0 )
        {
          _bittestandset64(&v52, (unsigned int)v55);
          v102 = v52;
        }
        ++v53;
        v54 += 3;
        if ( v53 >= a13 )
          goto LABEL_41;
      }
      return 3221225485LL;
    }
LABEL_41:
    if ( !a23 || (*a23 & 0xFFFFFFFC) == 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
      v58 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        v59 = PoolWithTag + 2;
        v59[1] = v59;
        *v59 = v59;
        v58[6] = 0;
        *((_QWORD *)v58 + 5) = v58 + 8;
        *((_QWORD *)v58 + 4) = v58 + 8;
        v105 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
        if ( Resource )
        {
          v60 = 16 * v28;
          if ( SepTokenSidSharingEnabled )
          {
            v62 = (v60 + 23) & 0xFFFFFFF8;
            v100 = a12;
          }
          else
          {
            v61 = (unsigned __int8 *)Src->Sid;
            v100 = (a12 + 7) & 0xFFFFFFF8;
            v62 = ((v60 + 7) & 0xFFFFFFF8) + v100 + 16 + ((RtlLengthRequiredSid(v61[1]) + 3) & 0xFFFFFFFC);
          }
          v63 = v34[1];
          SidAreaSize = v62;
          v64 = (RtlLengthRequiredSid(v63) + 3) & 0xFFFFFFFC;
          if ( v110 )
            v64 += (*((unsigned __int16 *)v110 + 1) + 3) & 0xFFFFFFFC;
          v65 = v62 + 1152;
          v66 = v62 + 5248;
          if ( v64 >= 0x1000 )
            v66 = v65 + v64;
          p_Object = &Object;
          LOBYTE(p_Object) = v93;
          v101 = v66;
          inserted = ObCreateObject(
                       (_DWORD)p_Object,
                       (_DWORD)SeTokenObjectType,
                       v116,
                       1,
                       0,
                       v62 + 1152,
                       v66,
                       0,
                       (__int64)&Object);
          if ( inserted < 0 )
          {
            ExFreePoolWithTag(v58, 0);
            ExFreePoolWithTag(Resource, 0);
            return (unsigned int)inserted;
          }
          v69 = Resource;
          v70 = Object;
          *((_QWORD *)Object + 6) = Resource;
          ExInitializeResourceLite(v69);
          v71 = (char *)Object;
          v70[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_QWORD *)v71 + 4) = 0LL;
          v72 = (_QWORD *)v111;
          *((_QWORD *)v71 + 28) = 0LL;
          Resource = 0LL;
          *((_QWORD *)v71 + 3) = *v72;
          v73 = v105;
          v71[204] = 0;
          *((_QWORD *)v71 + 7) = v73;
          *((_QWORD *)v71 + 5) = *a8;
          *((_DWORD *)v71 + 48) = a5;
          *((_DWORD *)v71 + 49) = a6;
          LODWORD(v73) = v94;
          *(_OWORD *)v71 = *a18;
          *((_DWORD *)v71 + 50) = v73;
          LODWORD(v73) = v101;
          *((_DWORD *)v71 + 30) = 0;
          LODWORD(v73) = v73 - v65;
          v74 = SidAreaSize;
          *((_QWORD *)v71 + 143) = 0LL;
          *((_DWORD *)v71 + 34) = v73;
          LODWORD(v73) = v96;
          *((_DWORD *)v71 + 35) = 0;
          *((_DWORD *)v71 + 36) = v73;
          LODWORD(v73) = v98;
          *((_QWORD *)v71 + 23) = 0LL;
          *((_QWORD *)v71 + 140) = 0LL;
          *((_QWORD *)v71 + 141) = 0LL;
          *((_DWORD *)v71 + 33) = v74;
          *((_DWORD *)v71 + 52) = v73;
          v75 = v112;
          *((_DWORD *)v71 + 53) = 0;
          *((_QWORD *)v71 + 8) = v75;
          *((_QWORD *)v71 + 9) = v113;
          *((_QWORD *)v71 + 10) = v102;
          *((_DWORD *)v71 + 200) = 0;
          *((_QWORD *)v71 + 99) = 0LL;
          *((_QWORD *)v71 + 98) = 0LL;
          *((_QWORD *)v71 + 135) = 0LL;
          *((_QWORD *)v71 + 136) = 0LL;
          memset(v71 + 808, 0, 0x110uLL);
          *((_QWORD *)v71 + 138) = 0LL;
          *((_QWORD *)v71 + 139) = 0LL;
          *((_QWORD *)v71 + 142) = 0LL;
          if ( a23 )
            *((_DWORD *)v71 + 53) = *a23;
          if ( !v91 )
          {
            *((_QWORD *)v71 + 9) &= 0xFFFFFFFEDFE9F97BuLL;
            *((_QWORD *)v71 + 10) &= 0xFFFFFFFEDFE9F97BuLL;
          }
          if ( v92 == 1 )
          {
            *((_QWORD *)v71 + 9) &= 0x202800000uLL;
            *((_QWORD *)v71 + 10) &= 0x202800000uLL;
          }
          v76 = v111;
          *((_QWORD *)v71 + 11) = 0LL;
          *((_QWORD *)v71 + 12) = 0LL;
          *((_QWORD *)v71 + 13) = 0LL;
          *((_DWORD *)v71 + 28) = 0;
          *((_WORD *)v71 + 58) = 0;
          v71[118] = 0;
          *((_QWORD *)v71 + 97) = v58;
          *((_QWORD *)v71 + 137) = 0LL;
          *((_QWORD *)v71 + 22) = 0LL;
          v77 = SepReferenceLogonSession(v76, v71 + 216);
          if ( v77 < 0 )
          {
            *((_DWORD *)v71 + 50) |= 0x20u;
            *((_QWORD *)v71 + 27) = 0LL;
            ObfDereferenceObjectWithTag(v71, 0x746C6644u);
            return (unsigned int)v77;
          }
          v78 = Src;
          if ( SepTokenSidSharingEnabled )
          {
            inserted = SepSetTokenUserAndGroups((_DWORD)v71, (_DWORD)Src, v28, (_DWORD)v106, v100);
            if ( inserted < 0 )
              goto LABEL_69;
          }
          else
          {
            *((_QWORD *)v71 + 19) = v71 + 1152;
            *((_DWORD *)v71 + 31) = v28 + 1;
            SidArea = &v71[16 * v28 + 1168];
            SidAreaSize = -16 - v60 + v74;
            RtlCopySidAndAttributesArray(
              1u,
              v78,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)v71 + 72,
              SidArea,
              &SidArea,
              &SidAreaSize);
            RtlCopySidAndAttributesArray(
              v28,
              v106,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)v71 + 73,
              SidArea,
              &SidArea,
              &SidAreaSize);
          }
          RtlSidHashInitialize(
            *((PSID_AND_ATTRIBUTES *)v71 + 19),
            *((_DWORD *)v71 + 31),
            (PSID_AND_ATTRIBUTES_HASH)(v71 + 232));
          *((_QWORD *)v71 + 20) = 0LL;
          *((_DWORD *)v71 + 32) = 0;
          v79 = (char *)ExAllocatePoolWithTag(PagedPool, v64, 0x64546553u);
          *((_QWORD *)v71 + 22) = v79;
          v80 = v79;
          if ( v79 )
          {
            v81 = (unsigned __int8 *)Sid1;
            *((_QWORD *)v71 + 21) = v79;
            v82 = RtlLengthRequiredSid(v81[1]);
            RtlCopySid(v82, v80, v81);
            v83 = &v80[(v82 + 3) & 0xFFFFFFFC];
            v84 = (unsigned __int16 *)v110;
            if ( v110 )
            {
              *((_QWORD *)v71 + 23) = v83;
              memmove(v83, v84, v84[1]);
            }
            v85 = SepSetTokenClaims((_DWORD)v71, v115, v117, a21, v114);
            if ( v85 < 0 )
            {
              inserted = v85;
            }
            else if ( a24 )
            {
              inserted = SepSetTokenTrust(v71, SeProcTrustWinTcbSid);
              if ( inserted >= 0 )
              {
                v89 = Object;
                if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                  inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
                if ( inserted < 0 )
                {
                  *Handle = 0LL;
                }
                else
                {
                  if ( !v90 )
                    SepAppendAdminAceToTokenAcl(v89);
                  *Handle = v89;
                }
                return (unsigned int)inserted;
              }
            }
            else
            {
              inserted = SeCreateAccessState(&PassedAccessState, v119, v108, (char *)SeTokenObjectType + 76);
              if ( inserted >= 0 )
              {
                inserted = ObInsertObject(v71, &PassedAccessState, 0, 1u, 0LL, Handle);
                SeDeleteAccessState(&PassedAccessState);
                if ( inserted < 0 )
                  return (unsigned int)inserted;
                if ( !v90 )
                  SepAppendAdminAceToTokenAcl(v71);
              }
            }
          }
          else
          {
            inserted = -1073741801;
          }
LABEL_69:
          ObfDereferenceObjectWithTag(v71, 0x746C6644u);
          return (unsigned int)inserted;
        }
        ExFreePoolWithTag(v58, 0);
      }
      return 3221225626LL;
    }
    return 3221225485LL;
  }
  return result;
}
