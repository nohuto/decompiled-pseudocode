/*
 * XREFs of ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::GetTargetWithFocus(
        MPCInputRouter *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  bool v6; // cl

  v6 = a3 && (*((_DWORD *)a3 + 1) == 512 || *((_DWORD *)a3 + 1) == 1024 || *((_DWORD *)a3 + 1) == 0x2000);
  if ( *((_BYTE *)this + 1044) && v6 )
    return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **, struct IInputTarget *))this + 121))(
             *((_QWORD *)this + 121),
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a5,
             a4);
  else
    return DWMInputRouter::GetTargetWithFocus(this, a2, a3, a4, a5);
}
