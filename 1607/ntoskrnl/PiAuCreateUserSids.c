/*
 * XREFs of PiAuCreateUserSids @ 0x1407B3580
 * Callers:
 *     PiAuCreateSecurityObjects @ 0x1407B3320 (PiAuCreateSecurityObjects.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     PiAuAllocateAndInitializeSid @ 0x140571DBC (PiAuAllocateAndInitializeSid.c)
 */

__int64 __fastcall PiAuCreateUserSids(PVOID *a1)
{
  int v2; // ebx
  PSID *v3; // rsi
  PSID *v4; // rsi
  PSID *v5; // rsi
  PSID *v6; // rsi
  PSID *v7; // rsi
  BOOLEAN valid; // al
  unsigned int v9; // ecx
  _SID_IDENTIFIER_AUTHORITY v11; // [rsp+40h] [rbp+20h] BYREF
  _SID_IDENTIFIER_AUTHORITY v12; // [rsp+48h] [rbp+28h] BYREF

  *(_DWORD *)v11.Value = 0;
  *(_DWORD *)v12.Value = 0;
  *(_WORD *)&v11.Value[4] = 1280;
  *(_WORD *)&v12.Value[4] = 256;
  memset(a1, 0, 0x38uLL);
  v2 = PiAuAllocateAndInitializeSid(a1, &v11, 1u);
  if ( v2 >= 0 )
  {
    *((_DWORD *)*a1 + 2) = 18;
    if ( !RtlValidSid(*a1) )
      return (unsigned int)-1073741595;
    v3 = a1 + 1;
    v2 = PiAuAllocateAndInitializeSid(a1 + 1, &v12, 1u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v3 + 2) = 0;
    if ( !RtlValidSid(*v3) )
      return (unsigned int)-1073741595;
    v4 = a1 + 2;
    v2 = PiAuAllocateAndInitializeSid(a1 + 2, &v11, 2u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v4 + 2) = 32;
    *((_DWORD *)*v4 + 3) = 544;
    if ( !RtlValidSid(*v4) )
      return (unsigned int)-1073741595;
    v5 = a1 + 3;
    v2 = PiAuAllocateAndInitializeSid(a1 + 3, &v11, 1u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v5 + 2) = 2;
    if ( !RtlValidSid(*v5) )
      return (unsigned int)-1073741595;
    v6 = a1 + 4;
    v2 = PiAuAllocateAndInitializeSid(a1 + 4, &v11, 2u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v6 + 2) = 32;
    *((_DWORD *)*v6 + 3) = 545;
    if ( !RtlValidSid(*v6) )
      return (unsigned int)-1073741595;
    v7 = a1 + 5;
    v2 = PiAuAllocateAndInitializeSid(a1 + 5, &v11, 1u);
    if ( v2 < 0 )
      return (unsigned int)v2;
    *((_DWORD *)*v7 + 2) = 19;
    if ( !RtlValidSid(*v7) )
      return (unsigned int)-1073741595;
    v2 = PiAuAllocateAndInitializeSid(a1 + 6, &v11, 1u);
    if ( v2 >= 0 )
    {
      *((_DWORD *)a1[6] + 2) = 20;
      valid = RtlValidSid(a1[6]);
      v9 = v2;
      if ( !valid )
        return (unsigned int)-1073741595;
      return v9;
    }
  }
  return (unsigned int)v2;
}
