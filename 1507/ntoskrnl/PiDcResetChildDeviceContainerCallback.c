/*
 * XREFs of PiDcResetChildDeviceContainerCallback @ 0x140681244
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     _CmIsRootDevice @ 0x1404DEBD8 (_CmIsRootDevice.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 */

__int64 __fastcall PiDcResetChildDeviceContainerCallback(__int64 a1, const wchar_t *a2, __int64 a3)
{
  int inited; // esi
  char v5; // r14
  WCHAR *PoolWithTag; // rdi
  const WCHAR *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  PVOID v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  int v18; // [rsp+60h] [rbp-59h] BYREF
  int v19; // [rsp+64h] [rbp-55h] BYREF
  int v20; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v21[4]; // [rsp+6Ch] [rbp-4Dh] BYREF
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
    v13 = PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString, v10, v11, v12);
    if ( v13 )
    {
      ObfDereferenceObject(v13);
      break;
    }
    if ( i != a2 )
    {
      v18 = 78;
      inited = CmGetDeviceRegProp(
                 *(__int64 *)&PiPnpRtlCtx,
                 (__int64)i,
                 0LL,
                 37,
                 (__int64)&v20,
                 (__int64)Str1,
                 (__int64)&v18);
      if ( inited < 0 )
        goto LABEL_27;
      if ( v20 != 1 || v18 != 78 || wcsicmp(Str1, *(const wchar_t **)(a3 + 8)) )
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
               (__int64)&v19,
               (__int64)PoolWithTag,
               400,
               (__int64)v21,
               0);
    if ( inited < 0 || v19 != 18 )
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
      v14 = ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x47706E50u);
      v15 = v14;
      if ( v14 )
      {
        if ( RtlStringCbCopyW((NTSTRSAFE_PWSTR)v14 + 8, 0x190uLL, a2) >= 0 )
        {
          v16 = *(_QWORD **)(a3 + 24);
          *v15 = a3 + 16;
          v15[1] = v16;
          if ( *v16 != a3 + 16 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(a3 + 24) = v15;
          v15 = 0LL;
        }
        if ( v15 )
          ExFreePoolWithTag(v15, 0x47706E50u);
      }
    }
  }
LABEL_27:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
  return 0LL;
}
