/*
 * XREFs of PnpGenerateDeviceIdsHash @ 0x14050D908
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PnpGenerateDeviceIdsHash(__int64 a1, __int64 a2, _DWORD *a3)
{
  NTSTATUS inited; // r9d
  int v4; // ebp
  int v5; // esi
  const WCHAR **i; // rdi
  const WCHAR *v8; // rbx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG HashValue; // [rsp+60h] [rbp+8h] BYREF

  v11[0] = a1;
  inited = 0;
  *a3 = 0;
  v4 = 0;
  v11[1] = a2;
  v5 = 0;
  for ( i = (const WCHAR **)v11; ; ++i )
  {
    v8 = *i;
    if ( *i )
    {
      while ( *v8 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v8);
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( inited < 0 )
          return (unsigned int)inited;
        v4 += HashValue;
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v8 += v9 + 1;
        if ( !v8 )
          break;
      }
    }
    if ( inited < 0 )
      break;
    if ( (unsigned __int64)++v5 >= 2 )
    {
      *a3 = v4;
      return (unsigned int)inited;
    }
  }
  return (unsigned int)inited;
}
