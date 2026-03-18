/*
 * XREFs of SmProcessCreateRequest @ 0x1404F946C
 * Callers:
 *     SmpDirtyStoreCreate @ 0x1404F9E70 (SmpDirtyStoreCreate.c)
 *     SmSetStoreInformation @ 0x140546F94 (SmSetStoreInformation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D9054 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D96D8 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SmpUpdateCacheStatsBucketIndex @ 0x1404F9788 (SmpUpdateCacheStatsBucketIndex.c)
 *     SmKmStoreAdd @ 0x1404F97FC (SmKmStoreAdd.c)
 *     SmFirstTimeInit @ 0x1404F9AFC (SmFirstTimeInit.c)
 *     SmKmStoreCreatePrepare @ 0x1404F9DF0 (SmKmStoreCreatePrepare.c)
 *     SmKmStoreDelete @ 0x1404FA05C (SmKmStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCreateRequest(__int64 a1, ULONG64 a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // rcx
  __int64 v13; // rdx
  NTSTATUS TimeInit; // ebx
  int *v15; // rbx
  int v16; // ecx
  char *v17; // rax
  struct _EX_RUNDOWN_REF *v19; // rcx
  unsigned __int64 v20; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v22; // [rsp+20h] [rbp-128h]
  int v23; // [rsp+28h] [rbp-120h]
  int v24; // [rsp+2Ch] [rbp-11Ch]
  __int64 v25; // [rsp+30h] [rbp-118h]
  PPRIVILEGE_SET v26; // [rsp+40h] [rbp-108h]
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v28[4]; // [rsp+50h] [rbp-F8h] BYREF
  int *v29[6]; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v30[6]; // [rsp+A0h] [rbp-A8h] BYREF

  v22 = a1;
  v25 = a1;
  v7 = 0LL;
  v26 = 0LL;
  v8 = -1;
  v23 = -1;
  Privileges = 0LL;
  memset(v30, 0, 0x58uLL);
  if ( a3 == 88 )
  {
    if ( a4 )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v12 = (_BYTE *)MmUserProbeAddress;
      *v12 = *v12;
      v12[87] = v12[87];
    }
    v30[0] = *(_OWORD *)a2;
    v30[1] = *(_OWORD *)(a2 + 16);
    v30[2] = *(_OWORD *)(a2 + 32);
    v30[3] = *(_OWORD *)(a2 + 48);
    v30[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v30[5] = *(_QWORD *)(a2 + 80);
    memset(v29, 0, sizeof(v29));
    LOBYTE(v13) = a4;
    TimeInit = SmKmStoreCreatePrepare(v30, v13, &Privileges, v29);
    if ( TimeInit >= 0 )
    {
      v15 = v29[0];
      v16 = *v29[0];
      v9 = 0x40000LL;
      if ( (*v29[0] & 0x400FF) != 0x40000 || (v16 & 0x300) != 0 )
      {
        TimeInit = -1073741637;
      }
      else if ( (_BYTE)v16 || (v16 & 0x60000) == 0x40000 || SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
      {
        v17 = (char *)SmAlloc(0x1430uLL, 0x74536D73u);
        v7 = (__int64)v17;
        if ( v17 )
        {
          SMKM_STORE<SM_TRAITS>::SmStInitialize(v17);
          v29[4] = (int *)SmGlobals;
          *v15 |= 0x8000u;
          TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v7, v29);
          if ( TimeInit >= 0 )
          {
            TimeInit = SmFirstTimeInit(*((unsigned int *)v29[0] + 2));
            if ( TimeInit >= 0 )
            {
              memset(v28, 0, sizeof(v28));
              v28[0] = (char *)v30 + 8;
              v28[1] = *(_QWORD *)(v7 + 4664);
              LODWORD(v28[3]) = DWORD2(v30[1]);
              if ( (v30[0] & 0x200) != 0 )
                v28[2] = KeGetCurrentThread()->ApcState.Process;
              TimeInit = SmKmStoreAdd(v22, v7, v28, v7 + 4480);
              if ( TimeInit >= 0 )
              {
                v23 = *(_DWORD *)(v7 + 4480);
                v8 = v23;
                _InterlockedOr(v21, 0);
                dword_140352D10 = 5;
                v7 = 0LL;
                v26 = 0LL;
                v24 = 1;
                TimeInit = 0;
                *(_DWORD *)(a2 + 80) = v8;
                SmpUpdateCacheStatsBucketIndex();
                if ( (v30[0] & 0x100) != 0 )
                  v8 = -1;
              }
            }
          }
        }
        else
        {
          TimeInit = -1073741670;
        }
      }
      else
      {
        TimeInit = -1073741790;
      }
    }
  }
  else
  {
    TimeInit = -1073741306;
  }
  if ( v8 != -1 )
  {
    v19 = (struct _EX_RUNDOWN_REF *)(v22 + 176LL * (v8 & 0x1F) + 8);
    _m_prefetchw(v19);
    v20 = v19->Count & 0xFFFFFFFFFFFFFFFEuLL;
    v9 = v20 - 2;
    if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v19, v20 - 2, v20) )
      ExfReleaseRundownProtection(v19);
  }
  if ( v7 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v7, v9, v10, v11);
    ExFreePoolEx((PPRIVILEGE_SET)v7);
  }
  if ( Privileges )
    ExFreePoolEx(Privileges);
  return (unsigned int)TimeInit;
}
