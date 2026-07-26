/*
 * XREFs of NdisCompletePnPEvent @ 0x1C005EC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisCompletePnPEvent(int a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0xCu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a2);
  v6 = *(struct _KEVENT **)(a3 + 24);
  *(_DWORD *)(a3 + 32) = a1;
  KeSetEvent(v6, 0, 0);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0xDu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a2);
}
