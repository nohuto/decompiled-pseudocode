/*
 * XREFs of ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x18003A660
 * Callers:
 *     ServiceStart @ 0x180039720 (ServiceStart.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 */

void __fastcall CAudioSrv::ServiceStart(CAudioSrv *this)
{
  HANDLE v1; // rax

  v1 = g_hCanAcceptMMCClientEvent;
  if ( g_hCanAcceptMMCClientEvent )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Eu,
        (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
      v1 = g_hCanAcceptMMCClientEvent;
    }
    SetEvent(v1);
  }
}
