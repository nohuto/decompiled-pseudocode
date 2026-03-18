/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C0078524
 * Callers:
 *     RIMFreePointerDevice @ 0x1C0078334 (RIMFreePointerDevice.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00C46B4 (RIMUpdatePrimaryDevice.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v4; // r15d
  _QWORD *v5; // r14
  _QWORD *v7; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  bool v16; // zf

  v4 = 0;
  v5 = (_QWORD *)(a1 + 536);
  v7 = *(_QWORD **)(a1 + 536);
  if ( *(_QWORD *)(a1 + 568) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL, 0LL, 0LL);
  while ( v7 != v5 )
  {
    v12 = v7 - 1;
    v7 = (_QWORD *)*v7;
    if ( *v12 == a2 )
    {
      v13 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v13 + 184) &= ~0x4000000u;
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x1Eu,
        (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
        v13);
      if ( (*(_DWORD *)(a1 + 560) & 1) != 0 )
      {
        *((_DWORD *)v12 + 6) |= 1u;
        *(_DWORD *)(a1 + 560) |= 2u;
        if ( a3 )
        {
          *((_DWORD *)v12 + 6) |= 2u;
          *(_DWORD *)(a1 + 560) |= 4u;
        }
        v4 = 1;
      }
      else
      {
        v14 = v12[1];
        v15 = (_QWORD *)v12[2];
        if ( *(_QWORD **)(v14 + 8) != v12 + 1 || (_QWORD *)*v15 != v12 + 1 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        Win32FreePool();
        v16 = (*(_DWORD *)(a1 + 552))-- == 1;
        if ( v16 && *(_DWORD *)(a2 + 24) == 8 )
          *(_BYTE *)(a1 + 672) = 0;
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return 1LL;
}
