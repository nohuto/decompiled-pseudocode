/*
 * XREFs of ndisMSetNative802_11Attributes @ 0x1C00D15F8
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AEC30 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Duplicate802_11AttachAttributes @ 0x1C0073FA4 (Duplicate802_11AttachAttributes.c)
 */

__int64 __fastcall ndisMSetNative802_11Attributes(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v6; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x74u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  if ( *(_QWORD *)(a1 + 768) )
  {
    return (unsigned int)-1073676267;
  }
  else
  {
    v6 = Duplicate802_11AttachAttributes(
           _byteswap_ushort(*(_WORD *)(*(_QWORD *)(a1 + 3816) + 24LL)),
           a2,
           a3,
           a4,
           (__int64)&v8);
    if ( v6 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x75u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
    }
    else
    {
      *(_QWORD *)(a1 + 768) = v8;
    }
  }
  return v6;
}
