/*
 * XREFs of ndisWmiDisableEvents @ 0x1C00B0578
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A883C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C00178A4 (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisWmiDisableEvents(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  char v5; // di
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  v5 = byte_1C00895D9;
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
  {
    WPP_SF_q(0x46u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    v5 = byte_1C00895D9;
  }
  ndisWmiGetGuid(&v8, a1, a2, 0);
  if ( v8 )
  {
    v6 = *(_DWORD *)(v8 + 24);
    if ( (v6 & 2) != 0 )
      *(_DWORD *)(v8 + 24) = v6 & 0x7FFFFFFF;
    else
      v2 = -1073741808;
  }
  else
  {
    if ( (unsigned __int8)v5 >= 2u )
    {
      WPP_SF_q(0x47u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
      v5 = byte_1C00895D9;
    }
    v2 = -1073741811;
  }
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_qD(0x48u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, v2);
  return v2;
}
