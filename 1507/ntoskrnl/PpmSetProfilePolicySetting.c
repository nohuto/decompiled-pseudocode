/*
 * XREFs of PpmSetProfilePolicySetting @ 0x1404FF554
 * Callers:
 *     PopSetNewPolicyValue @ 0x1404FFD24 (PopSetNewPolicyValue.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1406BDD44 (PpmProcessSettingsFromQueryTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PpmInfoReleaseLocks @ 0x1404FE334 (PpmInfoReleaseLocks.c)
 *     PpmInfoAdjustSetting @ 0x140500A2C (PpmInfoAdjustSetting.c)
 *     PpmReapplyIdlePolicy @ 0x14058EB9C (PpmReapplyIdlePolicy.c)
 *     PpmGetPolicyAction @ 0x1405B0890 (PpmGetPolicyAction.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceProfileSetting @ 0x1405B8B10 (PpmEventTraceProfileSetting.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  _QWORD *v6; // r11
  __int64 v8; // rdi
  char v9; // al
  bool v10; // r13
  unsigned int v11; // r8d
  GUID **v12; // rdx
  unsigned int v13; // r10d
  unsigned int v14; // esi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rbx
  int v18; // r14d
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r15
  char v22; // al
  int v23; // r9d
  unsigned int v24; // ecx
  unsigned int v25; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rbp
  __int64 v31; // r15
  char v32; // cl
  __int64 v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // r12
  char v37; // al
  int v38; // r9d
  unsigned int v39; // ecx
  char v40; // [rsp+40h] [rbp-68h]
  int v42; // [rsp+44h] [rbp-64h]
  int v43; // [rsp+48h] [rbp-60h]
  _WORD v44[2]; // [rsp+4Ch] [rbp-5Ch] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h]
  __int64 v46; // [rsp+58h] [rbp-50h] BYREF
  __int64 v47; // [rsp+60h] [rbp-48h]
  GUID v48; // [rsp+68h] [rbp-40h]

  v5 = a3;
  v6 = (_QWORD *)a2;
  v47 = a4;
  v8 = 0LL;
  v40 = 0;
  v9 = 0;
  v10 = 0;
  if ( !a5 || !a4 )
  {
    v16 = -1073741811;
LABEL_21:
    if ( v10 )
    {
      v32 = *(_BYTE *)(v8 + 36);
      v44[0] = 0;
      v46 = 1LL << v32;
      PpmGetPolicyAction(&v46, v44);
      if ( (*(_BYTE *)(v8 + 37) & 1) != 0 )
        PpmReapplyPerfPolicy(v44);
      else
        PpmReapplyIdlePolicy();
      return v16;
    }
    if ( !v9 )
      return v16;
    goto LABEL_23;
  }
  v11 = 0;
  v12 = &off_1403D0B38;
  while ( 2 )
  {
    v8 = (__int64)(v12 - 1);
    v13 = 1;
    if ( (*((_BYTE *)v12 + 29) & 4) != 0 )
      v13 = 2;
    v14 = 0;
    v48 = **v12;
    LOBYTE(a4) = v48.Data4[7];
    do
    {
      v15 = *(_QWORD *)&v48.Data1 - *v6;
      if ( *(_QWORD *)&v48.Data1 == *v6 )
        v15 = *(_QWORD *)v48.Data4 - v6[1];
      if ( !v15 )
      {
        v17 = 1LL << *(_BYTE *)(v8 + 36);
        v18 = v14;
        if ( (*(_BYTE *)(v8 + 37) & 1) != 0 )
        {
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v28 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
          v30 = v28;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL) )
            ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v28, (ULONG_PTR)&PpmIdlePolicyLock, v29);
          if ( v30 )
            *(_BYTE *)(v30 + 26) |= 1u;
          qword_14032E288 = (__int64)KeGetCurrentThread();
        }
        *(_QWORD *)&v48.Data1 = PpmCurrentProfile;
        v43 = dword_14032E84C;
        v19 = *a1 - *(_QWORD *)&NullGuid.Data1;
        if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
          v19 = a1[1] - *(_QWORD *)NullGuid.Data4;
        if ( !v19 )
        {
          v46 = v5;
          v45 = 1392 * v5;
          v20 = &PpmDefaultProfile[174 * v5 + 5];
          v42 = *(_DWORD *)(v8 + 32);
          v21 = (__int64)v20 + *(_QWORD *)(v8 + 24) + v14 * v42;
          if ( (*(_BYTE *)(v8 + 37) & 4) != 0 && !v14 && (v17 & v20[1]) == 0 )
          {
            v40 = 1;
            v18 = 1;
          }
          v22 = PpmInfoAdjustSetting(v8, 1392 * v5 + (unsigned int)&PpmDefaultProfile[5], v14, v18, v47, a5);
          v24 = v14;
          v20[v14] |= v17;
          v25 = 0;
          if ( v22 )
          {
            LOBYTE(v23) = v14;
            LOBYTE(v24) = byte_14032C748;
            PpmEventTraceProfileSetting(v24, *(_QWORD *)v8, *(_QWORD *)(v8 + 8), v23, v21, v42, v5, 0);
            if ( *(__int64 **)&v48.Data1 == PpmDefaultProfile )
              v10 = v43 == (_DWORD)v5;
            if ( PpmProfileCount )
            {
              do
              {
                v31 = PpmProfiles + 2864LL * v25;
                a2 = v31 + v45 + 40;
                if ( (*(_QWORD *)(a2 + 8LL * v14) & v17) == 0 && (!v14 || (v17 & *(_QWORD *)a2) == 0) )
                {
                  if ( (*(_BYTE *)(v8 + 37) & 4) != 0 && !v14 )
                  {
                    if ( v40 )
                    {
                      if ( (v17 & *(_QWORD *)(a2 + 8)) == 0 )
                        v18 = 1;
                    }
                    else
                    {
                      v18 = 0;
                    }
                  }
                  PpmInfoAdjustSetting(v8, a2, v14, v18, v47, a5);
                  if ( *(_QWORD *)&v48.Data1 == v31 && v43 == v46 )
                    v10 = 1;
                }
                ++v25;
              }
              while ( v25 < (unsigned __int8)PpmProfileCount );
            }
          }
LABEL_20:
          v9 = 1;
          v16 = 0;
          goto LABEL_21;
        }
        a2 = 0LL;
        if ( PpmProfileCount )
        {
          while ( 1 )
          {
            v33 = PpmProfiles + 2864LL * (unsigned int)a2;
            v34 = *(_QWORD *)(v33 + 12) - *a1;
            if ( !v34 )
              v34 = *(_QWORD *)(v33 + 20) - a1[1];
            if ( !v34 )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= (unsigned __int8)PpmProfileCount )
              goto LABEL_61;
          }
          LODWORD(v45) = *(_DWORD *)(v8 + 32);
          v35 = v33 + 1392 * v5 + 40;
          v36 = v35 + *(_QWORD *)(v8 + 24) + v14 * (unsigned int)v45;
          if ( (*(_BYTE *)(v8 + 37) & 4) != 0 && !v14 && (v17 & *(_QWORD *)(v35 + 8)) == 0 )
            v18 = 1;
          v37 = PpmInfoAdjustSetting(v8, v35, v14, v18, v47, a5);
          v39 = v14;
          *(_QWORD *)(v35 + 8LL * v14) |= v17;
          if ( v37 )
          {
            LOBYTE(v38) = v14;
            LOBYTE(v39) = *(_BYTE *)(v33 + 8);
            PpmEventTraceProfileSetting(v39, *(_QWORD *)v8, *(_QWORD *)(v8 + 8), v38, v36, v45, a3, 0);
            if ( *(_QWORD *)&v48.Data1 == v33 )
              v10 = v43 == a3;
          }
          goto LABEL_20;
        }
LABEL_61:
        v16 = -1073741275;
LABEL_23:
        PpmInfoReleaseLocks(v8, a2);
        return v16;
      }
      LOBYTE(a4) = a4 + 1;
      ++v14;
      v48.Data4[7] = a4;
    }
    while ( v14 < v13 );
    ++v11;
    v12 += 5;
    if ( v11 < 0x2A )
      continue;
    return (unsigned int)-1073741275;
  }
}
