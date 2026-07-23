/*
 * XREFs of PpvUtilIsHardwareBeingVerified @ 0x140701868
 * Callers:
 *     VfIsVerificationEnabled @ 0x140131F40 (VfIsVerificationEnabled.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpvUtilIsHardwareBeingVerified(__int64 a1)
{
  __int64 v1; // rcx

  return a1
      && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0
      && (*(_DWORD *)(v1 + 396) & 0x20000) == 0
      && (*(_DWORD *)(v1 + 396) & 0x8000) != 0;
}
