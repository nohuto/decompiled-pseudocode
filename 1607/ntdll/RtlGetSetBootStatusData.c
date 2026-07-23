/*
 * XREFs of RtlGetSetBootStatusData @ 0x180087D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetSetBootStatusData @ 0x180087EC0 (RtlpGetSetBootStatusData.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN Read,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v9; // rcx
  char v10; // al
  char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  char v14; // [rsp+30h] [rbp-B8h]
  __int64 v15; // [rsp+34h] [rbp-B4h] BYREF
  char v16; // [rsp+40h] [rbp-A8h] BYREF

  if ( Read )
    return RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 120, 0LL);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)&v15);
      if ( result >= 0 )
      {
        v9 = (unsigned int)v15;
        if ( ReturnLength )
          *ReturnLength = v15;
        v10 = v14;
        if ( (_DWORD)v9 )
        {
          v11 = &v16;
          v12 = v9;
          do
          {
            v10 += *v11++;
            --v12;
          }
          while ( v12 );
          v13 = v9;
          do
          {
            v10 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v13;
          }
          while ( v13 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
