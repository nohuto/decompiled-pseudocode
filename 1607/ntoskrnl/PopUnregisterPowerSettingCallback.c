/*
 * XREFs of PopUnregisterPowerSettingCallback @ 0x1401123E4
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1403F4EB0 (PopDispatchPowerSettingCallbacks.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052E388 (PoUnregisterPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PopUnregisterPowerSettingCallback(_BYTE *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax

  v1 = *(_QWORD *)a1;
  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( a1[33] )
  {
    if ( *(_BYTE **)(v1 + 8) != a1 || (_BYTE *)*v2 != a1 )
      __fastfail(3u);
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    *((_QWORD *)a1 + 1) = a1;
    *(_QWORD *)a1 = a1;
    KeSetEvent(&PopPowerSettingCallbackReturned, 0, 0);
  }
  else
  {
    if ( *(_BYTE **)(v1 + 8) != a1 || (_BYTE *)*v2 != a1 )
      __fastfail(3u);
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    *((_QWORD *)a1 + 1) = a1;
    *(_QWORD *)a1 = a1;
    *((_DWORD *)a1 + 4) = 0;
    ExFreePoolWithTag(a1, 0x74655350u);
  }
}
