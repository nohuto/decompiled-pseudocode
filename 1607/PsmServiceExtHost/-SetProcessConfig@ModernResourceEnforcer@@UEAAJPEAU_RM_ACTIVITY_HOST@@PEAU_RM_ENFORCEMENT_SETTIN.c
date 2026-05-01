/*
 * XREFs of ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000D090
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C69C (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18000C990 (-PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180020A2A (memcmp_0.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetProcessConfig(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        struct _RM_ENFORCEMENT_SETTINGS *a3)
{
  int v3; // eax
  unsigned __int64 *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  union _RM_SID *v12; // rdi
  int *v13; // r12
  unsigned __int16 *v14; // r14
  struct _RTL_CRITICAL_SECTION *v15; // rax
  ULONG v16; // eax
  bool v17; // zf
  WCHAR *v18; // rbx
  unsigned __int64 v19; // rdi
  unsigned __int8 *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rbx
  char *v25; // r14
  unsigned __int64 v26; // rax
  struct EnforcerApplicationState *ApplicationState; // rax
  __int16 v28; // cx
  __int64 (__fastcall *v29)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v30; // ecx
  unsigned __int64 *v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // ecx
  int v35; // ecx
  unsigned __int64 v36; // rax
  unsigned __int64 *v37; // rsi
  __int64 result; // rax
  __int64 v39; // rax
  __int64 (__fastcall *v40)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  unsigned __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v43[2]; // [rsp+20h] [rbp-E0h]
  enum _PSM_APPLICATION_PRIORITY *v44; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v45; // [rsp+58h] [rbp-A8h]
  unsigned int v46; // [rsp+70h] [rbp-90h]
  unsigned int v47; // [rsp+74h] [rbp-8Ch]
  int v48; // [rsp+78h] [rbp-88h] BYREF
  WCHAR v49; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v55; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v56; // [rsp+A8h] [rbp-58h]
  union _RM_SID *v57; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v58; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-38h] BYREF
  PRTL_CRITICAL_SECTION CriticalSection; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v63; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v64; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v67; // [rsp+100h] [rbp+0h]
  wchar_t Destination[232]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD Buf1[8]; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v70; // [rsp+320h] [rbp+220h]
  unsigned int v71; // [rsp+324h] [rbp+224h]
  unsigned int v72; // [rsp+328h] [rbp+228h]
  unsigned __int64 v73; // [rsp+330h] [rbp+230h]

  v3 = *((_DWORD *)a3 + 12);
  if ( v3 == 100 )
  {
    v48 = -1;
  }
  else
  {
    v48 = *((_DWORD *)a3 + 12);
    if ( v3 != -1 )
      v48 = 100 * v3;
  }
  if ( *((_QWORD *)a2 + 88) == *((_QWORD *)a3 + 4) )
  {
    v5 = 0LL;
  }
  else
  {
    v59 = *((_QWORD *)a3 + 4);
    v5 = (unsigned __int64 *)&v59;
  }
  v6 = *((_QWORD *)a3 + 2);
  v53 = *((_QWORD *)a3 + 1);
  v54 = *(_QWORD *)a3;
  v55 = v5;
  v60 = v6;
  if ( v6 )
    v7 = (unsigned __int64 *)&v60;
  else
    v7 = 0LL;
  v8 = *(_QWORD *)this;
  v56 = v7;
  v9 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(v8 + 64);
  if ( v9 != ModernResourceEnforcer::SetApplicationProperties )
    return v9(this, a2, (unsigned int *)&v48, v7, &v54, &v53, 0LL, v5);
  v10 = *((_DWORD *)a2 + 147);
  v11 = *((_DWORD *)a2 + 148);
  v12 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 520);
  v13 = 0LL;
  v14 = (unsigned __int16 *)((char *)a2 + 56);
  v50 = *((_QWORD *)a2 + 3);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v58 = (unsigned __int16 *)((char *)a2 + 56);
  v51 = -1;
  v57 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 520);
  v47 = v10;
  v46 = v11;
  v52 = 0;
  CriticalSection = (PRTL_CRITICAL_SECTION)((char *)this + 16);
  while ( 1 )
  {
    RtlEnterCriticalSection(v15);
    memset_0(Destination, 0, 0x228uLL);
    wcscpy_s(Destination, 0xE8uLL, v14);
    memset(Buf1, 0, sizeof(Buf1));
    v70 = 0;
    v16 = RtlLengthSid(v12);
    memcpy_0(Buf1, v12, v16);
    v17 = *((_QWORD *)this + 33) == 0LL;
    v73 = v50;
    v71 = v10;
    v72 = v11;
    if ( v17 )
      goto LABEL_48;
    v18 = Destination;
    v19 = 314159LL;
    do
    {
      v49 = RtlUpcaseUnicodeChar(*v18++);
      v19 = HIBYTE(v49) + 37 * ((unsigned __int8)v49 + 37 * v19);
    }
    while ( v18 < (WCHAR *)Buf1 );
    v20 = (unsigned __int8 *)Buf1;
    v21 = 11LL;
    do
    {
      v22 = *v20;
      v20 += 8;
      v19 = *(v20 - 1)
          + 37
          * (*(v20 - 2)
           + 37
           * (*(v20 - 3)
            + 37 * (*(v20 - 4) + 37 * (*(v20 - 5) + 37 * (*(v20 - 6) + 37 * (*(v20 - 7) + 37 * (v22 + 37 * v19)))))));
      --v21;
    }
    while ( v21 );
    v23 = *((_QWORD *)this + 33) + 16 * (v19 & ((8LL << *((_BYTE *)this + 280)) - 1));
    v24 = *(char **)v23;
    if ( !*(_QWORD *)v23 || (v25 = **(char ***)(v23 + 8), v24 == v25) )
    {
LABEL_48:
      v24 = (char *)this + 248;
    }
    else
    {
      while ( 1 )
      {
        v26 = *((_QWORD *)v24 + 2);
        if ( v26 >= v19 )
        {
          if ( v26 > v19 )
            goto LABEL_48;
          if ( !_wcsicmp(Destination, (const wchar_t *)v24 + 12) && !memcmp_0(Buf1, v24 + 488, 0x58uLL) )
            break;
        }
        v24 = *(char **)v24;
        if ( v24 == v25 )
          goto LABEL_48;
      }
    }
    if ( v24 == (char *)this + 248 )
      ApplicationState = 0LL;
    else
      ApplicationState = (struct EnforcerApplicationState *)(v24 + 576);
    v12 = v57;
    v14 = v58;
    if ( !ApplicationState )
    {
      ApplicationState = ModernResourceEnforcer::CreateApplicationState(this, v58, v57, v47, v46, v50);
      if ( !ApplicationState )
      {
        RtlLeaveCriticalSection(CriticalSection);
        return 3221225495LL;
      }
    }
    *(_BYTE *)ApplicationState |= 0x80u;
    if ( &v42 != (__int64 *)-120LL )
    {
      if ( *(char *)ApplicationState < 0 )
      {
        v28 = v48;
        if ( v48 == -1 )
          v28 = -1;
        *((_WORD *)ApplicationState + 1) = v28;
      }
      if ( (*(_BYTE *)ApplicationState & 1) != 0 )
      {
        v13 = 0LL;
      }
      else
      {
        v13 = &v51;
        v51 = v48;
      }
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 16));
    v29 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)this + 104LL);
    if ( v29 == ModernResourceEnforcer::PsmSetApplicationProperties )
    {
      v62 = 0LL;
      v30 = 0;
      v63 = 0LL;
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0LL;
      v67 = 0LL;
      if ( v13 )
      {
        v30 = 1;
        HIDWORD(v62) = *v13;
      }
      v31 = v56;
      if ( v56 )
      {
        v32 = *v56;
        v30 |= 2u;
        if ( *v56 == -1LL )
          v32 = 0LL;
        v63 = v32;
      }
      v33 = v54;
      v34 = v30 | 4;
      if ( v54 == -1LL )
        v33 = 0LL;
      v35 = v34 | 8;
      v64 = v33;
      v36 = v53;
      LODWORD(v62) = v35;
      if ( v53 == -1LL )
        v36 = 0LL;
      v37 = v55;
      v65 = v36;
      if ( v55 )
      {
        v41 = *v55;
        LODWORD(v62) = v35 | 0x20;
        v67 = v41;
      }
      result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, unsigned __int16 *, _QWORD, unsigned __int64, __int64 *))this
                + 12))(
                 v12,
                 v47,
                 v14,
                 v46,
                 v50,
                 &v62);
      if ( (int)result < 0 )
        goto LABEL_52;
      result = 0LL;
    }
    else
    {
      v37 = v55;
      v31 = v56;
      v43[0] = v46;
      result = v29(this, v14, v12, v47, *(_QWORD *)v43, v50, (unsigned int *)v13, v56, &v54, &v53, 0LL, v55);
    }
    if ( (int)result >= 0 )
      return result;
LABEL_52:
    if ( !v13 || (_DWORD)result != -1073741776 )
      break;
    if ( (unsigned int)++v52 > 2 )
      goto LABEL_61;
    v10 = v47;
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    v11 = v46;
  }
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741776 )
  {
LABEL_61:
    v39 = *(_QWORD *)this;
    v45 = v37;
    v44 = 0LL;
    v40 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(v39 + 104);
    if ( v40 == ModernResourceEnforcer::PsmSetApplicationProperties )
      return ModernResourceEnforcer::PsmSetApplicationProperties(
               this,
               v14,
               v12,
               v47,
               v46,
               v50,
               0LL,
               v31,
               &v54,
               &v53,
               v44,
               v45);
    else
      return v40(this, v14, v12, v47, v46, v50, 0LL, v31, &v54, &v53, v44, v45);
  }
  return result;
}
