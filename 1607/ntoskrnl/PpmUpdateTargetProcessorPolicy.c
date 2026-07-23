/*
 * XREFs of PpmUpdateTargetProcessorPolicy @ 0x14020519C
 * Callers:
 *     PpmUpdateProcessorPolicyCallback @ 0x140131620 (PpmUpdateProcessorPolicyCallback.c)
 *     PpmUpdateProcessorPolicy @ 0x140545A2C (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     PpmEventAutonomousModeChange @ 0x14020B7F8 (PpmEventAutonomousModeChange.c)
 */

__int64 __fastcall PpmUpdateTargetProcessorPolicy(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v7)(__int64, _QWORD); // r8
  __int64 result; // rax
  __int64 (__fastcall *v11)(__int64, _QWORD); // r8
  __int64 (__fastcall *v12)(__int64, _QWORD); // r8
  __int64 (__fastcall *v13)(__int64, _QWORD); // r8
  __int64 (__fastcall *v14)(__int64, _QWORD); // r8
  __int64 (__fastcall *v15)(__int64, _QWORD); // r8

  v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 224);
  if ( v7 )
  {
    result = (unsigned int)*a3;
    if ( (result & 0x80u) != 0LL )
      result = v7(a2, *(unsigned int *)(a4 + 44));
  }
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 232);
  if ( v11 && (*a3 & 0x100) != 0 )
    result = v11(a2, *(unsigned int *)(a4 + 48));
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 240);
  if ( v12 )
  {
    result = (unsigned int)*a3;
    if ( (result & 0x40) != 0 )
      result = v12(a2, *(unsigned int *)(a4 + 56));
  }
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 248);
  if ( v13 && (PpmAllowedActions & 0x400) != 0 )
    result = v13(a2, *(unsigned int *)(a4 + 60));
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 256);
  if ( v14 )
  {
    if ( (*a3 & 0x200) != 0 )
    {
      *(_BYTE *)(a1 + 340) = *(_BYTE *)(a4 + 64);
      result = v14(a2, *(unsigned __int8 *)(a4 + 64));
      if ( a5 )
        result = PpmEventAutonomousModeChange(a5, *(unsigned __int8 *)(a1 + 340));
    }
  }
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 216);
  if ( v15 )
  {
    if ( (*a3 & 0x800) != 0 )
      return v15(a2, (unsigned int)PpmPerfTimeWindow);
  }
  return result;
}
