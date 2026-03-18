/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1400117B0
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140012840 (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140011858 (KeQueryEffectiveBasePriorityThread.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400D48F4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 */

int __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v3; // esi
  unsigned __int64 v4; // rcx
  int v5; // ebx
  int result; // eax
  unsigned int v7; // r11d
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 5504);
  if ( v1 < 0x80 )
  {
    v5 = 0;
    v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( v1 < 0x400 )
    {
      v5 = 1;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 5744);
      if ( v4 >= v1 + 0x4000 )
        v5 = (v4 < v1 + 0x4000 + v1) + 2;
      else
        v5 = 4;
    }
  }
  result = KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1072));
  if ( result != v7 )
    result = KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1072), v7);
  if ( v3 )
    result = KeSetEvent((PRKEVENT)(a1 + 1080), 0, 0);
  if ( dword_140352D10 != v5 || v5 <= 0 )
  {
    dword_140352D10 = v5;
    _InterlockedOr(v8, 0);
    return SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(&SmGlobals, (unsigned int)v5);
  }
  return result;
}
