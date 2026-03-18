/*
 * XREFs of ?PrepareLastStateDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C5B28
 * Callers:
 *     ValidatePointerDeviceCurrentState @ 0x1C01CD2A4 (ValidatePointerDeviceCurrentState.c)
 * Callees:
 *     <none>
 */

void __fastcall PrepareLastStateDelivery(struct tagHID_POINTER_DEVICE_INFO *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax

  v2 = *((_QWORD *)a1 + 85);
  v3 = 2400LL * a2;
  v4 = *(_DWORD *)(v2 + v3 + 2392);
  if ( (v4 & 0x80u) == 0 )
  {
    EndAllActiveContacts(a1);
  }
  else
  {
    if ( *(_DWORD *)(v2 + v3 + 2340) )
    {
      gbPointerSendLastPending = 1;
      *(_DWORD *)(v2 + v3 + 2392) = v4 | 0x40;
    }
    *(_DWORD *)(*((_QWORD *)a1 + 85) + v3 + 2392) |= 0x20u;
  }
}
