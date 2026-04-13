/*
 * XREFs of sub_18000D558 @ 0x18000D558
 * Callers:
 *     sub_18000D5E4 @ 0x18000D5E4 (sub_18000D5E4.c)
 * Callees:
 *     sub_180002568 @ 0x180002568 (sub_180002568.c)
 *     sub_1800137FC @ 0x1800137FC (sub_1800137FC.c)
 */

__int64 __fastcall sub_18000D558(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  memset(v7, 0, 24);
  v3 = sub_1800137FC(
         v7,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0LL;
    *a2 = v7[0];
    v4 = 0;
  }
  else
  {
    sub_180002568(retaddr, 37, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\creativeeventstore.h", v3);
    v5 = (void *)v7[0];
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return v4;
}
