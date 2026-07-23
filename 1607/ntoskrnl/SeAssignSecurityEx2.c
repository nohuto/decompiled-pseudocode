/*
 * XREFs of SeAssignSecurityEx2 @ 0x140012B10
 * Callers:
 *     ObpAssignSecurity @ 0x14041E8D0 (ObpAssignSecurity.c)
 *     SeAssignSecurityEx @ 0x1404BE6A4 (SeAssignSecurityEx.c)
 * Callees:
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall SeAssignSecurityEx2(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9)
{
  int v10; // ecx
  __int64 *v11; // r9
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = a4;
  if ( a7 && *a7 != 8 )
    return 3221225485LL;
  if ( a4 )
  {
    v10 = 1;
    v11 = &v13;
  }
  else
  {
    v10 = 0;
    LODWORD(v11) = 0;
  }
  return RtlpNewSecurityObject(a1, a2, a3, (_DWORD)v11, v10, a5, a6, a8, a9, (__int64)a7);
}
