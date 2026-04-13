/*
 * XREFs of sub_18001A400 @ 0x18001A400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D700 @ 0x18001D700 (sub_18001D700.c)
 */

__int64 __fastcall sub_18001A400(__int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // r8
  unsigned __int32 v6; // [rsp+30h] [rbp+10h] BYREF
  signed __int32 v7; // [rsp+38h] [rbp+18h] BYREF
  signed __int32 v8; // [rsp+40h] [rbp+20h] BYREF

  v6 = 0;
  v1 = *(_DWORD *)(a1 - 128);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( v7 )
  {
    v3 = *(_DWORD *)(a1 - 128);
    v8 = -2;
    _InterlockedCompareExchange(&v8, v3, -2);
    if ( v8 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v6, *(_DWORD *)(a1 - 124), v6);
    if ( *(_QWORD *)(a1 - 136) )
      SetRestrictedErrorInfo();
    v4 = v6;
    if ( (v6 & 0x80000000) == 0 )
    {
LABEL_6:
      v4 = 2147943623LL;
      v6 = -2147023673;
    }
  }
  else
  {
    v4 = v6;
  }
  return sub_18001D700(a1 - 176, 1LL, v4);
}
