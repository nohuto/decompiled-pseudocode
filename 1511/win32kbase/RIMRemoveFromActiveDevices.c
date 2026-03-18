/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C000AE4C
 * Callers:
 *     RIMFreePointerDevice @ 0x1C000AC5C (RIMFreePointerDevice.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00C554C (RIMUpdatePrimaryDevice.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v4; // r15d
  _QWORD *v5; // r14
  _QWORD *v7; // rsi
  __int64 v9; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  bool v16; // zf

  v4 = 0;
  v5 = (_QWORD *)(a1 + 568);
  v7 = *(_QWORD **)(a1 + 568);
  v9 = a2;
  if ( *(_QWORD *)(a1 + 600) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL, 0LL, 0LL);
  while ( v7 != v5 )
  {
    v12 = v7 - 1;
    v7 = (_QWORD *)*v7;
    if ( *v12 == v9 )
    {
      v13 = *(_QWORD *)(v9 + 16);
      *(_DWORD *)(v13 + 176) &= ~0x4000000u;
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        5,
        30,
        (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
        v13);
      if ( (*(_DWORD *)(a1 + 592) & 1) != 0 )
      {
        *((_DWORD *)v12 + 6) |= 1u;
        *(_DWORD *)(a1 + 592) |= 2u;
        if ( a3 )
        {
          *((_DWORD *)v12 + 6) |= 2u;
          *(_DWORD *)(a1 + 592) |= 4u;
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
        Win32FreePool(v12);
        v16 = (*(_DWORD *)(a1 + 584))-- == 1;
        if ( v16 && *(_DWORD *)(v9 + 24) == 8 )
          *(_BYTE *)(a1 + 704) = 0;
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return 1LL;
}
