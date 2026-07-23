/*
 * XREFs of FsRtlHeatInit @ 0x14061F6FC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlpHeatRegisterVolume @ 0x14061F950 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14061FB84 (FsRtlpQueryValueKey.c)
 */

__int64 __fastcall FsRtlHeatInit(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  _BYTE v10[4]; // [rsp+30h] [rbp-69h] BYREF
  int v11; // [rsp+34h] [rbp-65h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  int v13; // [rsp+40h] [rbp-59h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-51h]
  int v15; // [rsp+50h] [rbp-49h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp-41h]
  char v17; // [rsp+60h] [rbp-39h] BYREF

  v10[0] = 0;
  *(_QWORD *)a1 = 0LL;
  v11 = 92;
  P = &v17;
  v15 = 8519808;
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TieredStorage";
  v13 = 1048590;
  v14 = L"Enabled";
  if ( (int)FsRtlpQueryValueKey(&v15, &v13, &v11, &P, v10) < 0
    || (v6 = P, *(_DWORD *)((char *)P + *((unsigned int *)P + 2))) )
  {
    v13 = 2490404;
    v14 = L"MeasuredOperations";
    v8 = FsRtlpQueryValueKey(&v15, &v13, &v11, &P, v10);
    v6 = P;
    if ( v8 < 0 )
      *(_DWORD *)(a1 + 4) |= 7u;
    else
      *(_DWORD *)(a1 + 4) |= *(_DWORD *)((_BYTE *)P + *((unsigned int *)P + 2)) & 7;
    v7 = FsRtlpHeatRegisterVolume(a2, a3, a1);
  }
  else
  {
    v7 = -1073741823;
  }
  if ( v10[0] )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
