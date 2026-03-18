/*
 * XREFs of IopCheckDeviceFlags @ 0x1403D1DA4
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x1403D183C (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     <none>
 */

char __fastcall IopCheckDeviceFlags(__int64 a1, int a2)
{
  __int64 v2; // r9
  char v3; // r8

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  while ( v2 )
  {
    if ( (a2 & *(_DWORD *)(v2 + 48)) != 0 )
      return 1;
    v2 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 48LL);
  }
  return v3;
}
