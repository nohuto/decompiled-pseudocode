/*
 * XREFs of ?ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7BB0
 * Callers:
 *     AbortDeviceActivity @ 0x1C01C8D90 (AbortDeviceActivity.c)
 *     EndAllActiveContacts @ 0x1C01CB36C (EndAllActiveContacts.c)
 *     FreePointerDevice @ 0x1C01CC4B0 (FreePointerDevice.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CFA74 (xxxUpdateDeviceFrameState.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetPointerDeviceFrameContactIdMgr(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  v1 = *((_QWORD *)a1 + 89);
  v2 = 0LL;
  if ( *((_DWORD *)a1 + 180) )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v1 + 48);
      while ( 1 )
      {
        v5 = *(_QWORD **)(v4 + 8 * v2);
        if ( v5 )
          break;
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= *((_DWORD *)a1 + 180) )
          goto LABEL_7;
      }
      *(_QWORD *)(v4 + 8 * v2) = *v5;
      Win32FreePool(v5);
    }
  }
LABEL_7:
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 4) &= 0xFFFFFFE3;
}
