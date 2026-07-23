/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x1400ADCD4
 * Callers:
 *     RtlpLookupLowBox @ 0x140013A14 (RtlpLookupLowBox.c)
 * Callees:
 *     SeClearLearningModeObjectInformation @ 0x14000F1C0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  char v3; // bl
  unsigned int v4; // r14d
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  const WCHAR *v7; // rdx
  bool v8; // si
  char v9; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD v11[4]; // [rsp+68h] [rbp-98h] BYREF
  char v12; // [rsp+78h] [rbp-88h] BYREF
  char v13; // [rsp+7Ch] [rbp-84h] BYREF
  int v14; // [rsp+80h] [rbp-80h] BYREF
  char *v15; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v16; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  struct _LIST_ENTRY *Blink; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v21[7]; // [rsp+D0h] [rbp-30h] BYREF
  char v22; // [rsp+108h] [rbp+8h] BYREF

  v17[0] = 0LL;
  v17[1] = 0LL;
  Object = 0LL;
  Blink = 0LL;
  v11[0] = 0x20000;
  v11[1] = 196608;
  v11[2] = 0x20000;
  v11[3] = 2031616;
  memset(v21, 0, sizeof(v21));
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return 1;
  if ( !byte_14032972C )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
  v3 = 1;
  v4 = 2 * *(unsigned __int8 *)(a1 + 40) + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x6D4E7441u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    if ( RtlStringCbCopyW(v6, v4, (NTSTRSAFE_PCWSTR)(a1 + 42)) < 0 )
      v7 = L"Unable to capture ATOM name.";
    else
      v7 = v6;
  }
  else
  {
    v7 = L"Unable to Allocate space for ATOM name.";
  }
  RtlInitUnicodeString(&v16, v7);
  v21[2] = &DestinationString;
  v21[3] = &v16;
  SeSetLearningModeObjectInformation((__int64)v21);
  v15 = &v22;
  Object = (PVOID)PsReferenceEffectiveToken(
                    (unsigned int)KeGetCurrentThread(),
                    (unsigned int)&v13,
                    (unsigned int)&v9,
                    (unsigned int)&v12,
                    0LL);
  Blink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
  v8 = SeAccessCheckWithHint(
         SeAtomSd,
         0,
         (int *)v17,
         0,
         0x20000u,
         0,
         &v15,
         (__int64)v11,
         KeGetCurrentThread()->PreviousMode,
         &v10,
         &v14);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  if ( !v8 || !v10 )
    return 0;
  return v3;
}
