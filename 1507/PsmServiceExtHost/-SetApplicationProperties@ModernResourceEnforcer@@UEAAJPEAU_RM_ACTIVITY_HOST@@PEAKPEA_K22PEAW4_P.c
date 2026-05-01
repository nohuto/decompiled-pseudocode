/*
 * XREFs of ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C470
 * Callers:
 *     ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000CCC0 (-SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTIN.c)
 * Callees:
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18000AAB0 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnfo.c)
 *     ??$?RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@?$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_PSM_APP_INSTANCE_ID@@AEAU2@@Z @ 0x18000ACE8 (--$-RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@-$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_.c)
 *     ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C2C0 (-PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x180024EC6 (memcmp_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetApplicationProperties(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        enum _PSM_APPLICATION_PRIORITY *a7)
{
  union _RM_SID *v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ModernResourceEnforcer *v9; // rbx
  unsigned int *v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int16 *v12; // r12
  unsigned int v13; // r15d
  __int64 v14; // r12
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  WCHAR *v19; // rbx
  __int64 v20; // r14
  unsigned __int8 *v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  union _RM_SID *v30; // r14
  unsigned int v31; // r15d
  unsigned int v32; // ecx
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  WCHAR *v37; // rbx
  __int64 v38; // r14
  unsigned __int8 *v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  _BYTE *v47; // rbx
  unsigned __int64 *v48; // r14
  unsigned __int64 *v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 *v51; // r12
  unsigned __int64 v52; // rax
  __int64 (__fastcall *v53)(ModernResourceEnforcer *, const unsigned __int16 *, SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *); // rbx
  __int64 result; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  char *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  char *v62; // rbx
  char v63; // al
  bool v64; // al
  char *Block; // rcx
  __int64 (__fastcall *v66)(ModernResourceEnforcer *, const unsigned __int16 *, SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *); // rbx
  unsigned __int64 v67; // rax
  unsigned __int64 *v68; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v69; // [rsp+38h] [rbp-C8h]
  unsigned int v70; // [rsp+60h] [rbp-A0h]
  unsigned int v71; // [rsp+64h] [rbp-9Ch]
  int v72[2]; // [rsp+68h] [rbp-98h]
  WCHAR v73; // [rsp+70h] [rbp-90h]
  WCHAR v74; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v75; // [rsp+80h] [rbp-80h]
  unsigned __int64 v77; // [rsp+90h] [rbp-70h]
  int v78; // [rsp+98h] [rbp-68h]
  int v79; // [rsp+9Ch] [rbp-64h] BYREF
  int v80; // [rsp+A0h] [rbp-60h]
  union _RM_SID *v81; // [rsp+A8h] [rbp-58h]
  enum _PSM_APPLICATION_PRIORITY *v82; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v83; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v84; // [rsp+C0h] [rbp-40h]
  unsigned int *v85; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v86; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v87; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v88; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v89; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-10h]
  char v91; // [rsp+F8h] [rbp-8h]
  int v92[2]; // [rsp+100h] [rbp+0h] BYREF
  char v93; // [rsp+108h] [rbp+8h]
  wchar_t String1[232]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v95[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v96; // [rsp+320h] [rbp+220h]
  unsigned int v97; // [rsp+324h] [rbp+224h]
  int v98; // [rsp+328h] [rbp+228h]
  __int64 v99; // [rsp+330h] [rbp+230h]
  wchar_t Buffer[232]; // [rsp+340h] [rbp+240h] BYREF
  _OWORD Buf1[4]; // [rsp+510h] [rbp+410h] BYREF
  int v102; // [rsp+550h] [rbp+450h]
  unsigned int v103; // [rsp+554h] [rbp+454h]
  unsigned int v104; // [rsp+558h] [rbp+458h]
  unsigned __int64 v105; // [rsp+560h] [rbp+460h]
  wchar_t v106[232]; // [rsp+570h] [rbp+470h] BYREF
  __int128 v107; // [rsp+740h] [rbp+640h]
  __int128 v108; // [rsp+750h] [rbp+650h]
  __int128 v109; // [rsp+760h] [rbp+660h]
  __int128 v110; // [rsp+770h] [rbp+670h]
  int v111; // [rsp+780h] [rbp+680h]
  unsigned int v112; // [rsp+784h] [rbp+684h]
  unsigned int v113; // [rsp+788h] [rbp+688h]
  unsigned __int64 v114; // [rsp+790h] [rbp+690h]

  v7 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 512);
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v82 = a7;
  v9 = this;
  v10 = 0LL;
  v71 = *((_DWORD *)a2 + 145);
  v11 = *((_QWORD *)a2 + 3);
  v86 = a6;
  v12 = (unsigned __int16 *)((char *)a2 + 48);
  v84 = a5;
  v13 = *((_DWORD *)a2 + 146);
  v77 = v11;
  v83 = a4;
  v85 = a3;
  v79 = -1;
  v75 = (unsigned __int16 *)((char *)a2 + 48);
  v81 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 512);
  v70 = v13;
  v78 = 0;
  while ( 1 )
  {
    EnterCriticalSection(v8);
    memset_0(Buffer, 0, 0x228uLL);
    if ( swprintf_s(Buffer, 0xE8uLL, L"%s", v12) <= 0 )
      __fastfail(0x80070057);
    v14 = (__int64)v9 + 208;
    v15 = *(_OWORD *)v7;
    v102 = *((_DWORD *)v7 + 16);
    v16 = *((_OWORD *)v7 + 1);
    v103 = v71;
    Buf1[0] = v15;
    v17 = *((_OWORD *)v7 + 2);
    v105 = v77;
    Buf1[1] = v16;
    v18 = *((_OWORD *)v7 + 3);
    v104 = v13;
    Buf1[2] = v17;
    Buf1[3] = v18;
    *(_QWORD *)v72 = (char *)v9 + 208;
    if ( !*((_QWORD *)v9 + 28) )
      goto LABEL_53;
    v19 = Buffer;
    v20 = 314159LL;
    do
    {
      v74 = RtlUpcaseUnicodeChar(*v19++);
      v20 = HIBYTE(v74) + 37 * ((unsigned __int8)v74 + 37 * v20);
    }
    while ( v19 < (WCHAR *)Buf1 );
    v21 = (unsigned __int8 *)Buf1;
    v22 = 11LL;
    do
    {
      v23 = *v21;
      v21 += 8;
      v20 = *(v21 - 1)
          + 37
          * (*(v21 - 2)
           + 37
           * (*(v21 - 3)
            + 37 * (*(v21 - 4) + 37 * (*(v21 - 5) + 37 * (*(v21 - 6) + 37 * (*(v21 - 7) + 37 * (v23 + 37 * v20)))))));
      --v22;
    }
    while ( v22 );
    v24 = 32769 * (((unsigned __int64)(9 * v20) >> 11) ^ (9 * v20));
    v25 = *(_QWORD *)(v14 + 16) + 16 * (v24 & ((8LL << *(_BYTE *)(v14 + 32)) - 1));
    v26 = *(_QWORD *)v25;
    if ( !*(_QWORD *)v25 )
      goto LABEL_53;
    v27 = **(_QWORD **)(v25 + 8);
    if ( v26 == v27 )
    {
LABEL_52:
      v14 = *(_QWORD *)v72;
LABEL_53:
      v26 = v14;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v28 = *(_QWORD *)(v26 + 16);
      if ( v28 >= v24 )
      {
        if ( v28 > v24 )
          goto LABEL_52;
        if ( !_wcsicmp(Buffer, (const wchar_t *)(v26 + 24)) && !memcmp_0(Buf1, (const void *)(v26 + 488), 0x58uLL) )
          break;
      }
      v26 = *(_QWORD *)v26;
      if ( v26 == v27 )
        goto LABEL_52;
    }
    v14 = *(_QWORD *)v72;
LABEL_15:
    if ( v26 == v14 )
      v29 = 0LL;
    else
      v29 = v26 + 576;
    if ( v29 )
    {
      v30 = v81;
      v31 = v70;
    }
    else
    {
      LOBYTE(v80) = 0;
      HIWORD(v80) = -1;
      v90 = 0LL;
      v91 = 0;
      memset_0(v106, 0, 0x228uLL);
      if ( swprintf_s(v106, 0xE8uLL, L"%s", v75) <= 0 )
        __fastfail(0x80070057);
      v30 = v81;
      v31 = v70;
      v113 = v70;
      v55 = *(_OWORD *)v81;
      v111 = *((_DWORD *)v81 + 16);
      v56 = *((_OWORD *)v81 + 1);
      v107 = v55;
      v57 = *((_OWORD *)v81 + 2);
      v112 = v71;
      v108 = v56;
      v58 = *((_OWORD *)v81 + 3);
      v114 = v77;
      v109 = v57;
      v110 = v58;
      v59 = (char *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
      v62 = v59;
      v64 = 0;
      if ( v59 )
      {
        v63 = utl::construct<_RM_PSM_APP_INSTANCE_ID>::operator()<_RM_PSM_APP_INSTANCE_ID,_RM_PSM_APP_INSTANCE_ID &>(
                v60,
                v59 + 24,
                v106);
        *((_DWORD *)v62 + 144) = v80;
        if ( v63 )
          v64 = 1;
      }
      Block = v62;
      if ( v64 )
      {
        v62 = 0LL;
      }
      else if ( v62 )
      {
        Block = 0LL;
      }
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EmplaceImpl(
        v14,
        (__int64)v92,
        v61,
        0LL,
        Block);
      if ( v62 )
        operator delete(v62);
      v90 = *(_QWORD *)v92;
      v91 = v93;
      v29 = *(_QWORD *)v92 + 576LL;
      if ( *(_QWORD *)v92 == -576LL )
        __fastfail(0x80004003);
    }
    *(_BYTE *)v29 |= 0x80u;
    if ( v85 )
    {
      v32 = *v85;
      if ( *(char *)v29 < 0 )
      {
        if ( v32 == -1 )
          *(_WORD *)(v29 + 2) = -1;
        else
          *(_WORD *)(v29 + 2) = v32;
      }
      if ( ((v31 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( (*(_BYTE *)v29 & 1) == 0 )
          goto LABEL_40;
LABEL_73:
        v10 = 0LL;
        goto LABEL_41;
      }
      memset_0(String1, 0, 0x228uLL);
      if ( swprintf_s(String1, 0xE8uLL, L"%s", v75) <= 0 )
        __fastfail(0x80070057);
      v33 = *(_OWORD *)v30;
      v96 = *((_DWORD *)v30 + 16);
      v34 = *((_OWORD *)v30 + 1);
      v95[0] = v33;
      v35 = *((_OWORD *)v30 + 2);
      v97 = v71;
      v95[1] = v34;
      v36 = *((_OWORD *)v30 + 3);
      v98 = 6;
      v95[2] = v35;
      v95[3] = v36;
      v99 = -1LL;
      if ( *(_QWORD *)(v14 + 16) )
      {
        v37 = String1;
        v38 = 314159LL;
        do
        {
          v73 = RtlUpcaseUnicodeChar(*v37++);
          v38 = HIBYTE(v73) + 37 * ((unsigned __int8)v73 + 37 * v38);
        }
        while ( v37 < (WCHAR *)v95 );
        v39 = (unsigned __int8 *)v95;
        v40 = 11LL;
        do
        {
          v41 = *v39;
          v39 += 8;
          v38 = *(v39 - 1)
              + 37
              * (*(v39 - 2)
               + 37
               * (*(v39 - 3)
                + 37 * (*(v39 - 4) + 37 * (*(v39 - 5) + 37 * (*(v39 - 6) + 37 * (*(v39 - 7) + 37 * (v41 + 37 * v38)))))));
          --v40;
        }
        while ( v40 );
        v42 = 32769 * ((9 * v38) ^ ((unsigned __int64)(9 * v38) >> 11));
        v43 = *(_QWORD *)(v14 + 16) + 16 * (v42 & ((8LL << *(_BYTE *)(v14 + 32)) - 1));
        v44 = *(_QWORD *)v43;
        if ( *(_QWORD *)v43 )
        {
          v45 = **(_QWORD **)(v43 + 8);
          if ( v44 != v45 )
          {
            while ( 1 )
            {
              v46 = *(_QWORD *)(v44 + 16);
              if ( v46 >= v42 )
              {
                if ( v46 > v42 )
                  goto LABEL_55;
                if ( !_wcsicmp(String1, (const wchar_t *)(v44 + 24))
                  && !memcmp_0(v95, (const void *)(v44 + 488), 0x58uLL) )
                {
                  break;
                }
              }
              v44 = *(_QWORD *)v44;
              if ( v44 == v45 )
                goto LABEL_55;
            }
            v14 = *(_QWORD *)v72;
LABEL_37:
            if ( v44 == v14 || (v47 = (_BYTE *)(v44 + 576)) == 0LL || (*v47 & 1) == 0 )
            {
LABEL_40:
              v10 = (unsigned int *)&v79;
              v79 = *v85;
              goto LABEL_41;
            }
            goto LABEL_73;
          }
LABEL_55:
          v14 = *(_QWORD *)v72;
        }
      }
      v44 = v14;
      goto LABEL_37;
    }
LABEL_41:
    LeaveCriticalSection(v8);
    v48 = v83;
    if ( v83 )
    {
      v67 = *v83;
      v48 = &v88;
      v83 = &v88;
      v88 = v67;
    }
    v49 = v84;
    if ( v84 )
    {
      v50 = *v84;
      v49 = &v89;
      v84 = &v89;
      v89 = v50;
    }
    v51 = v86;
    if ( v86 )
    {
      v52 = *v86;
      v51 = &v87;
      v86 = &v87;
      v87 = v52;
    }
    v53 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *))(*(_QWORD *)this + 104LL);
    if ( v53 == ModernResourceEnforcer::PsmSetApplicationProperties )
    {
      v9 = this;
      v68 = v48;
      v7 = v81;
      result = ModernResourceEnforcer::PsmSetApplicationProperties(
                 this,
                 v75,
                 (SID *)v81,
                 v71,
                 v70,
                 v77,
                 v10,
                 v68,
                 v49,
                 v51,
                 v82);
    }
    else
    {
      v69 = v48;
      v7 = v81;
      result = v53(this, v75, (SID *)v81, v71, v70, v77, v10, v69, v49, v51, v82);
      v9 = this;
    }
    if ( (int)result >= 0 )
      return result;
    if ( !v10 || (_DWORD)result != -1073741776 )
      break;
    if ( (unsigned int)++v78 > 2 )
      goto LABEL_76;
    v13 = v70;
    v12 = v75;
  }
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741776 )
  {
LABEL_76:
    v66 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *))(*(_QWORD *)v9 + 104LL);
    if ( v66 == ModernResourceEnforcer::PsmSetApplicationProperties )
      return ModernResourceEnforcer::PsmSetApplicationProperties(
               this,
               v75,
               (SID *)v7,
               v71,
               v70,
               v77,
               0LL,
               v83,
               v49,
               v51,
               v82);
    else
      return v66(this, v75, (SID *)v7, v71, v70, v77, 0LL, v83, v49, v51, v82);
  }
  return result;
}
