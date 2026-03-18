/*
 * XREFs of ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C00DE878
 * Callers:
 *     NtDCompositionUpdatePointerCapture @ 0x1C00D4640 (NtDCompositionUpdatePointerCapture.c)
 * Callees:
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C00D7F1C (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C00DE718 (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 */

__int64 __fastcall CInputManager::UpdatePointerCapture(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  CInputManager *v6; // r8
  unsigned int v7; // r9d
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v5 = 0;
  if ( !g_pInputManager )
    return (unsigned int)-1073741811;
  ExAcquirePushLockExclusiveEx((char *)g_pInputManager + 128, 0LL);
  v6 = g_pInputManager;
  v7 = *((_DWORD *)g_pInputManager + 30);
  if ( v7 )
  {
    do
    {
      if ( **(_DWORD **)(*((_QWORD *)g_pInputManager + 14) + 8LL * v5) == a2 )
        break;
      ++v5;
    }
    while ( v5 < v7 );
  }
  if ( v5 >= v7 )
  {
    if ( !a1 )
      goto LABEL_12;
    v9 = __PAIR64__(a1, a2);
    v2 = CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt((__int64)g_pInputManager + 112, &v9, v7);
LABEL_11:
    v6 = g_pInputManager;
    goto LABEL_12;
  }
  if ( !a1 )
  {
    CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt((__int64)g_pInputManager + 112, v5);
    goto LABEL_11;
  }
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)g_pInputManager + 14) + 8LL * v5) + 4LL) = a1;
LABEL_12:
  ExReleasePushLockExclusiveEx((char *)v6 + 128, 0LL);
  return v2;
}
