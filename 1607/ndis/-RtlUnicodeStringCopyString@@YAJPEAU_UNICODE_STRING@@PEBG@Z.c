/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00677F8
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00D7FA0 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C001F138 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C0067884 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS v3; // edx
  const wchar_t *v4; // r9
  size_t v6; // [rsp+20h] [rbp-18h]
  size_t v7; // [rsp+20h] [rbp-18h]
  ULONG v8; // [rsp+28h] [rbp-10h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF
  size_t pcchDest; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *ppszDest; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)a2;
  v3 = RtlUnicodeStringValidateDestWorker(a1, &ppszDest, &pcchDest, 0LL, v6, v8);
  if ( v3 >= 0 )
  {
    pcchNewDestLength = 0LL;
    v3 = RtlWideCharArrayCopyStringWorker(ppszDest, pcchDest, &pcchNewDestLength, v4, v7);
    a1->Length = 2 * pcchNewDestLength;
  }
  return (unsigned int)v3;
}
