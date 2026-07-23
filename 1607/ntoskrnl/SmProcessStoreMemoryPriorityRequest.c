/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x1403E47D4
 * Callers:
 *     SmSetStoreInformation @ 0x1403E472C (SmSetStoreInformation.c)
 * Callees:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001F74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     SmRereferenceProcessObject @ 0x1400020F0 (SmRereferenceProcessObject.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  __int128 *v3; // r9
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  __int64 *v7; // rax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+38h] [rbp-60h]
  __int128 v11; // [rsp+40h] [rbp-58h]
  PVOID v12; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v13[48]; // [rsp+58h] [rbp-40h] BYREF

  v3 = (__int128 *)a1;
  Object = 0LL;
  v4 = 0;
  v10 = 0;
  v11 = 0uLL;
  if ( (_DWORD)a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
    }
    v11 = *v3;
    if ( (_BYTE)v11 == 1 )
    {
      if ( (v11 & 0xFFFFFE00) != 0 )
      {
        v5 = -1073741811;
      }
      else if ( (v11 & 0x100) != 0 )
      {
        v5 = SmRereferenceProcessObject(*((void **)&v11 + 1), a2, a3, &Object);
        if ( v5 >= 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process != Object )
          {
            v4 = 1;
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v13);
          }
          v12 = Object;
          v6 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403BF150, &v12, 0, 0);
          if ( v6 )
          {
            v7 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v6 + 16) & 0x3FF);
            v5 = SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(*v7, 1);
            if ( v5 >= 0 )
            {
              KiSetTimerEx((__int64)&unk_1403BF020, 0LL, 300000, 0, (__int64)&unk_1403BF060);
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
    KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
