/*
 * XREFs of NtDisableLastKnownGood @ 0x14051AC4C
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     IopCreateRegistryKeyEx @ 0x1403B9D0C (IopCreateRegistryKeyEx.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  NTSTATUS CachedContextBaseKey; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  void *v5; // [rsp+70h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v5);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
    *(_DWORD *)&ValueName.Length = 1572886;
    CachedContextBaseKey = IopCreateRegistryKeyEx(&KeyHandle, v5, &ValueName, 0xF003Fu, 0, 0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      ValueName.Buffer = L"DisableLKG";
      Data = 1;
      *(_DWORD *)&ValueName.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return CachedContextBaseKey;
}
