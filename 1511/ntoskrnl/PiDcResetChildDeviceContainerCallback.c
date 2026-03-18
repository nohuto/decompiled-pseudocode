/*
 * XREFs of PiDcResetChildDeviceContainerCallback @ 0x14060649C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     _CmIsRootDevice @ 0x1404B1458 (_CmIsRootDevice.c)
 */

__int64 __fastcall PiDcResetChildDeviceContainerCallback(__int64 a1, const wchar_t *a2, __int64 a3)
{
  int inited; // esi
  char v5; // r14
  WCHAR *PoolWithTag; // rdi
  const WCHAR *i; // rbx
  _QWORD *v10; // rax
  PVOID v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  int v15; // [rsp+60h] [rbp-59h] BYREF
  int v16; // [rsp+64h] [rbp-55h] BYREF
  int v17; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v18[4]; // [rsp+6Ch] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  wchar_t Str1[40]; // [rsp+80h] [rbp-39h] BYREF

  inited = 0;
  v5 = 0;
  PoolWithTag = 0LL;
  for ( i = a2; !CmIsRootDevice(i); i = PoolWithTag )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, i);
    if ( inited < 0 )
      goto LABEL_27;
    v10 = PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString);
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      break;
    }
    if ( i != a2 )
    {
      v15 = 78;
      inited = CmGetDeviceRegProp(
                 *(__int64 *)&PiPnpRtlCtx,
                 (__int64)i,
                 0LL,
                 37,
                 (__int64)&v17,
                 (__int64)Str1,
                 (__int64)&v15);
      if ( inited < 0 )
        goto LABEL_27;
      if ( v17 != 1 || v15 != 78 || wcsicmp(Str1, *(const wchar_t **)(a3 + 8)) )
        break;
    }
    if ( !PoolWithTag )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
      if ( !PoolWithTag )
        return 0LL;
    }
    inited = PnpGetObjectProperty(
               a1,
               (__int64)i,
               1u,
               0LL,
               0LL,
               (__int64)&DEVPKEY_Device_LastKnownParent,
               (__int64)&v16,
               (__int64)PoolWithTag,
               400,
               (__int64)v18,
               0);
    if ( inited < 0 || v16 != 18 )
      goto LABEL_27;
    PoolWithTag[199] = 0;
    if ( !wcsicmp(PoolWithTag, *(const wchar_t **)a3) )
    {
      v5 = 1;
      break;
    }
  }
  if ( inited >= 0 )
  {
    if ( v5 )
    {
      v11 = ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x47706E50u);
      v12 = v11;
      if ( v11 )
      {
        if ( RtlStringCbCopyW((NTSTRSAFE_PWSTR)v11 + 8, 0x190uLL, a2) >= 0 )
        {
          v13 = *(_QWORD **)(a3 + 24);
          *v12 = a3 + 16;
          v12[1] = v13;
          if ( *v13 != a3 + 16 )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(a3 + 24) = v12;
          v12 = 0LL;
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0x47706E50u);
      }
    }
  }
LABEL_27:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
  return 0LL;
}
