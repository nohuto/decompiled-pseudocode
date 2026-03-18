/*
 * XREFs of RtlpSameFunction @ 0x1401609E0
 * Callers:
 *     RtlpVirtualUnwind @ 0x14001B25C (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x14001BBB0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14001D740 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x14012E39C (RtlVirtualUnwind.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x14001D0C0 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001F200 (RtlpLookupFunctionEntryForStackWalks.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

_DWORD *__fastcall RtlpSameFunction(_DWORD *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v3; // esi
  PVOID v5; // rcx
  unsigned int v6; // r9d
  _BYTE *v8; // r8
  PRUNTIME_FUNCTION v9; // rax
  unsigned __int64 v10; // r8
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v5 = MmHighestUserAddress;
  v6 = 0;
  while ( 1 )
  {
    v8 = (_BYTE *)(a2 + (unsigned int)a1[2]);
    if ( a3 <= (unsigned __int64)v5 )
    {
      if ( ((unsigned __int8)v8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = MmHighestUserAddress;
    }
    if ( (*v8 & 0x20) == 0 )
      break;
    v12 = (unsigned __int8)v8[2];
    if ( (v12 & 1) != 0 )
      ++v12;
    ++v6;
    a1 = &v8[2 * v12 + 4];
    if ( v6 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( a3 <= (unsigned __int64)v5 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v9 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v14);
    if ( !v9 )
      return 0LL;
    ImageBase = v15;
  }
  else
  {
    v9 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
  }
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    v10 = ImageBase + v9->UnwindData;
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (*(_BYTE *)v10 & 0x20) == 0 )
      break;
    v13 = *(unsigned __int8 *)(v10 + 2);
    if ( (v13 & 1) != 0 )
      v13 = (unsigned int)(v13 + 1);
    ++v3;
    v9 = (PRUNTIME_FUNCTION)(v10 + 2 * (v13 + 2));
    if ( v3 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( *a1 != v9->BeginAddress )
    return 0LL;
  return a1;
}
