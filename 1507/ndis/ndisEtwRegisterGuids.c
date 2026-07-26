/*
 * XREFs of ndisEtwRegisterGuids @ 0x1C00B1AC8
 * Callers:
 *     ndisDriverSystemDispatch @ 0x1C00B1A30 (ndisDriverSystemDispatch.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 */

__int64 __fastcall ndisEtwRegisterGuids(char *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int8 v6; // r14
  int Length; // esi
  unsigned int v8; // ebp
  GUID v9; // xmm0
  char *v10; // rcx
  __int64 result; // rax

  v6 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_(0x4Eu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
    v6 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  if ( !a3 || !a1 || a2 < 4 )
    return 3221225485LL;
  Length = ndisRegistryPath.Length;
  *a3 = 0;
  v8 = Length + 90;
  if ( Length + 90 > a2 )
  {
    *(_DWORD *)a1 = v8;
    result = 3221225507LL;
    *a3 = 4;
  }
  else
  {
    memset(a1, 0, v8);
    *(_DWORD *)a1 = v8;
    *((_DWORD *)a1 + 3) = Length + 58;
    *((_DWORD *)a1 + 4) = 1;
    *((_DWORD *)a1 + 2) = 56;
    v9 = ndisControlGuid;
    *((_DWORD *)a1 + 10) |= 0x81000u;
    *((_DWORD *)a1 + 11) = 0;
    *((_QWORD *)a1 + 6) = 0LL;
    *(GUID *)(a1 + 24) = v9;
    *((_WORD *)a1 + 28) = ndisRegistryPath.Length;
    memmove(a1 + 58, ndisRegistryPath.Buffer, ndisRegistryPath.Length);
    v10 = &a1[*((unsigned int *)a1 + 3)];
    *a3 = v8;
    *(_WORD *)v10 = 30;
    *(_OWORD *)(v10 + 2) = *(_OWORD *)L"MofResourceName";
    *(_QWORD *)(v10 + 18) = *(_QWORD *)L"rceName";
    *(_DWORD *)(v10 + 26) = *(_DWORD *)L"ame";
    *((_WORD *)v10 + 15) = aMofresourcenam[14];
    if ( v6 >= 4u )
      WPP_SF_d(0x4Fu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, 0);
    return 0LL;
  }
  return result;
}
