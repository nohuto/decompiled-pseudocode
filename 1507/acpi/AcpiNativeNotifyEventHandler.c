/*
 * XREFs of AcpiNativeNotifyEventHandler @ 0x1C003F8F0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiHandleInternalNotify @ 0x1C003F74C (AcpiHandleInternalNotify.c)
 *     NotifyHandler @ 0x1C00401E0 (NotifyHandler.c)
 */

__int64 __fastcall AcpiNativeNotifyEventHandler(__int64 a1)
{
  __int64 v1; // rdx
  volatile signed __int32 *v2; // rbx

  v1 = *(unsigned int *)(a1 + 8);
  v2 = *(volatile signed __int32 **)a1;
  if ( (_DWORD)v1 == 0xFFFF )
  {
    AcpiHandleInternalNotify(*(volatile signed __int32 **)a1);
    v1 = 0LL;
  }
  return NotifyHandler(2LL, v1, v2);
}
