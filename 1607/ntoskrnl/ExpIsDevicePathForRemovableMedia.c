/*
 * XREFs of ExpIsDevicePathForRemovableMedia @ 0x14022E520
 * Callers:
 *     NtEnumerateBootEntries @ 0x1406B38C4 (NtEnumerateBootEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExpIsDevicePathForRemovableMedia(_BYTE *a1)
{
  _BYTE *v1; // r10
  char v2; // al
  _BYTE *v3; // r9
  _BYTE *v4; // r8
  _BYTE *v5; // rdx
  __int64 v6; // rax
  char v7; // al

  v1 = 0LL;
  v2 = *a1 & 0x7F;
  v3 = 0LL;
  v4 = 0LL;
  v5 = a1;
  if ( v2 == 127 )
    return 0LL;
  do
  {
    if ( v2 == 1 )
    {
      if ( v5[1] == 4 )
      {
        v6 = *(_QWORD *)(v5 + 4) - ExpUnknownDeviceGuid;
        if ( !v6 )
          v6 = *(_QWORD *)(v5 + 12) - qword_1402F9A10;
        if ( !v6 )
          v1 = v5;
      }
    }
    else if ( v2 == 4 )
    {
      v7 = v5[1];
      if ( v7 == 1 )
      {
        v3 = v5;
      }
      else if ( v7 == 4 )
      {
        v4 = v5;
      }
    }
    v5 += (unsigned __int8)v5[2] | (unsigned __int64)((unsigned __int8)v5[3] << 8);
    v2 = *v5 & 0x7F;
  }
  while ( v2 != 127 );
  return v1 && !v3 && !v4;
}
