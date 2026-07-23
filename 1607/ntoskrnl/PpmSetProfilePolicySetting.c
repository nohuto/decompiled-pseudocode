/*
 * XREFs of PpmSetProfilePolicySetting @ 0x1403F652C
 * Callers:
 *     PopSetNewPolicyValue @ 0x1403F6C58 (PopSetNewPolicyValue.c)
 *     PpmProcessSettingsFromQueryTable @ 0x140675D80 (PpmProcessSettingsFromQueryTable.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmInfoAdjustSetting @ 0x1403F7920 (PpmInfoAdjustSetting.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x14056A5E8 (PpmGetPolicyAction.c)
 *     PpmEventTraceProfileSetting @ 0x140576A4C (PpmEventTraceProfileSetting.c)
 *     PpmReapplyIdlePolicy @ 0x14066B7A4 (PpmReapplyIdlePolicy.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  bool v6; // r12
  GUID **v9; // rdi
  char v10; // al
  unsigned int v11; // r8d
  GUID **v12; // rdx
  unsigned int v13; // r10d
  unsigned int v14; // esi
  unsigned __int8 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rbx
  int v19; // r14d
  __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // r15
  char v23; // al
  int v24; // r9d
  unsigned int v25; // ecx
  __int64 v27; // r13
  _QWORD *v28; // r15
  char v29; // cl
  unsigned int v30; // edx
  __int64 v31; // rbp
  __int64 v32; // rcx
  __int64 v33; // r15
  int v34; // r13d
  __int64 v35; // r15
  __int64 v36; // r12
  char v37; // al
  int v38; // r9d
  unsigned int v39; // ecx
  char v40; // [rsp+40h] [rbp-78h]
  int v41; // [rsp+44h] [rbp-74h]
  int v42; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-68h]
  __int16 v45; // [rsp+58h] [rbp-60h] BYREF
  __int64 v46; // [rsp+60h] [rbp-58h]
  __int64 v47; // [rsp+68h] [rbp-50h] BYREF
  GUID v48; // [rsp+70h] [rbp-48h]

  v5 = a3;
  v6 = 0;
  v46 = a4;
  v9 = 0LL;
  v40 = 0;
  v10 = 0;
  if ( !a5 || !a4 )
  {
    v17 = -1073741811;
LABEL_21:
    if ( v6 )
    {
      v29 = *((_BYTE *)v9 + 36);
      v45 = 0;
      v47 = 1LL << v29;
      PpmGetPolicyAction(&v47, &v45);
      if ( (*((_BYTE *)v9 + 37) & 1) != 0 )
        PpmReapplyPerfPolicy(&v45);
      else
        PpmReapplyIdlePolicy();
      return v17;
    }
    if ( !v10 )
      return v17;
    goto LABEL_23;
  }
  v11 = 0;
  v12 = &off_1403A9B78;
  while ( 2 )
  {
    v9 = v12 - 1;
    v13 = 1;
    if ( (*((_BYTE *)v12 + 29) & 4) != 0 )
      v13 = 2;
    v14 = 0;
    v48 = **v12;
    v15 = v48.Data4[7];
    do
    {
      v16 = *(_QWORD *)&v48.Data1 - *a2;
      if ( *(_QWORD *)&v48.Data1 == *a2 )
        v16 = *(_QWORD *)v48.Data4 - a2[1];
      if ( !v16 )
      {
        v18 = 1LL << *((_BYTE *)v9 + 36);
        v19 = v14;
        if ( (*((_BYTE *)v9 + 37) & 1) != 0 )
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        else
          PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
        *(_QWORD *)&v48.Data1 = PpmCurrentProfile;
        v41 = dword_140303D4C;
        v20 = *a1 - *(_QWORD *)&NullGuid.Data1;
        if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
          v20 = a1[1] - *(_QWORD *)NullGuid.Data4;
        if ( !v20 )
        {
          v47 = v5;
          v44 = 1392 * v5;
          v21 = &PpmDefaultProfile[174 * v5 + 5];
          v42 = *((_DWORD *)v9 + 8);
          v22 = (__int64)v9[3] + v14 * v42 + (_QWORD)v21;
          if ( (*((_BYTE *)v9 + 37) & 4) != 0 && !v14 && (v18 & v21[1]) == 0 )
          {
            v40 = 1;
            v19 = 1;
          }
          v23 = PpmInfoAdjustSetting((_DWORD)v9, 1392 * v5 + (unsigned int)&PpmDefaultProfile[5], v14, v19, v46, a5);
          v25 = v14;
          v21[v14] |= v18;
          if ( v23 )
          {
            LOBYTE(v24) = v14;
            LOBYTE(v25) = byte_1403017A8;
            PpmEventTraceProfileSetting(v25, (unsigned int)*v9, (unsigned int)v9[1], v24, v22, v42, v5, 0);
            if ( *(__int64 **)&v48.Data1 == PpmDefaultProfile )
              v6 = v41 == (_DWORD)v5;
            if ( PpmProfileCount )
            {
              v27 = (unsigned __int8)PpmProfileCount;
              v28 = (_QWORD *)(v44 + 40 + PpmProfiles);
              do
              {
                if ( (v28[v14] & v18) == 0 && (!v14 || (v18 & *v28) == 0) )
                {
                  if ( (*((_BYTE *)v9 + 37) & 4) != 0 && !v14 )
                  {
                    if ( v40 )
                    {
                      if ( (v18 & v28[1]) == 0 )
                        v19 = 1;
                    }
                    else
                    {
                      v19 = 0;
                    }
                  }
                  PpmInfoAdjustSetting((_DWORD)v9, (_DWORD)v28, v14, v19, v46, a5);
                  if ( *(_QWORD **)&v48.Data1 == &v28[v44 / 0xFFFFFFFFFFFFFFF8uLL - 5] && v41 == v47 )
                    v6 = 1;
                }
                v28 += 358;
                --v27;
              }
              while ( v27 );
            }
          }
LABEL_20:
          v10 = 1;
          v17 = 0;
          goto LABEL_21;
        }
        v30 = 0;
        if ( PpmProfileCount )
        {
          while ( 1 )
          {
            v31 = PpmProfiles + 2864LL * v30;
            v32 = *(_QWORD *)(v31 + 12) - *a1;
            if ( !v32 )
              v32 = *(_QWORD *)(v31 + 20) - a1[1];
            if ( !v32 )
              break;
            if ( ++v30 >= (unsigned __int8)PpmProfileCount )
              goto LABEL_59;
          }
          v33 = 1392 * v5;
          v34 = *((_DWORD *)v9 + 8);
          v35 = v31 + v33 + 40;
          v36 = (__int64)v9[3] + v14 * v34 + v35;
          if ( (*((_BYTE *)v9 + 37) & 4) != 0 && !v14 && (v18 & *(_QWORD *)(v35 + 8)) == 0 )
            v19 = 1;
          v37 = PpmInfoAdjustSetting((_DWORD)v9, v35, v14, v19, v46, a5);
          v39 = v14;
          *(_QWORD *)(v35 + 8LL * v14) |= v18;
          if ( v37 )
          {
            LOBYTE(v38) = v14;
            LOBYTE(v39) = *(_BYTE *)(v31 + 8);
            PpmEventTraceProfileSetting(v39, (unsigned int)*v9, (unsigned int)v9[1], v38, v36, v34, a3, 0);
            v6 = *(_QWORD *)&v48.Data1 == v31 && v41 == a3;
          }
          else
          {
            v6 = 0;
          }
          goto LABEL_20;
        }
LABEL_59:
        v17 = -1073741275;
LABEL_23:
        if ( (*((_BYTE *)v9 + 37) & 1) != 0 )
          PpmReleaseLock(&PpmPerfPolicyLock);
        else
          PopReleaseRwLock(&PpmIdlePolicyLock);
        return v17;
      }
      ++v15;
      ++v14;
      v48.Data4[7] = v15;
    }
    while ( v14 < v13 );
    ++v11;
    v12 += 5;
    if ( v11 < 0x2A )
      continue;
    return (unsigned int)-1073741275;
  }
}
