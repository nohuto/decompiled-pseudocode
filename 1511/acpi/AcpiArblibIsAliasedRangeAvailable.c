/*
 * XREFs of AcpiArblibIsAliasedRangeAvailable @ 0x1C00792CC
 * Callers:
 *     AcpiPortarbFindSuitableRange @ 0x1C007C980 (AcpiPortarbFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     AcpiArblibGetNextAlias @ 0x1C0079200 (AcpiArblibGetNextAlias.c)
 */

char __fastcall AcpiArblibIsAliasedRangeAvailable(__int64 a1, __int128 *a2)
{
  UCHAR AttributeAvailableMask; // r14
  __int64 v4; // rdx
  __int64 v6; // rcx
  ULONG v7; // r15d
  __int128 v8; // xmm0
  ULONGLONG v9; // rdi
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int16 v12; // r12
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  char result; // al
  __int128 v18; // [rsp+40h] [rbp-19h] BYREF
  __int128 v19; // [rsp+50h] [rbp-9h]
  __int128 v20; // [rsp+60h] [rbp+7h]
  __int128 v21; // [rsp+70h] [rbp+17h]
  __int128 v22; // [rsp+80h] [rbp+27h]
  unsigned __int8 Available; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONGLONG Start; // [rsp+D0h] [rbp+77h] BYREF

  AttributeAvailableMask = 0;
  v4 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v4 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v4 + 44) & 1) != 0 )
    AttributeAvailableMask = 1;
  v6 = *((_QWORD *)a2 + 5);
  v7 = 2;
  v8 = *a2;
  v9 = *(_QWORD *)a2;
  v10 = a2[1];
  v11 = *(_QWORD *)(v6 + 40);
  Start = *(_QWORD *)a2;
  v12 = *(_WORD *)(v11 + 4);
  v18 = v8;
  v13 = a2[2];
  v19 = v10;
  v14 = a2[3];
  v20 = v13;
  v15 = a2[4];
  v21 = v14;
  v22 = v15;
  if ( (*(_BYTE *)(v6 + 36) & 1) != 0 )
    v7 = 3;
  while ( AcpiArblibGetNextAlias(v12, v9, &Start) )
  {
    v9 = Start;
    RtlIsRangeAvailable(
      *(PRTL_RANGE_LIST *)(a1 + 48),
      Start,
      *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL) + Start - 1,
      v7,
      AttributeAvailableMask,
      *(PVOID *)(a1 + 320),
      *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 328),
      &Available);
    if ( Available != 1 )
    {
      v16 = *((_QWORD *)a2 + 5);
      *(_QWORD *)&v19 = v9;
      *((_QWORD *)&v19 + 1) = *(_QWORD *)(v16 + 16) + v9 - 1;
      result = (*(__int64 (__fastcall **)(__int64, __int128 *))(a1 + 272))(a1, &v18);
      if ( !result )
        return result;
    }
  }
  return 1;
}
