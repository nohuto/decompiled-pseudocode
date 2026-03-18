/*
 * XREFs of GreIsInLowBox @ 0x1C00B3C90
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00B6210 (NtGdiDdDDICreateOutputDupl.c)
 *     NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00B66A0 (NtGdiDdDDINetDispStartMiracastDisplayDevice.c)
 *     NtGdiDdDDINetDispStartMiracastDisplayDeviceEx @ 0x1C00B6700 (NtGdiDdDDINetDispStartMiracastDisplayDeviceEx.c)
 *     NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00B6740 (NtGdiDdDDINetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     <none>
 */

__int64 GreIsInLowBox()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // edi
  HANDLE v2; // rcx
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  int v5; // ecx
  int v7; // [rsp+60h] [rbp+28h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+30h] BYREF
  int TokenInformation; // [rsp+70h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+40h] BYREF

  v0 = 0;
  Handle = 0LL;
  v7 = 1;
  v1 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &Handle);
  if ( v1 < 0
    || (ReturnLength = 4,
        v1 = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &TokenInformation, 4u, &ReturnLength),
        v1 >= 0)
    && TokenInformation >= 2 )
  {
    v2 = Handle;
  }
  else
  {
    v1 = -1073741700;
    ZwClose(Handle);
    v2 = 0LL;
    Handle = 0LL;
  }
  if ( v1 == -1073741700 )
  {
    v3 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
    v2 = Handle;
    v1 = v3;
  }
  if ( v1 >= 0 )
  {
    v4 = ZwQueryInformationToken(v2, TokenIsAppContainer, &v7, 4u, &ReturnLength);
    v2 = Handle;
    v1 = v4;
  }
  if ( v2 )
    ZwClose(v2);
  v5 = v7;
  if ( v1 < 0 )
    v5 = 1;
  LOBYTE(v0) = v5 != 0;
  return v0;
}
