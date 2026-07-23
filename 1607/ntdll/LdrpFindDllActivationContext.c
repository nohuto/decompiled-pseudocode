/*
 * XREFs of LdrpFindDllActivationContext @ 0x180076FA8
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x18003B780 (RtlReleaseActivationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindDllActivationContext(_QWORD *a1)
{
  int v2; // ebx
  struct _PEB *v3; // rax
  _WORD *v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  _ACTIVATION_CONTEXT *v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( LdrpManifestProberRoutine )
  {
    v3 = NtCurrentPeb();
    if ( a1 != (_QWORD *)LdrpImageEntry || !v3->ActivationContextData )
    {
      v4 = (_WORD *)a1[10];
      if ( a1 == (_QWORD *)LdrpImageEntry
        && *v4 == 92
        && v4[1] == 63
        && v4[2] == 63
        && v4[3] == 92
        && v4[4]
        && v4[5] == 58
        && v4[6] == 92 )
      {
        v4 += 4;
      }
      v5 = ((__int64 (__fastcall *)(_QWORD, _WORD *, __int64 *))LdrpManifestProberRoutine)(a1[6], v4, &v9);
      v2 = v5;
      if ( (unsigned int)(v5 + 1073741687) <= 2
        || v5 == -1073741637
        || v5 == -1073741809
        || v5 == -1073741822
        || v5 == -1073741308 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            544,
            (unsigned int)"LdrpFindDllActivationContext",
            2,
            (__int64)"Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
            a1 + 9,
            v5);
        v2 = 0;
      }
      v6 = v9;
      if ( v9 )
      {
        v8 = (_ACTIVATION_CONTEXT *)a1[17];
        if ( v8 )
        {
          RtlReleaseActivationContext(v8);
          v6 = v9;
        }
        a1[17] = v6;
      }
      if ( v2 < 0 )
      {
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            573,
            (unsigned int)"LdrpFindDllActivationContext",
            0,
            (__int64)"Querying the active activation context failed with status 0x%08lx\n",
            v2);
        if ( (LdrpDebugFlags & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return (unsigned int)v2;
}
