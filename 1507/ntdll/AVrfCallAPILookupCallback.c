/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800C4AE0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x180016A40 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x180069F00 (LdrpFindLoadedDllByAddress.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800E5708 (RtlGuardGrantSuppressedCallAccess.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v7; // ebp
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = a4;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, (char *)v12, 0LL, a4) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( v12[0] != LdrpNtDllDataTableEntry && (*(_DWORD *)(v12[0] + 104) & 0x400) == 0 )
      v9 = *(_QWORD *)(v12[0] + 48);
    LdrpDereferenceModule(v12[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                         AvrfpAPILookupCallbackRoutine,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            v7);
    if ( v10 != a3 )
      RtlGuardGrantSuppressedCallAccess(a3, v12);
    *a5 = v10;
  }
  else
  {
    *a5 = a3;
  }
  return 0LL;
}
