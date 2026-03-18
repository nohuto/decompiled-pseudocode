/*
 * XREFs of SmProcessCreateRequest @ 0x1404D185C
 * Callers:
 *     SmSetStoreInformation @ 0x1404ACFC0 (SmSetStoreInformation.c)
 *     SmpDirtyStoreCreate @ 0x1404D1658 (SmpDirtyStoreCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAlloc @ 0x1400F85A0 (SmAlloc.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F85B0 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400F9010 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SmKmStoreDelete @ 0x1404D1364 (SmKmStoreDelete.c)
 *     SmKmStoreCreatePrepare @ 0x1404D175C (SmKmStoreCreatePrepare.c)
 *     SmpUpdateCacheStatsBucketIndex @ 0x1404D1B8C (SmpUpdateCacheStatsBucketIndex.c)
 *     SmKmStoreAdd @ 0x1404D1C00 (SmKmStoreAdd.c)
 *     SmFirstTimeInit @ 0x1404D1E70 (SmFirstTimeInit.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCreateRequest(__int64 a1, ULONG64 a2, int a3, char a4)
{
  __int64 v8; // rdi
  int v9; // esi
  _BYTE *v10; // rcx
  int TimeInit; // ebx
  int *v12; // rbx
  int v13; // ecx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-148h] BYREF
  __int128 v19; // [rsp+20h] [rbp-128h]
  __int64 v20; // [rsp+30h] [rbp-118h]
  PPRIVILEGE_SET Privileges; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v22[4]; // [rsp+48h] [rbp-100h] BYREF
  int *v23[7]; // [rsp+68h] [rbp-E0h] BYREF
  _OWORD v24[6]; // [rsp+A0h] [rbp-A8h] BYREF

  v20 = a1;
  v8 = 0LL;
  v19 = 0xFFFFFFFFuLL;
  v9 = -1;
  Privileges = 0LL;
  memset(v24, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    TimeInit = -1073741306;
    goto LABEL_24;
  }
  if ( a4 )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[87] = v10[87];
  }
  v24[0] = *(_OWORD *)a2;
  v24[1] = *(_OWORD *)(a2 + 16);
  v24[2] = *(_OWORD *)(a2 + 32);
  v24[3] = *(_OWORD *)(a2 + 48);
  v24[4] = *(_OWORD *)(a2 + 64);
  *(_QWORD *)&v24[5] = *(_QWORD *)(a2 + 80);
  memset(v23, 0, 0x30uLL);
  TimeInit = SmKmStoreCreatePrepare(v24, a4, &Privileges, (__int64)v23);
  if ( TimeInit >= 0 )
  {
    v12 = v23[0];
    v13 = *v23[0];
    if ( (*v23[0] & 0x400FF) != 0x40000 || (v13 & 0x300) != 0 )
      goto LABEL_36;
    if ( !(_BYTE)v13 && (v13 & 0x60000) != 0x40000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    {
      TimeInit = -1073741790;
      goto LABEL_24;
    }
    if ( !(unsigned __int8)*v12 && (*v12 & 0x40000) != 0 && (unsigned int)v12[2] > 0x20000 )
    {
LABEL_36:
      TimeInit = -1073741637;
    }
    else
    {
      v14 = (char *)SmAlloc(0x1440uLL, 0x74536D73u);
      v8 = (__int64)v14;
      if ( v14 )
      {
        SMKM_STORE<SM_TRAITS>::SmStInitialize(v14);
        v23[4] = (int *)&SmGlobals;
        *v12 |= 0x8000u;
        TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v8, v23);
        if ( TimeInit >= 0 )
        {
          TimeInit = SmFirstTimeInit(*((unsigned int *)v23[0] + 2));
          if ( TimeInit >= 0 )
          {
            memset(v22, 0, sizeof(v22));
            v22[0] = (char *)v24 + 8;
            v22[1] = *(_QWORD *)(v8 + 4664);
            LODWORD(v22[3]) = DWORD2(v24[1]);
            if ( (v24[0] & 0x200) != 0 )
              v22[2] = KeGetCurrentThread()->ApcState.Process;
            TimeInit = SmKmStoreAdd(a1, v8, v22, v8 + 4480, v19, *((_QWORD *)&v19 + 1), v20);
            if ( TimeInit >= 0 )
            {
              LODWORD(v19) = *(_DWORD *)(v8 + 4480);
              v9 = v19;
              _InterlockedOr(v18, 0);
              dword_140304FA0 = 5;
              v8 = 0LL;
              *((_QWORD *)&v19 + 1) = 0LL;
              DWORD1(v19) = 1;
              TimeInit = 0;
              *(_DWORD *)(a2 + 80) = v9;
              SmpUpdateCacheStatsBucketIndex(v16, v15);
              if ( (v24[0] & 0x100) != 0 )
                v9 = -1;
            }
          }
        }
      }
      else
      {
        TimeInit = -1073741670;
      }
    }
  }
LABEL_24:
  if ( v9 != -1 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (v9 & 0x1F) + a1 + 8));
  if ( v8 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v8);
    MiDeleteSubsection((PPRIVILEGE_SET)v8);
  }
  if ( Privileges )
    MiDeleteSubsection(Privileges);
  return (unsigned int)TimeInit;
}
