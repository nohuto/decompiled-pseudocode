/*
 * XREFs of SepCreateTokenEx @ 0x14007FC48
 * Callers:
 *     NtCreateTokenEx @ 0x140476AAC (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x140553F28 (SepCreateToken.c)
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14000E714 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlSidHashInitialize @ 0x14000E790 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     RtlCopySidAndAttributesArray @ 0x14040DD10 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 *     SepSetTokenTrust @ 0x140412DBC (SepSetTokenTrust.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     RtlIdentifierAuthoritySid @ 0x1404773A0 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     SepSetTokenClaims @ 0x14047846C (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x140478574 (SepReferenceLogonSession.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1404D33E4 (SepAppendAdminAceToTokenAcl.c)
 *     SepSetTokenUserAndGroups @ 0x140693200 (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x140693730 (SepAddTokenLogonSession.c)
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
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
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
  char v26; // r12
  PSID v27; // rdi
  ULONG v28; // r13d
  __int64 result; // rax
  PSID Sid; // r14
  ULONG v31; // esi
  __int64 v32; // rax
  PSID v33; // rbx
  BOOLEAN v34; // al
  int v35; // r10d
  bool v36; // r15
  ULONG Attributes; // eax
  int v38; // r9d
  int v39; // esi
  ULONG *p_Attributes; // rdi
  ULONG v41; // r14d
  _BYTE *v42; // rbx
  PSID v43; // r8
  PSID_IDENTIFIER_AUTHORITY v44; // rax
  __int64 v45; // rdx
  int v46; // r9d
  unsigned int v47; // r11d
  int v48; // ecx
  __int64 v49; // rbx
  __int64 v50; // r10
  __int64 v51; // rdi
  unsigned int v52; // r9d
  int *v53; // rdx
  unsigned __int64 v54; // r8
  int v55; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v57; // rsi
  _QWORD *v58; // rax
  PVOID v59; // rbx
  int v60; // r12d
  unsigned __int8 *v61; // rax
  ULONG v62; // ebx
  ULONG v63; // r15d
  ULONG v64; // r14d
  ULONG v65; // eax
  PVOID *p_Object; // rcx
  NTSTATUS inserted; // ebx
  struct _ERESOURCE *v68; // rcx
  _QWORD *v69; // rbx
  char *v70; // rdi
  _QWORD *v71; // rax
  char **v72; // rax
  __int64 v73; // rax
  PVOID v74; // rax
  char *v75; // r14
  __int64 v76; // rcx
  int v77; // esi
  ULONG v78; // edx
  char *v79; // rsi
  unsigned __int8 *v80; // r15
  ULONG v81; // ebx
  unsigned __int16 *v82; // rcx
  char *v83; // rsi
  void *v84; // rdx
  void *v85; // rcx
  unsigned __int8 v86; // dl
  BOOLEAN v87; // al
  BOOLEAN v88; // al
  PVOID v89; // rdi
  void *v90; // rcx
  __int64 v91; // rdx
  _KPROCESS *Process; // rcx
  ULONG v93; // eax
  int v94; // edx
  char v95; // [rsp+50h] [rbp-B0h]
  char v96; // [rsp+51h] [rbp-AFh] BYREF
  char v97; // [rsp+52h] [rbp-AEh]
  char v98; // [rsp+53h] [rbp-ADh]
  int v99; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  int v101; // [rsp+5Ch] [rbp-A4h]
  PERESOURCE Resource; // [rsp+60h] [rbp-A0h]
  int v103; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  PSID SidArea; // [rsp+78h] [rbp-88h] BYREF
  char **v106; // [rsp+80h] [rbp-80h]
  ULONG v107; // [rsp+88h] [rbp-78h]
  unsigned int v108; // [rsp+8Ch] [rbp-74h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID_AND_ATTRIBUTES Src; // [rsp+98h] [rbp-68h]
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  __int64 v112; // [rsp+A8h] [rbp-58h]
  unsigned int v113; // [rsp+B0h] [rbp-50h]
  PSID_AND_ATTRIBUTES v114; // [rsp+B8h] [rbp-48h]
  PHANDLE Handle; // [rsp+C0h] [rbp-40h]
  _QWORD *v116; // [rsp+C8h] [rbp-38h]
  __int64 v117; // [rsp+D0h] [rbp-30h]
  __int64 v118; // [rsp+D8h] [rbp-28h]
  __int64 v119; // [rsp+E0h] [rbp-20h]
  void *v120; // [rsp+E8h] [rbp-18h]
  __int64 v121; // [rsp+F0h] [rbp-10h]
  __int64 v122; // [rsp+F8h] [rbp-8h]
  __int64 v123; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  char v125[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v24 = 0;
  v25 = a9;
  v26 = 0;
  v27 = a15;
  v28 = Count;
  v103 = -1;
  v119 = a7;
  v106 = a14;
  Sid1 = a16;
  v120 = a17;
  v123 = a19;
  v122 = a20;
  v113 = a3;
  Handle = a1;
  v121 = a22;
  v116 = (_QWORD *)a4;
  v98 = a2;
  Src = a9;
  v114 = a11;
  SidArea = a15;
  v101 = 0;
  v99 = 0;
  v95 = 0;
  v97 = 0;
  v96 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v96);
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
      v27 = SidArea;
      v25 = Src;
    }
    v33 = v25->Sid;
    v34 = RtlEqualSid(Sid1, v25->Sid);
    LOBYTE(v35) = 1;
    v36 = v34 != 0;
    if ( !v27 || (v88 = RtlEqualSid(v27, v33), LOBYTE(v35) = 1, v88) )
    {
      v26 = 1;
      v101 = 0;
    }
    Attributes = v25->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v38 = 2048;
      v99 = 2048;
    }
    else
    {
      v38 = 0;
    }
    if ( v28 )
    {
      v39 = 1;
      p_Attributes = &v114->Attributes;
      v112 = SeUntrustedMandatorySid;
      while ( 1 )
      {
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v35) != 0 )
          *p_Attributes |= 6u;
        v41 = *p_Attributes;
        if ( (*p_Attributes & 0x10) != 0 )
        {
          if ( (v41 & 6) != 0 )
            return 3221225485LL;
          v99 = v38 | 0x800;
        }
        v42 = (_BYTE *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v42);
        v44 = RtlIdentifierAuthoritySid(v43);
        v48 = *(_DWORD *)v44->Value - *(_DWORD *)v45;
        if ( *(_DWORD *)v44->Value == *(_DWORD *)v45 )
          v48 = *(unsigned __int16 *)&v44->Value[4] - *(unsigned __int16 *)(v45 + 4);
        if ( !v48 )
        {
          v86 = v42[1];
          if ( v86 && *(_DWORD *)&v42[4 * (v86 - v35) + 8] > 0x4000u )
            return 3221226566LL;
          if ( (v41 & 0x40) != 0 )
          {
            if ( v103 != -1 )
              return 3221225485LL;
            v103 = v39;
            if ( v86 && *(_DWORD *)&v42[4 * (v86 - v35) + 8] >= 0x3000u )
            {
              v95 = v35;
LABEL_84:
              v99 = v47 | v46;
              goto LABEL_21;
            }
            v95 = 0;
            if ( v86 && *(_DWORD *)&v42[4 * (v86 - v35) + 8] >= v47 )
              goto LABEL_84;
            v97 = v35;
          }
        }
LABEL_21:
        if ( !v36 )
        {
          v87 = RtlEqualSid(Sid1, v42);
          v35 = 1;
          v36 = v87 != 0;
        }
        if ( !v26 )
        {
          if ( RtlEqualSid(SidArea, v42) )
          {
            if ( (v41 & 8) == 0 )
              return 3221225562LL;
            v35 = 1;
            v101 = v39;
            v26 = 1;
          }
          else
          {
            v35 = 1;
          }
        }
        v39 += v35;
        p_Attributes += 4;
        if ( v39 - 1 >= v28 )
          break;
        v38 = v99;
      }
    }
    if ( !v36 )
      return 3221225563LL;
    if ( !v26 )
      return 3221225562LL;
    v49 = 0LL;
    v112 = 0LL;
    v50 = 0LL;
    v117 = 0LL;
    v51 = 0LL;
    v118 = 0LL;
    v52 = 0;
    if ( a13 )
    {
      v53 = (int *)(v106 + 1);
      while ( (*v53 & 0x7FFFFFF8) == 0 )
      {
        v54 = (unsigned int)*(v53 - 2);
        v55 = *v53 & 3;
        *v53 = v55;
        if ( (unsigned int)v54 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v50, v54) )
          return 3221225894LL;
        v50 |= 1LL << v54;
        v117 = v50;
        if ( (v55 & 2) != 0 )
        {
          _bittestandset64(&v51, (unsigned int)v54);
          v118 = v51;
        }
        if ( (v55 & 1) != 0 )
        {
          _bittestandset64(&v49, (unsigned int)v54);
          v112 = v49;
        }
        ++v52;
        v53 += 3;
        if ( v52 >= a13 )
          goto LABEL_40;
      }
      return 3221225485LL;
    }
LABEL_40:
    if ( !a23 || (*a23 & 0xFFFFFFFC) == 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
      v57 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        v58 = PoolWithTag + 2;
        v58[1] = v58;
        *v58 = v58;
        v57[6] = 0;
        *((_QWORD *)v57 + 5) = v57 + 8;
        *((_QWORD *)v57 + 4) = v57 + 8;
        if ( SeTokenLeakTracking )
        {
          P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
          v59 = P;
          if ( !P )
          {
            v90 = v57;
LABEL_114:
            ExFreePoolWithTag(v90, 0);
            return 3221225626LL;
          }
        }
        else
        {
          v59 = P;
        }
        v106 = (char **)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
        if ( Resource )
        {
          v60 = 16 * v28;
          if ( SepTokenSidSharingEnabled )
          {
            v62 = (v60 + 23) & 0xFFFFFFF8;
            v108 = a12;
          }
          else
          {
            v61 = (unsigned __int8 *)Src->Sid;
            v108 = (a12 + 7) & 0xFFFFFFF8;
            v62 = ((v60 + 7) & 0xFFFFFFF8) + v108 + 16 + ((RtlLengthRequiredSid(v61[1]) + 3) & 0xFFFFFFFC);
          }
          SidAreaSize = v62;
          v63 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
          if ( v120 )
            v63 += (*((unsigned __int16 *)v120 + 1) + 3) & 0xFFFFFFFC;
          v64 = v62 + 1160;
          v65 = v62 + 5256;
          if ( v63 >= 0x1000 )
            v65 = v64 + v63;
          p_Object = &Object;
          LOBYTE(p_Object) = v98;
          v107 = v65;
          inserted = ObCreateObject(
                       (_DWORD)p_Object,
                       (_DWORD)SeTokenObjectType,
                       (_DWORD)v116,
                       1,
                       0,
                       v62 + 1160,
                       v65,
                       0,
                       (__int64)&Object);
          if ( inserted < 0 )
          {
            ExFreePoolWithTag(v57, 0);
            if ( SeTokenLeakTracking )
              ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(Resource, 0);
            return (unsigned int)inserted;
          }
          v68 = Resource;
          v69 = Object;
          *((_QWORD *)Object + 6) = Resource;
          ExInitializeResourceLite(v68);
          v70 = (char *)Object;
          v69[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_QWORD *)v70 + 4) = 0LL;
          v71 = (_QWORD *)v119;
          *((_QWORD *)v70 + 28) = 0LL;
          Resource = 0LL;
          *((_QWORD *)v70 + 3) = *v71;
          v72 = v106;
          v70[204] = 0;
          *((_QWORD *)v70 + 7) = v72;
          *((_QWORD *)v70 + 5) = *a8;
          *((_DWORD *)v70 + 48) = a5;
          *((_DWORD *)v70 + 49) = a6;
          LODWORD(v72) = v99;
          *(_OWORD *)v70 = *a18;
          *((_DWORD *)v70 + 50) = (_DWORD)v72;
          LODWORD(v72) = v107;
          *((_DWORD *)v70 + 30) = 0;
          *((_QWORD *)v70 + 144) = 0LL;
          *((_DWORD *)v70 + 34) = (_DWORD)v72 - v64;
          LODWORD(v72) = v101;
          *((_DWORD *)v70 + 35) = 0;
          *((_DWORD *)v70 + 36) = (_DWORD)v72;
          *((_QWORD *)v70 + 23) = 0LL;
          *((_QWORD *)v70 + 140) = 0LL;
          *((_QWORD *)v70 + 141) = 0LL;
          v106 = (char **)(v70 + 184);
          *((_DWORD *)v70 + 33) = SidAreaSize;
          *((_DWORD *)v70 + 52) = v103;
          v73 = v117;
          *((_DWORD *)v70 + 53) = 0;
          *((_QWORD *)v70 + 8) = v73;
          *((_QWORD *)v70 + 9) = v118;
          *((_QWORD *)v70 + 10) = v112;
          *((_DWORD *)v70 + 200) = 0;
          *((_QWORD *)v70 + 99) = 0LL;
          *((_QWORD *)v70 + 98) = 0LL;
          *((_QWORD *)v70 + 135) = 0LL;
          *((_QWORD *)v70 + 136) = 0LL;
          memset(v70 + 808, 0, 0x110uLL);
          v74 = P;
          v75 = v70 + 1144;
          *((_QWORD *)v70 + 138) = 0LL;
          *((_QWORD *)v70 + 139) = 0LL;
          *((_QWORD *)v70 + 142) = 0LL;
          *((_QWORD *)v70 + 143) = v74;
          if ( a23 )
            *((_DWORD *)v70 + 53) = *a23;
          if ( !v95 )
          {
            *((_QWORD *)v70 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v70 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v97 == 1 )
          {
            *((_QWORD *)v70 + 9) &= 0x202800000uLL;
            *((_QWORD *)v70 + 10) &= 0x202800000uLL;
          }
          memset(v70 + 88, 0, 0x20uLL);
          v76 = v119;
          *((_QWORD *)v70 + 97) = v57;
          *((_QWORD *)v70 + 137) = 0LL;
          *((_QWORD *)v70 + 22) = 0LL;
          v116 = v70 + 176;
          v77 = SepReferenceLogonSession(v76, v70 + 216);
          if ( v77 < 0 )
          {
            *((_DWORD *)v70 + 50) |= 0x20u;
            *((_QWORD *)v70 + 27) = 0LL;
            ObfDereferenceObjectWithTag(v70, 0x746C6644u);
            return (unsigned int)v77;
          }
          if ( SeTokenLeakTracking )
          {
            **(_QWORD **)v75 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_QWORD *)(*(_QWORD *)v75 + 8LL) = KeGetCurrentThread()[1].KernelStack;
            *(_DWORD *)(*(_QWORD *)v75 + 32LL) = 12;
            *(_DWORD *)(*(_QWORD *)v75 + 280LL) = 0;
            *(_DWORD *)(*(_QWORD *)v75 + 284LL) = 0;
            v91 = *(_QWORD *)v75;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v91 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v91 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v91 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v91 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            v93 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v75 + 40LL), 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*(_QWORD *)v75 + 40LL + 8LL * v93), 30 - v93, 1u);
            v70 = (char *)Object;
            SepAddTokenLogonSession(Object);
          }
          if ( SepTokenSidSharingEnabled )
          {
            inserted = SepSetTokenUserAndGroups((_DWORD)v70, (_DWORD)Src, v28, (_DWORD)v114, v108);
            if ( inserted < 0 )
              goto LABEL_73;
          }
          else
          {
            v78 = SidAreaSize;
            *((_QWORD *)v70 + 19) = v70 + 1160;
            *((_DWORD *)v70 + 31) = v28 + 1;
            SidArea = &v70[16 * v28 + 1176];
            SidAreaSize = -16 - v60 + v78;
            RtlCopySidAndAttributesArray(
              1u,
              Src,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)(v70 + 1160),
              SidArea,
              &SidArea,
              &SidAreaSize);
            RtlCopySidAndAttributesArray(
              v28,
              v114,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)(v70 + 1176),
              SidArea,
              &SidArea,
              &SidAreaSize);
          }
          RtlSidHashInitialize(
            *((PSID_AND_ATTRIBUTES *)v70 + 19),
            *((_DWORD *)v70 + 31),
            (PSID_AND_ATTRIBUTES_HASH)(v70 + 232));
          *((_QWORD *)v70 + 20) = 0LL;
          *((_DWORD *)v70 + 32) = 0;
          v79 = (char *)ExAllocatePoolWithTag(PagedPool, v63, 0x64546553u);
          *v116 = v79;
          if ( v79 )
          {
            v80 = (unsigned __int8 *)Sid1;
            *((_QWORD *)v70 + 21) = v79;
            v81 = RtlLengthRequiredSid(v80[1]);
            RtlCopySid(v81, v79, v80);
            v82 = (unsigned __int16 *)v120;
            v83 = &v79[(v81 + 3) & 0xFFFFFFFC];
            if ( v120 )
            {
              v84 = v120;
              *v106 = v83;
              memmove(v83, v84, v82[1]);
            }
            inserted = SepSetTokenClaims((_DWORD)v70, v123, v122, a21, v121);
            if ( inserted >= 0 )
            {
              if ( !a24 || (inserted = SepSetTokenTrust(v70, SeProcTrustWinTcbSid), inserted >= 0) )
              {
                if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                  {
                    *(_DWORD *)(*(_QWORD *)v75 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                    v94 = *(_DWORD *)(*(_QWORD *)v75 + 280LL);
                    if ( v94 >= SepTokenLeakBreakCount )
                    {
                      DbgPrint("\nToken number 0x%x = 0x%p\n", v94, Object);
                      __debugbreak();
                    }
                  }
                  v70 = (char *)Object;
                }
                if ( a24 )
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
                    if ( !v96 )
                      SepAppendAdminAceToTokenAcl(v89);
                    *Handle = v89;
                  }
                  return (unsigned int)inserted;
                }
                inserted = SeCreateAccessState(&PassedAccessState, v125, v113, (char *)SeTokenObjectType + 76);
                v85 = v70;
                if ( inserted < 0 )
                  goto LABEL_74;
                inserted = ObInsertObject(v70, &PassedAccessState, 0, 1u, 0LL, Handle);
                SeDeleteAccessState(&PassedAccessState);
                if ( inserted < 0 )
                  return (unsigned int)inserted;
                if ( !v96 )
                  SepAppendAdminAceToTokenAcl(v70);
              }
            }
          }
          else
          {
            inserted = -1073741801;
          }
LABEL_73:
          v85 = v70;
LABEL_74:
          ObfDereferenceObjectWithTag(v85, 0x746C6644u);
          return (unsigned int)inserted;
        }
        ExFreePoolWithTag(v57, 0);
        if ( SeTokenLeakTracking )
        {
          v90 = v59;
          goto LABEL_114;
        }
      }
      return 3221225626LL;
    }
    return 3221225485LL;
  }
  return result;
}
