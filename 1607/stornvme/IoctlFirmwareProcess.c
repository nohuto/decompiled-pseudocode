/*
 * XREFs of IoctlFirmwareProcess @ 0x1C00097FC
 * Callers:
 *     IoctlToNVMe @ 0x1C0009BF0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 */

__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rdx
  __int64 v3; // r9
  _DWORD *v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  unsigned int *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v8);
  v5 = *v8;
  if ( (unsigned int)v5 >= 0x34 )
  {
    v6 = (unsigned int)SrbDataBuffer[11];
    if ( v5 >= v6 + (unsigned __int64)(unsigned int)SrbDataBuffer[12]
      && SrbDataBuffer[7]
      && (SrbDataBuffer[10] & 0x7FFFFFFF) == 1
      && (unsigned int)v6 >= 0x34
      && (v6 & 3) == 0 )
    {
      switch ( SrbDataBuffer[9] )
      {
        case 1:
          return FirmwareGetInfo((__int64)v4, v3);
        case 2:
          return FirmwareDownload(v4, v3);
        case 3:
          return FirmwareActivate((__int64)v4, v3);
      }
    }
    else
    {
      SrbDataBuffer[5] = 3;
    }
  }
  *(_BYTE *)(v3 + 3) = 21;
  return 3238002694LL;
}
