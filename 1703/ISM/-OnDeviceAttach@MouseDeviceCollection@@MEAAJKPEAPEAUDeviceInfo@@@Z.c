/*
 * XREFs of ?OnDeviceAttach@MouseDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073350
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall MouseDeviceCollection::OnDeviceAttach(
        MouseDeviceCollection *this,
        __int64 a2,
        struct DeviceInfo **a3)
{
  unsigned int v3; // edi
  _DWORD *v5; // rbx
  __int64 v6; // rcx

  v3 = 0;
  v5 = operator new(0x38uLL);
  memset(v5, 0, 0x38uLL);
  if ( v5 )
  {
    v5[1] = 2;
    *a3 = (struct DeviceInfo *)v5;
  }
  else
  {
    v3 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 106, 14);
  }
  return v3;
}
