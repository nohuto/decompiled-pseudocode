/*
 * XREFs of RIMResetPointerDeviceFrameContactIdMgr @ 0x1C0081498
 * Callers:
 *     RIMFreePointerDevice @ 0x1C0078334 (RIMFreePointerDevice.c)
 *     RIMAbortDeviceActivity @ 0x1C00C37A4 (RIMAbortDeviceActivity.c)
 *     RIMEndAllActiveContacts @ 0x1C00C3D88 (RIMEndAllActiveContacts.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C451C (RIMUpdateDeviceFrameState.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall RIMResetPointerDeviceFrameContactIdMgr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 696);
  v3 = 0LL;
  if ( *(_DWORD *)(a2 + 704) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 48);
      while ( 1 )
      {
        v6 = *(_QWORD **)(v5 + 8 * v3);
        if ( v6 )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 704) )
          goto LABEL_5;
      }
      *(_QWORD *)(v5 + 8 * v3) = *v6;
      result = Win32FreePool();
    }
  }
LABEL_5:
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 4) &= 0xFFFFFFE3;
  return result;
}
