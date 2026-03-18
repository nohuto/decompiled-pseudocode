/*
 * XREFs of RootHub_GetHighestUsbVersionSupported @ 0x1C0005180
 * Callers:
 *     Controller_SetDeviceDescription @ 0x1C0047CB0 (Controller_SetDeviceDescription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RootHub_GetHighestUsbVersionSupported(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int8 v2; // r9
  unsigned __int8 v3; // r11
  unsigned int v4; // eax
  __int64 v5; // r10
  __int64 v6; // rcx
  unsigned __int16 v8; // [rsp+8h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v3 = 0;
  v8 = 0;
  v4 = 1;
  if ( v1 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    do
    {
      v6 = 56LL * (v4 - 1);
      if ( *(_BYTE *)(v6 + v5 + 1) > v2 )
      {
        v2 = *(_BYTE *)(v6 + v5 + 1);
        if ( *(_BYTE *)(v6 + v5) > v3 )
          v3 = *(_BYTE *)(v6 + v5);
      }
      ++v4;
    }
    while ( v4 <= v1 );
    LOBYTE(v8) = v2;
    HIBYTE(v8) = v3;
  }
  return v8;
}
