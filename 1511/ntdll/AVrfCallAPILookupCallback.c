/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800CDE10
 * Callers:
 *     LdrpResolveDelayloadAddress @ 0x1800323F0 (LdrpResolveDelayloadAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x18003F040 (LdrpFindLoadedDllByAddress.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800EA1DC (RtlGuardGrantSuppressedCallAccess.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v7; // ebp
  __int64 v9; // rdi
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = a4;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, (char *)v15, 0LL, a4) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( v15[0] != LdrpNtDllDataTableEntry && (*(_DWORD *)(v15[0] + 104) & 0x400) == 0 )
      v9 = *(_QWORD *)(v15[0] + 48);
    LdrpDereferenceModule(v15[0], v10, v11, v12);
  }
  if ( v9 )
  {
    v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                         AvrfpAPILookupCallbackRoutine,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            v7);
    if ( v13 != a3 )
      RtlGuardGrantSuppressedCallAccess(a3, v15);
    *a5 = v13;
  }
  else
  {
    *a5 = a3;
  }
  return 0LL;
}
