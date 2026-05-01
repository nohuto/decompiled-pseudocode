/*
 * XREFs of ?GetPackageFullNameFromPsmKey@HostResources@ExecutionModel@@IEAAJPEBGPEAPEAG@Z @ 0x18001A248
 * Callers:
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A404 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A4F8 (-IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::HostResources::GetPackageFullNameFromPsmKey(
        ExecutionModel::HostResources *this,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rbx
  NTSTATUS PackageFullNameFromKey; // eax
  signed int v8; // eax
  signed int v9; // edi
  unsigned __int16 *v10; // rcx
  unsigned int uBytes; // [rsp+30h] [rbp+8h] BYREF
  int uBytes_4; // [rsp+34h] [rbp+Ch]

  uBytes_4 = HIDWORD(this);
  *a3 = 0LL;
  uBytes = 0;
  PsmGetPackageFullNameFromKey(a2, 0LL, &uBytes);
  v5 = (unsigned __int16 *)LocalAlloc(0, uBytes);
  v6 = v5;
  if ( v5 )
  {
    PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a2, v5, &uBytes);
    v8 = RtlNtStatusToDosError(PackageFullNameFromKey);
    v9 = v8;
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
    if ( v9 >= 0 )
    {
      v10 = v6;
      v6 = 0LL;
      *a3 = v10;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  LocalFree(v6);
  return (unsigned int)v9;
}
