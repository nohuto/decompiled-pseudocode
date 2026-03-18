/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x1404AD068
 * Callers:
 *     SmSetStoreInformation @ 0x1404ACFC0 (SmSetStoreInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     SmRereferenceProcessObject @ 0x1400E787C (SmRereferenceProcessObject.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1400E7988 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  $D4FCF91253F76F57393CBFE908971F67 v12; // [rsp+58h] [rbp-40h] BYREF

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
            KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v12);
          }
          v11 = Object;
          v6 = SmpKeyedStoreEntryGet((__int64)&qword_140304FC0, &v11, 0, 0);
          if ( v6 )
          {
            v5 = SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(
                   *((_QWORD *)&SmGlobals + 22 * (*(_WORD *)(v6 + 16) & 0x1F)),
                   1);
            if ( v5 >= 0 )
            {
              KiSetTimerEx((__int64)&unk_140304EA0, 0LL, 300000LL, 0, (unsigned __int64)&unk_140304EE0);
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
    KiUnstackDetachProcess(&v12, 0LL);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
