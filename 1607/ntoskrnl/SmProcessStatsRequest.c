/*
 * XREFs of SmProcessStatsRequest @ 0x140696D50
 * Callers:
 *     SmQueryStoreInformation @ 0x1403E4980 (SmQueryStoreInformation.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MmSizeOfMdl @ 0x1400883D0 (MmSizeOfMdl.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x14021D350 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStatsRequest(__int64 a1, _OWORD *a2, int a3, _DWORD *a4, KPROCESSOR_MODE PreviousMode)
{
  struct _MDL *v7; // rsi
  struct _PRIVILEGE_SET *v8; // r14
  int v9; // r12d
  int v10; // ebx
  unsigned __int8 v11; // r15^1
  unsigned int v12; // eax
  struct _PRIVILEGE_SET *v13; // rax
  PVOID Base[2]; // [rsp+40h] [rbp-68h]
  _DWORD v16[4]; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Object[3]; // [rsp+60h] [rbp-48h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  KeInitializeEvent(Object, NotificationEvent, 0);
  if ( a3 == 16 )
  {
    if ( PreviousMode && ((unsigned __int8)a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)Base = *a2;
    v11 = BYTE1(*a2);
    if ( LOBYTE(Base[0]) == 2 && v11 < 4u )
    {
      if ( v11 <= 1u || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
      {
        if ( (!HIDWORD(Base[0])
           || (v12 = MmSizeOfMdl(Base[1], HIDWORD(Base[0])), (v7 = (struct _MDL *)SmAlloc(v12, 0x444D6D73u)) != 0LL))
          && (v13 = (struct _PRIVILEGE_SET *)SmAlloc(0x28uLL, 0x69576D73u), (v8 = v13) != 0LL) )
        {
          memset(v13, 0, 0x28uLL);
          if ( HIDWORD(Base[0]) )
          {
            v7->Next = 0LL;
            v7->Size = 8 * (((((__int64)Base[1] & 0xFFF) + (unsigned __int64)HIDWORD(Base[0]) + 4095) >> 12) + 6);
            v7->MdlFlags = 0;
            v7->StartVa = (PVOID)((unsigned __int64)Base[1] & 0xFFFFFFFFFFFFF000uLL);
            v7->ByteOffset = (__int64)Base[1] & 0xFFF;
            v7->ByteCount = HIDWORD(Base[0]);
            v9 = 1;
            MmProbeAndLockPages(v7, PreviousMode, IoWriteAccess);
          }
          v8->PrivilegeCount = v8->PrivilegeCount & 0xFFFFFFF8 | 3;
          v8->Privilege[0].Luid.LowPart = v11;
          v8->Privilege[0].Luid.HighPart = HIDWORD(Base[0]);
          *(_QWORD *)&v8->Privilege[0].Attributes = v7;
          v10 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(
                  (__int64)&SmGlobals,
                  HIWORD(LODWORD(Base[0])),
                  (int)v8,
                  (int)Object,
                  (__int64)v16);
          if ( v10 >= 0 )
          {
            v8 = 0LL;
            KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
            v10 = v16[0];
            *a4 = v16[2];
          }
        }
        else
        {
          v10 = -1073741670;
        }
      }
      else
      {
        v10 = -1073741790;
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741306;
  }
  if ( v8 )
    MiDeleteSubsection(v8);
  if ( v9 )
    MmUnlockPages(v7);
  if ( v7 )
    MiDeleteSubsection((PPRIVILEGE_SET)v7);
  return (unsigned int)v10;
}
