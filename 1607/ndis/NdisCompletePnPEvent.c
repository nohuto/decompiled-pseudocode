/*
 * XREFs of NdisCompletePnPEvent @ 0x1C0062580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall NdisCompletePnPEvent(int a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xCu, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2);
  v6 = *(struct _KEVENT **)(a3 + 24);
  *(_DWORD *)(a3 + 32) = a1;
  KeSetEvent(v6, 0, 0);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xDu, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2);
}
