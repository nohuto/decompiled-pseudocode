/*
 * XREFs of NdisCancelTimerObject @ 0x1C005B0E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

BOOLEAN __stdcall NdisCancelTimerObject(NDIS_HANDLE TimerObject)
{
  __int64 v2; // rax
  BOOLEAN v4; // di
  __int64 v5; // rax
  KIRQL v6; // r8
  NDIS_HANDLE *v7; // rcx
  _QWORD *v8; // rdx

  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_qq(0xCu, &WPP_b7e8219cdeacda1a8a9aa4db7b390a12_Traceguids, *((_QWORD *)TimerObject + 3), TimerObject);
  v2 = *((_QWORD *)TimerObject + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 3736) & 8) != 0 )
      return 0;
    v4 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
    v5 = *((_QWORD *)TimerObject + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 3816) + 26LL) & 2) != 0 && v4 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 1880));
      v7 = (NDIS_HANDLE *)(*((_QWORD *)TimerObject + 24) + 560LL);
      if ( *v7 )
      {
        while ( 1 )
        {
          v8 = *v7;
          if ( *v7 == TimerObject )
            break;
          v7 = (NDIS_HANDLE *)*v7;
          if ( !*v8 )
            goto LABEL_13;
        }
        *v7 = *(NDIS_HANDLE *)TimerObject;
      }
LABEL_13:
      KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)TimerObject + 24) + 1880LL), v6);
    }
  }
  else
  {
    v4 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
  }
  if ( *((_BYTE *)TimerObject + 200) )
    KeFlushQueuedDpcs();
  return v4;
}
