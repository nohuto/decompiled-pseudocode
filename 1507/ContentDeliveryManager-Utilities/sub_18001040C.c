/*
 * XREFs of sub_18001040C @ 0x18001040C
 * Callers:
 *     sub_180010DF0 @ 0x180010DF0 (sub_180010DF0.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_1800137FC @ 0x1800137FC (sub_1800137FC.c)
 */

__int64 __fastcall sub_18001040C(unsigned int a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  memset(v7, 0, 24);
  v3 = sub_1800137FC(v7, L"%d", a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0LL;
    *a2 = v7[0];
    v4 = 0;
  }
  else
  {
    sub_1800025D0(retaddr, 477, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v3);
    v5 = (void *)v7[0];
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return v4;
}
