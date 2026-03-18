/*
 * XREFs of ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C018CD94
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C000A308 (RtlStringCchLengthW.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall LookupDisplayDiagonal(unsigned int *a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  unsigned int v4; // esi
  wchar_t **v5; // rdi
  const wchar_t *v6; // rcx
  __int64 v7; // rcx
  size_t v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-49h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+48h] [rbp-31h]
  const wchar_t *v15; // [rsp+50h] [rbp-29h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+58h] [rbp-21h]
  int v17; // [rsp+60h] [rbp-19h]
  __int64 v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+80h] [rbp+7h]
  _BYTE v22[40]; // [rsp+88h] [rbp+Fh] BYREF
  size_t pcchLength; // [rsp+E0h] [rbp+67h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v2 + 24) = 1321LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v13 = 0LL;
  v14 = 292;
  v15 = L"PhoneManufacturerModelName";
  v17 = 16777217;
  p_UnicodeString = &UnicodeString;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  v3 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo", &v13, 0LL, 0LL);
  if ( v3 >= 0 )
  {
    if ( UnicodeString.Buffer && UnicodeString.Length )
    {
      v4 = 0;
      v5 = &off_1C0037D50;
      while ( 1 )
      {
        v6 = *v5;
        pcchLength = 0LL;
        v3 = RtlStringCchLengthW(v6, 0x800uLL, &pcchLength);
        if ( v3 < 0 )
          break;
        if ( !pcchLength )
          goto LABEL_19;
        v8 = (unsigned __int64)UnicodeString.Length >> 1;
        if ( *((_DWORD *)v5 + 2) && v8 >= pcchLength )
          v8 = pcchLength;
        if ( v8 == pcchLength && !RtlCompareUnicodeStrings(UnicodeString.Buffer, v8, *v5, v8, 1u) )
        {
          v3 = 0;
          *a1 = *((_DWORD *)&off_1C0037D50 + 4 * v4 + 3);
          goto LABEL_16;
        }
        ++v4;
        v5 += 2;
        if ( v4 >= 0x52 )
          goto LABEL_15;
      }
      v10 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v10 + 24) = 1361LL;
      WdLogEvent5_WdAssertion(v10);
      if ( pcchLength )
        goto LABEL_16;
LABEL_19:
      v11 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v11 + 24) = 1362LL;
      WdLogEvent5_WdAssertion(v11);
    }
    else
    {
LABEL_15:
      v3 = -1073741275;
    }
  }
LABEL_16:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v3;
}
