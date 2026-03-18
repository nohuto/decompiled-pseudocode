/*
 * XREFs of OSInterface @ 0x1C0020770
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C000D340 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _stricmp_0 @ 0x1C0024CC8 (_stricmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OSInterface(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  const char **v5; // r14
  unsigned int v6; // ebx
  const char *v7; // r15
  bool v8; // al
  bool v9; // cf
  _QWORD v11[14]; // [rsp+28h] [rbp-49h] BYREF

  v11[0] = "Windows 2000";
  v11[1] = "Windows 2001";
  v3 = *(_QWORD *)(a2 + 80);
  v11[2] = "Windows 2001 SP1";
  v11[3] = "Windows 2001.1";
  v11[4] = "Windows 2001 SP2";
  v11[5] = "Windows 2001.1 SP1";
  v11[6] = "Windows 2006";
  v11[7] = "Windows 2006 SP1";
  v11[8] = "Windows 2006.1";
  v11[9] = "Windows 2009";
  v11[10] = "Windows 2012";
  v11[11] = "Windows 2013";
  v11[12] = "Windows 2015";
  v4 = ValidateArgTypes(v3, 0, (__int64)"A");
  if ( !v4 )
  {
    v4 = ValidateArgTypes(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, (__int64)"Z");
    if ( !v4 )
    {
      v5 = (const char **)v11;
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      v6 = 0;
      v7 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) + 32LL);
      while ( stricmp_0(*v5, v7) )
      {
        ++v6;
        ++v5;
        if ( v6 >= 0xD )
          goto LABEL_9;
      }
      v8 = IsCompatableDSDTRevision();
      v4 = 0;
      v9 = gdwHighestOSVerQueried < v6;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v8 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      if ( v9 )
        gdwHighestOSVerQueried = v6;
LABEL_9:
      if ( ghCheckOsiString && (int)ghCheckOsiString(v7) >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                                 + 0xFFFFFFFF;
        return 0;
      }
    }
  }
  return v4;
}
