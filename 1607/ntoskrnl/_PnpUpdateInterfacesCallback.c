/*
 * XREFs of _PnpUpdateInterfacesCallback @ 0x140548B9C
 * Callers:
 *     <none>
 * Callees:
 *     _PnpNotifyDerivedKeys @ 0x1404E96B8 (_PnpNotifyDerivedKeys.c)
 */

char __fastcall PnpUpdateInterfacesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-48h]
  unsigned int v10; // [rsp+28h] [rbp-40h]
  void (__fastcall *v11)(__int64, __int64, __int64); // [rsp+38h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a4 + 28) )
  {
    *(_QWORD *)&v12 = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))a4)(a1, a2, 3LL);
  }
  v7 = *(_QWORD *)(a4 + 8);
  if ( v7 )
  {
    v11 = *(void (__fastcall **)(__int64, __int64, __int64))a4;
    v10 = *(_DWORD *)(a4 + 24);
    v9 = *(_QWORD *)(a4 + 16);
    v12 = 0LL;
    PnpNotifyDerivedKeys(
      a1,
      a2,
      3u,
      v7,
      v9,
      v10,
      (__int64)&v12,
      (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))v11);
  }
  return 0;
}
