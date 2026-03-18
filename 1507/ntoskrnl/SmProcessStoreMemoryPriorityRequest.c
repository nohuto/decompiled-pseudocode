/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x140547048
 * Callers:
 *     SmSetStoreInformation @ 0x140546F94 (SmSetStoreInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401286CC (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     SmRereferenceProcessObject @ 0x140128854 (SmRereferenceProcessObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(ULONG64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  __int128 *v3; // r9
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+38h] [rbp-60h]
  __int128 v10; // [rsp+40h] [rbp-58h]
  PVOID v11; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v12[48]; // [rsp+58h] [rbp-40h] BYREF

  v3 = (__int128 *)a1;
  Object = 0LL;
  v4 = 0;
  v9 = 0;
  v10 = 0uLL;
  if ( (_DWORD)a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
    }
    v10 = *v3;
    if ( (_BYTE)v10 == 1 )
    {
      if ( (v10 & 0xFFFFFE00) != 0 )
      {
        v5 = -1073741811;
      }
      else if ( (v10 & 0x100) != 0 )
      {
        v5 = SmRereferenceProcessObject(*((void **)&v10 + 1), a2, a3, &Object);
        if ( v5 >= 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process != Object )
          {
            v4 = 1;
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v12);
          }
          v11 = Object;
          v6 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140352D30, &v11, 0, 0LL);
          if ( v6 )
          {
            v5 = SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(SmGlobals[22 * (*(_WORD *)(v6 + 16) & 0x1F)], 1);
            if ( v5 >= 0 )
            {
              KiSetTimerEx((__int64)&unk_140352C10, 0LL, 300000, 0, (__int64)&unk_140352C50);
              v5 = 0;
            }
          }
          else
          {
            v5 = -1073741632;
          }
        }
      }
      else
      {
        v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741735;
    }
  }
  else
  {
    v5 = -1073741306;
  }
  if ( v4 )
    KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
