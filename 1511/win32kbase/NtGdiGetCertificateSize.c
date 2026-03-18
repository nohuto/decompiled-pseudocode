/*
 * XREFs of NtGdiGetCertificateSize @ 0x1C00C1060
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     sub_1C00821F0 @ 0x1C00821F0 (sub_1C00821F0.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     sub_1C00C0CE8 @ 0x1C00C0CE8 (sub_1C00C0CE8.c)
 */

__int64 __fastcall NtGdiGetCertificateSize(struct _UNICODE_STRING *a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11; // [rsp+48h] [rbp+20h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v7 = 0;
  if ( (int)result >= 0 )
  {
    v10 = sub_1C00C0CE8(a1, a2, &v11, 0LL);
    if ( v10 >= 0 )
      v10 = sub_1C00821F0(a3, &v11);
    UserSessionSwitchLeaveCrit(v9, v8);
    if ( v10 < 0 )
      return (unsigned int)v10;
    return v7;
  }
  return result;
}
