/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00910A4
 * Callers:
 *     xxxClientExpandStringW @ 0x1C00904EC (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0090818 (xxxClientLoadStringW.c)
 *     SfnOUTSTRING @ 0x1C0090A30 (SfnOUTSTRING.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0108910 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientGetListboxString @ 0x1C014A8B0 (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C02068D0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0206DF0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r10
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int64 result; // rax
  ULONG v9; // r8d
  unsigned __int64 v10; // rcx
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v4 )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( ((a4 == 0) & (unsigned __int8)v6) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = v6 + v4;
    if ( v7 > W32UserProbeAddress || v7 < v6 )
      *W32UserProbeAddress = 0;
  }
  else
  {
    *W32UserProbeAddress = 0;
  }
  if ( a3 )
  {
    if ( a4 )
    {
      result = *((unsigned int *)a1 + 2);
LABEL_8:
      if ( a2 < (unsigned int)result )
        return a2;
      return result;
    }
    v10 = *((unsigned int *)a1 + 2);
    if ( 2 * (unsigned __int64)a2 < v10 )
      LODWORD(v10) = 2 * a2;
    RtlUnicodeToMultiByteSize(&BytesInUnicodeString, *((PCWCH *)a1 + 2), v10);
    return BytesInUnicodeString;
  }
  else
  {
    if ( !a4 )
    {
      result = *((_DWORD *)a1 + 2) >> 1;
      goto LABEL_8;
    }
    v9 = *((_DWORD *)a1 + 2);
    if ( a2 < v9 )
      v9 = a2;
    RtlMultiByteToUnicodeSize(&BytesInUnicodeString, *((const CHAR **)a1 + 2), v9);
    return BytesInUnicodeString >> 1;
  }
}
