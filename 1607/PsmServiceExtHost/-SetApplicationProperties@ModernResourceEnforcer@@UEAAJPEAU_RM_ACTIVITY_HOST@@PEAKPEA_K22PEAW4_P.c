/*
 * XREFs of ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x18000CB20
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

__int64 __fastcall ModernResourceEnforcer::SetApplicationProperties(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        enum _PSM_APPLICATION_PRIORITY *a7,
        unsigned __int64 *a8)
{
  union _RM_SID *v8; // rbx
  char *v9; // rsi
  int *v10; // r15
  struct _RTL_CRITICAL_SECTION *v13; // rax
  const wchar_t *v14; // rdi
  unsigned int v15; // r14d
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
  int v28; // edx
  unsigned __int64 *v29; // rbx
  unsigned __int64 *v30; // rdi
  unsigned __int64 *v31; // r14
  __int64 (__fastcall *v32)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  enum _PSM_APPLICATION_PRIORITY *v33; // rdx
  unsigned __int64 *v34; // r8
  int v35; // ecx
  int v36; // eax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 result; // rax
  __int64 (__fastcall *v41)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v42; // eax
  unsigned __int64 v43; // rax
  unsigned int v44[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v45; // [rsp+70h] [rbp-90h]
  unsigned int v46; // [rsp+74h] [rbp-8Ch]
  WCHAR v47; // [rsp+88h] [rbp-78h]
  unsigned __int64 v48; // [rsp+90h] [rbp-70h]
  union _RM_SID *v49; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h] BYREF
  int v52; // [rsp+ACh] [rbp-54h]
  unsigned __int64 *v53; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v54; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v55; // [rsp+C0h] [rbp-40h]
  PRTL_CRITICAL_SECTION CriticalSection; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v58; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v59; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v62; // [rsp+F8h] [rbp-8h]
  wchar_t Destination[232]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD Buf1[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v65; // [rsp+310h] [rbp+210h]
  unsigned int v66; // [rsp+314h] [rbp+214h]
  unsigned int v67; // [rsp+318h] [rbp+218h]
  unsigned __int64 v68; // [rsp+320h] [rbp+220h]

  v8 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 520);
  v9 = (char *)this + 248;
  v10 = 0LL;
  v45 = *((_DWORD *)a2 + 148);
  v48 = *((_QWORD *)a2 + 3);
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v54 = a5;
  v14 = (const wchar_t *)((char *)a2 + 56);
  v53 = a6;
  v15 = *((_DWORD *)a2 + 147);
  CriticalSection = (PRTL_CRITICAL_SECTION)((char *)this + 16);
  v55 = a4;
  v51 = -1;
  v50 = (unsigned __int16 *)((char *)a2 + 56);
  v49 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 520);
  v46 = v15;
  v52 = 0;
  while ( 1 )
  {
    RtlEnterCriticalSection(v13);
    memset_0(Destination, 0, 0x228uLL);
    wcscpy_s(Destination, 0xE8uLL, v14);
    memset(Buf1, 0, sizeof(Buf1));
    v65 = 0;
    v16 = RtlLengthSid(v8);
    memcpy_0(Buf1, v8, v16);
    v17 = *((_QWORD *)v9 + 2) == 0LL;
    v67 = v45;
    v68 = v48;
    v66 = v15;
    if ( !v17 )
    {
      v18 = Destination;
      v19 = 314159LL;
      do
      {
        v47 = RtlUpcaseUnicodeChar(*v18++);
        v19 = HIBYTE(v47) + 37 * ((unsigned __int8)v47 + 37 * v19);
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
      v23 = *((_QWORD *)v9 + 2) + 16 * (v19 & ((8LL << v9[32]) - 1));
      v24 = *(char **)v23;
      if ( *(_QWORD *)v23 )
      {
        v25 = **(char ***)(v23 + 8);
        if ( v24 != v25 )
        {
          do
          {
            v26 = *((_QWORD *)v24 + 2);
            if ( v26 >= v19 )
            {
              if ( v26 > v19 )
                break;
              if ( !_wcsicmp(Destination, (const wchar_t *)v24 + 12) && !memcmp_0(Buf1, v24 + 488, 0x58uLL) )
              {
                v9 = (char *)this + 248;
                goto LABEL_14;
              }
            }
            v24 = *(char **)v24;
          }
          while ( v24 != v25 );
          v9 = (char *)this + 248;
        }
      }
    }
    v24 = v9;
LABEL_14:
    if ( v24 == v9 )
      ApplicationState = 0LL;
    else
      ApplicationState = (struct EnforcerApplicationState *)(v24 + 576);
    if ( !ApplicationState )
    {
      ApplicationState = ModernResourceEnforcer::CreateApplicationState(this, v50, v49, v46, v45, v48);
      if ( !ApplicationState )
      {
        RtlLeaveCriticalSection(CriticalSection);
        return 3221225495LL;
      }
    }
    *(_BYTE *)ApplicationState |= 0x80u;
    if ( a3 )
    {
      v28 = *a3;
      if ( *(char *)ApplicationState < 0 )
      {
        if ( v28 == -1 )
          *((_WORD *)ApplicationState + 1) = -1;
        else
          *((_WORD *)ApplicationState + 1) = v28;
      }
      if ( (*(_BYTE *)ApplicationState & 1) != 0 )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = &v51;
        v51 = *a3;
      }
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 16));
    v29 = v55;
    v30 = v54;
    v31 = v53;
    v32 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)this + 104LL);
    if ( v32 == ModernResourceEnforcer::PsmSetApplicationProperties )
    {
      v33 = a7;
      v34 = a8;
      if ( v10 || v55 || v54 || v53 || a7 || a8 )
      {
        v57 = 0LL;
        v35 = 0;
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        v62 = 0LL;
        if ( v10 )
        {
          v36 = *v10;
          v35 = 1;
          LODWORD(v57) = 1;
          HIDWORD(v57) = v36;
        }
        if ( v55 )
        {
          v37 = *v55;
          v35 |= 2u;
          LODWORD(v57) = v35;
          if ( v37 == -1LL )
            v37 = 0LL;
          v58 = v37;
        }
        if ( v54 )
        {
          v38 = *v54;
          v35 |= 4u;
          LODWORD(v57) = v35;
          if ( v38 == -1LL )
            v38 = 0LL;
          v59 = v38;
        }
        if ( v53 )
        {
          v39 = *v53;
          v35 |= 8u;
          LODWORD(v57) = v35;
          if ( v39 == -1LL )
            v39 = 0LL;
          v60 = v39;
        }
        if ( a7 )
        {
          v42 = *(_DWORD *)a7;
          v35 |= 0x10u;
          LODWORD(v57) = v35;
          LODWORD(v61) = v42;
        }
        if ( a8 )
        {
          v43 = *a8;
          LODWORD(v57) = v35 | 0x20;
          v62 = v43;
        }
        result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, unsigned __int16 *, _QWORD, unsigned __int64, __int64 *))this
                  + 12))(
                   v49,
                   v46,
                   v50,
                   v45,
                   v48,
                   &v57);
        v33 = a7;
        v34 = a8;
        if ( (int)result < 0 )
          goto LABEL_54;
        result = 0LL;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      v44[0] = v45;
      result = v32(this, v50, v49, v46, *(_QWORD *)v44, v48, (unsigned int *)v10, v55, v54, v53, a7, a8);
      v33 = a7;
      v34 = a8;
    }
    if ( (int)result >= 0 )
      return result;
LABEL_54:
    if ( !v10 || (_DWORD)result != -1073741776 )
      break;
    if ( (unsigned int)++v52 > 2 )
      goto LABEL_63;
    v8 = v49;
    v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    v14 = v50;
    v15 = v46;
  }
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741776 )
  {
LABEL_63:
    v41 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)this + 104LL);
    if ( v41 == ModernResourceEnforcer::PsmSetApplicationProperties )
      return ModernResourceEnforcer::PsmSetApplicationProperties(
               this,
               v50,
               v49,
               v46,
               v45,
               v48,
               0LL,
               v29,
               v30,
               v31,
               v33,
               v34);
    else
      return v41(this, v50, v49, v46, v45, v48, 0LL, v29, v30, v31, v33, v34);
  }
  return result;
}
