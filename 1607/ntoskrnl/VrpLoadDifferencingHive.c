/*
 * XREFs of VrpLoadDifferencingHive @ 0x140617528
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140613AAC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140613D24 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140617004 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x140617050 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140617090 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14061736C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x1406174EC (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpLockDiffHiveEntry @ 0x1406177D0 (VrpLockDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406178F4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpUnlockDiffHiveEntry @ 0x140617A40 (VrpUnlockDiffHiveEntry.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617ADC (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        PCUNICODE_STRING String1,
        const void **a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v9; // r15
  HANDLE v10; // r14
  int DifferencingKey; // edi
  int DiffHiveEntryForMountPoint; // eax
  _DWORD *v13; // rbx
  char v14; // si
  unsigned int i; // edi
  HANDLE v16; // rax
  int v18; // [rsp+40h] [rbp-C8h]
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES v23; // [rsp+B0h] [rbp-58h] BYREF
  int v24; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-20h]
  const void **v26; // [rsp+F0h] [rbp-18h]
  int v27; // [rsp+F8h] [rbp-10h]
  __int128 v28; // [rsp+100h] [rbp-8h]
  int v29; // [rsp+110h] [rbp+8h] BYREF
  __int64 v30; // [rsp+118h] [rbp+10h]
  PCUNICODE_STRING v31; // [rsp+120h] [rbp+18h]
  int v32; // [rsp+128h] [rbp+20h]
  __int128 v33; // [rsp+130h] [rbp+28h]

  v9 = 0;
  P = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( !a6 )
  {
LABEL_6:
    DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(String1, a2, (__int64 *)&P);
    v13 = P;
    DifferencingKey = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_31;
    VrpLockDiffHiveEntry(P);
    VrpIncrementDiffHiveEntryHardRefCount((__int64)v13);
    v14 = 1;
    if ( (v13[14] & 1) != 0 )
    {
      DifferencingKey = 0;
LABEL_30:
      VrpUnlockDiffHiveEntry(v13);
LABEL_31:
      if ( v13 )
        VrpDereferenceDiffHiveEntry(v13);
      goto LABEL_33;
    }
    for ( i = 0; i < 2; ++i )
    {
      if ( (v13[14] & 1) != 0 )
        break;
      v9 = VrpBecomeDiffHiveEntryTransitionOwner((__int64)v13);
      if ( v9 )
        goto LABEL_15;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(v13);
    }
    if ( (v13[14] & 1) == 0 )
    {
      DifferencingKey = v13[15];
      goto LABEL_29;
    }
LABEL_15:
    if ( (v13[14] & 1) != 0 )
    {
LABEL_25:
      DifferencingKey = 0;
      v14 = 0;
LABEL_26:
      if ( v9 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v13);
      if ( !v14 )
        goto LABEL_30;
LABEL_29:
      VrpDecrementDiffHiveEntryHardRefCount((__int64)v13);
      goto LABEL_30;
    }
    VrpUnlockDiffHiveEntry(v13);
    if ( a3->Length )
    {
      v23.Length = 48;
      v23.RootDirectory = 0LL;
      v23.Attributes = 576;
      v23.ObjectName = a3;
      *(_OWORD *)&v23.SecurityDescriptor = 0LL;
      DifferencingKey = ZwOpenKey(&Handle, 0x20019u, &v23);
      if ( DifferencingKey < 0 )
        goto LABEL_24;
      v16 = Handle;
      if ( a5 )
        v10 = Handle;
    }
    else
    {
      v16 = Handle;
    }
    v31 = String1;
    v26 = a2;
    v29 = 48;
    v32 = 576;
    v24 = 48;
    v27 = 576;
    v30 = 0LL;
    v33 = 0LL;
    v25 = 0LL;
    v28 = 0LL;
    DifferencingKey = CmLoadDifferencingKey((__int64)&v29, (__int64)&v24, a4, v10, 0LL, 0, 0LL, v18, v16, 0LL, 0);
    if ( DifferencingKey >= 0 )
      DifferencingKey = 0;
LABEL_24:
    VrpLockDiffHiveEntry(v13);
    v13[14] ^= ((DifferencingKey >= 0) ^ v13[14]) & 1;
    v13[15] = DifferencingKey;
    if ( DifferencingKey < 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DifferencingKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( DifferencingKey >= 0 )
  {
    v10 = KeyHandle;
    goto LABEL_6;
  }
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DifferencingKey;
}
