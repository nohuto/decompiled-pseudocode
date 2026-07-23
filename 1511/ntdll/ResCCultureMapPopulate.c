/*
 * XREFs of ResCCultureMapPopulate @ 0x1800FAEC0
 * Callers:
 *     ResCCultureMapCreateAndPopulate @ 0x1800FAE20 (ResCCultureMapCreateAndPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall ResCCultureMapPopulate(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ecx
  LONG v6; // ecx
  __int64 result; // rax
  __int64 v8; // rdx

  if ( *(_QWORD *)a2 != 0x4C554343534552LL || *(_DWORD *)(a2 + 8) || a3 - 1 <= 0x1E )
  {
    v6 = 13;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 12);
    if ( v5 && *(_DWORD *)(a2 + 20) <= v5 && (!a3 || a3 >= 2 * (*(_DWORD *)(a2 + 16) + 4 * (v5 + 4))) )
    {
      a1[1] = a2;
      result = 1LL;
      v8 = a2 + 32;
      a1[2] = v8;
      a1[3] = v8 + 8LL * *(unsigned int *)(a2 + 12);
      return result;
    }
    v6 = 24;
  }
  RtlSetLastWin32Error(v6);
  return 0LL;
}
