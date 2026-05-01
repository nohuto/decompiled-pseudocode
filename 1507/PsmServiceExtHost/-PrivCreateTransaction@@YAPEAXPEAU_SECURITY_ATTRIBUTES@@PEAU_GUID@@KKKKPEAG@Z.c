/*
 * XREFs of ?PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z @ 0x180046300
 * Callers:
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PrivCreateTransaction(struct _SECURITY_ATTRIBUTES *a1, struct _GUID *a2)
{
  NTSTATUS v2; // eax
  DWORD v3; // ecx
  DWORD v5; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1h] BYREF
  int v7; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v8; // [rsp+68h] [rbp+17h]
  __int64 v9; // [rsp+70h] [rbp+1Fh]
  int v10; // [rsp+78h] [rbp+27h]
  __int128 v11; // [rsp+80h] [rbp+2Fh]
  __int64 v12; // [rsp+A8h] [rbp+57h] BYREF

  v12 = -1LL;
  v7 = 48;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v8 = 0LL;
  v10 = 0;
  v9 = 0LL;
  v11 = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, L"SerializeToPermanentStore Transaction");
  v2 = NtCreateTransaction(&v12, 2031679LL, &v7, 0LL, 0LL, 0, 0, 0, 0LL, &DestinationString);
  if ( v2 < 0 )
  {
    v5 = RtlNtStatusToDosError(v2);
    SetLastError(v5);
    return -1LL;
  }
  else
  {
    if ( v2 == 0x40000000 )
      v3 = 183;
    else
      v3 = 0;
    SetLastError(v3);
    return v12;
  }
}
