/*
 * XREFs of sub_18001F020 @ 0x18001F020
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002568 @ 0x180002568 (sub_180002568.c)
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000D5E4 @ 0x18000D5E4 (sub_18000D5E4.c)
 *     sub_180012308 @ 0x180012308 (sub_180012308.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 */

__int64 __fastcall sub_18001F020(__int64 a1, __int64 a2)
{
  PCWSTR StringRawBuffer; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edx
  PCWSTR v8; // rax
  __int64 v9; // rdx
  PCWSTR v10; // rax
  PCWSTR v11; // rdi
  PCWSTR v12; // rbx
  PCWSTR v13; // rax
  int v14; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  v5 = sub_180012508(a2, (__int64)L"CreativeId", (__int64)StringRawBuffer);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 360;
LABEL_3:
    sub_1800025D0(retaddr, v7, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v5);
    return v6;
  }
  v8 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v5 = sub_180012508(a2, (__int64)L"PlacementId", (__int64)v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 361;
    goto LABEL_3;
  }
  v5 = sub_180012308(a2, v9, *(_DWORD *)(a1 + 24));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 362;
    goto LABEL_3;
  }
  v10 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 32), 0LL);
  if ( *v10 )
  {
    v5 = sub_180012508(a2, (__int64)L"CreativeEventToken", (__int64)v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 367;
      goto LABEL_3;
    }
  }
  if ( *(_DWORD *)(a1 + 24) == 6 )
    return 0;
  v11 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 32), 0LL);
  v12 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  v13 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v14 = sub_18000D5E4((__int64)v13, (__int64)v12, *(_DWORD *)(a1 + 24), (__int64)v11);
  v6 = v14;
  if ( v14 >= 0 )
    return 0;
  else
    sub_180002568(retaddr, 375, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v14);
  return v6;
}
