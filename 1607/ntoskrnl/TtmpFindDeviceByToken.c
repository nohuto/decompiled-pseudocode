/*
 * XREFs of TtmpFindDeviceByToken @ 0x1406774F0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140676E00 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140676EB8 (TtmNotifyDeviceInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall TtmpFindDeviceByToken(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 **v4; // rcx
  __int64 *v5; // r11
  __int64 *i; // rax

  v4 = (__int64 **)(a1 + 96);
  v5 = 0LL;
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 && i[3] == a3 )
    {
      v5 = i;
      break;
    }
  }
  if ( a4 )
    *a4 = v5;
  return v5 != 0LL;
}
