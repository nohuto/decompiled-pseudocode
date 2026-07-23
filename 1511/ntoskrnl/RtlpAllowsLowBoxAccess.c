/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x14009A1E4
 * Callers:
 *     RtlpLookupLowBox @ 0x140099F58 (RtlpLookupLowBox.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140043230 (SeClearLearningModeObjectInformation.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
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
  char *v12; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v13; // [rsp+80h] [rbp-80h] BYREF
  char v14; // [rsp+90h] [rbp-70h] BYREF
  NTSTATUS v15; // [rsp+94h] [rbp-6Ch] BYREF
  _QWORD v16[2]; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h]
  struct _LIST_ENTRY *Blink; // [rsp+B0h] [rbp-50h]
  char v19; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v21[7]; // [rsp+D0h] [rbp-30h] BYREF
  char v22; // [rsp+108h] [rbp+8h] BYREF

  v16[0] = 0LL;
  memset(v21, 0, sizeof(v21));
  v16[1] = 0LL;
  Object = 0LL;
  Blink = 0LL;
  v11[0] = 0x20000;
  v11[1] = 196608;
  v11[2] = 0x20000;
  v11[3] = 2031616;
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return 1;
  if ( !byte_140306784 )
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
  RtlInitUnicodeString(&v13, v7);
  v21[2] = &DestinationString;
  v21[3] = &v13;
  SeSetLearningModeObjectInformation((__int64)v21);
  v12 = &v22;
  Object = (PVOID)PsReferenceEffectiveToken(
                    (unsigned int)KeGetCurrentThread(),
                    (unsigned int)&v14,
                    (unsigned int)&v9,
                    (unsigned int)&v19,
                    0LL);
  Blink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
  v8 = SeAccessCheckWithHint(
         SeAtomSd,
         0,
         (int *)v16,
         0,
         0x20000u,
         0,
         &v12,
         (__int64)v11,
         KeGetCurrentThread()->PreviousMode,
         &v10,
         &v15);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  if ( !v8 || !v10 )
    return 0;
  return v3;
}
