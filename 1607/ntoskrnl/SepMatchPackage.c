/*
 * XREFs of SepMatchPackage @ 0x14000E138
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400616A0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140062440 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140132FC4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140136148 (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x14000E1C0 (SepCanTokenMatchAllPackageSid.c)
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 */

char __fastcall SepMatchPackage(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6, _BYTE *a7)
{
  int v9; // eax
  int v10; // ebx

  if ( *(_DWORD *)(a3 + 8) == 2 && *(_BYTE *)(a3 + 1) == 2 )
  {
    v9 = *(_DWORD *)(a3 + 12);
    if ( v9 != 1 )
    {
      if ( v9 != 2 )
        return v9;
      v10 = a4 & a2;
      goto LABEL_7;
    }
    LOBYTE(v9) = SepCanTokenMatchAllPackageSid();
  }
  else
  {
    LOBYTE(v9) = (_BYTE)a7;
    *a7 = 1;
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) == 0 )
      return v9;
    LOBYTE(v9) = RtlEqualSid(*(PSID *)(a1 + 784), (PSID)a3);
  }
  if ( (_BYTE)v9 )
  {
    v10 = a4 & a2;
LABEL_7:
    *a6 |= v10;
    LOBYTE(v9) = (_BYTE)a5;
    *a5 = 1;
  }
  return v9;
}
