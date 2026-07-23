/*
 * XREFs of SmProcessCreateRequest @ 0x1403E517C
 * Callers:
 *     SmSetStoreInformation @ 0x1403E472C (SmSetStoreInformation.c)
 *     SmpDirtyStoreCreate @ 0x1403E4C3C (SmpDirtyStoreCreate.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400022E0 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004B28 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmKmStoreCreatePrepare @ 0x1403E4D40 (SmKmStoreCreatePrepare.c)
 *     SmFirstTimeInit @ 0x1403E4E40 (SmFirstTimeInit.c)
 *     SmKmStoreAdd @ 0x1403E54A4 (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x1403E57A0 (SmKmStoreDelete.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCreateRequest(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  unsigned __int64 v4; // rbp
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // rcx
  int Prepare; // ebx
  int *v13; // r14
  int v14; // ecx
  PVOID v15; // rax
  int *v16; // r14
  struct _PRIVILEGE_SET *v17; // rcx
  signed __int32 v19[16]; // [rsp+0h] [rbp-40h] BYREF
  int v20; // [rsp+40h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 16) = a1;
  v9 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 0;
  v10 = -1;
  *(_DWORD *)(v4 + 4) = -1;
  *(_QWORD *)(v4 + 24) = 0LL;
  memset((void *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 128), 0, 0x58uLL);
  if ( a3 != 88 )
  {
    Prepare = -1073741306;
    goto LABEL_23;
  }
  if ( a4 )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 87) = *(_BYTE *)(v11 + 87);
  }
  *(_OWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = *(_OWORD *)a2;
  *(_OWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = *(_QWORD *)(a2 + 80);
  memset((void *)(v4 + 64), 0, 0x40uLL);
  Prepare = SmKmStoreCreatePrepare((_DWORD *)(v4 + 128), a4, (_QWORD *)(v4 + 24), v4 + 64);
  if ( Prepare >= 0 )
  {
    v13 = *(int **)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    v14 = *v13;
    if ( (*v13 & 0x400FF) != 0x40000 || (v14 & 0x300) != 0 )
      goto LABEL_35;
    if ( !(_BYTE)v14 && (v14 & 0x60000) != 0x40000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    {
      Prepare = -1073741790;
      goto LABEL_23;
    }
    if ( (*v13 & 0x400FF) == 0x40000 && (unsigned int)v13[2] > 0x20000 )
    {
LABEL_35:
      Prepare = -1073741637;
    }
    else
    {
      v15 = SmAlloc(0x19B0uLL, 0x74536D73u);
      v9 = (__int64)v15;
      if ( v15 )
      {
        SMKM_STORE<SM_TRAITS>::SmStInitialize((__int64)v15);
        Prepare = SmFirstTimeInit(v13[2]);
        if ( Prepare >= 0 )
        {
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = &SmGlobals;
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = qword_1403BF120;
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = qword_1403BF118;
          *v13 |= 0x8000u;
          Prepare = SMKM_STORE<SM_TRAITS>::SmStStart(v9, (int **)(v4 + 64));
          if ( Prepare >= 0 )
          {
            memset((void *)(v4 + 32), 0, 0x20uLL);
            *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = ((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 136;
            *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *(_QWORD *)(v9 + 6040);
            *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 0x98);
            if ( (*(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) & 0x200) != 0 )
              *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = KeGetCurrentThread()->ApcState.Process;
            v16 = (int *)(v9 + 5856);
            Prepare = SmKmStoreAdd(a1, v9, v4 + 32, v9 + 5856);
            if ( Prepare >= 0 )
            {
              v10 = *v16;
              *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = *v16;
              _InterlockedOr(v19, 0);
              dword_1403BF130 = 5;
              v9 = 0LL;
              *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
              *(_DWORD *)v4 = 1;
              Prepare = 0;
              *(_DWORD *)(a2 + 80) = v10;
              if ( (*(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) & 0x100) != 0 )
                v10 = -1;
            }
          }
        }
      }
      else
      {
        Prepare = -1073741670;
      }
    }
  }
LABEL_23:
  if ( v10 != -1 )
    SmKmStoreDereference(a1, v10);
  if ( v9 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v9);
    MiDeleteSubsection((PPRIVILEGE_SET)v9);
  }
  v17 = *(struct _PRIVILEGE_SET **)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( v17 )
    MiDeleteSubsection(v17);
  return (unsigned int)Prepare;
}
