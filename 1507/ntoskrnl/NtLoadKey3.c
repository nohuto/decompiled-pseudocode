/*
 * XREFs of NtLoadKey3 @ 0x1401DF924
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  char PreviousMode; // bl
  ULONG64 ULong64; // r10
  int v13; // edx
  __int128 v14; // xmm0
  char v16; // [rsp+38h] [rbp-50h]
  int v17; // [rsp+50h] [rbp-38h]
  ULONG64 v18; // [rsp+58h] [rbp-30h]
  HANDLE Pointer; // [rsp+60h] [rbp-28h]
  HANDLE Handle; // [rsp+68h] [rbp-20h]

  Handle = 0LL;
  Pointer = 0LL;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ULong64 = 0LL;
  v18 = 0LL;
  v13 = 0;
  while ( ExtendedParameterCount )
  {
    if ( PreviousMode == 1 )
    {
      if ( ((unsigned __int8)ExtendedParameters & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v17;
      ULong64 = v18;
    }
    v14 = *(_OWORD *)&ExtendedParameters->0;
    if ( (unsigned __int8)*(_OWORD *)&ExtendedParameters->0 == 1LL )
    {
      if ( (v13 & 2) != 0 )
        return -1073741582;
      ULong64 = ExtendedParameters->ULong64;
      v18 = ULong64;
      v13 |= 2u;
    }
    else if ( (unsigned __int8)v14 == 2LL )
    {
      if ( (v13 & 4) != 0 )
        return -1073741582;
      Handle = ExtendedParameters->Pointer;
      v13 |= 4u;
    }
    else
    {
      if ( (unsigned __int8)v14 != 3LL )
        return -1073741582;
      if ( (v13 & 8) != 0 )
        return -1073741582;
      Pointer = ExtendedParameters->Pointer;
      v13 |= 8u;
    }
    v17 = v13;
    ++ExtendedParameters;
    --ExtendedParameterCount;
  }
  return CmLoadKeyHelper(
           TargetKey,
           (__int64)SourceFile,
           Flags | 0x8000,
           ULong64,
           Handle,
           DesiredAccess,
           RootHandle,
           v16,
           Pointer);
}
