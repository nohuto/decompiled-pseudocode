/*
 * XREFs of ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004BE90
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004C7E8 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeCursor(MPCHolographicInputManager *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rbx
  __int64 v4; // rcx
  _OWORD *v5; // rax
  __int128 v6; // xmm1

  v2 = a2;
  if ( *((_DWORD *)a2 + 176) == 8 )
  {
    MPCHolographicInputManager::ProcessCursorData(
      this,
      *((_QWORD *)this + 269),
      (char *)a2 + 784,
      0LL,
      (char *)this + 2192);
    v4 = 14LL;
    v5 = (_OWORD *)((char *)this + 200);
    do
    {
      *v5 = *(_OWORD *)v2;
      v5[1] = *((_OWORD *)v2 + 1);
      v5[2] = *((_OWORD *)v2 + 2);
      v5[3] = *((_OWORD *)v2 + 3);
      v5[4] = *((_OWORD *)v2 + 4);
      v5[5] = *((_OWORD *)v2 + 5);
      v5[6] = *((_OWORD *)v2 + 6);
      v5 += 8;
      v6 = *((_OWORD *)v2 + 7);
      v2 = (struct InputInfo *)((char *)v2 + 128);
      *(v5 - 1) = v6;
      --v4;
    }
    while ( v4 );
    *v5 = *(_OWORD *)v2;
    v5[1] = *((_OWORD *)v2 + 1);
    v5[2] = *((_OWORD *)v2 + 2);
    v5[3] = *((_OWORD *)v2 + 3);
    v5[4] = *((_OWORD *)v2 + 4);
    v5[5] = *((_OWORD *)v2 + 5);
  }
}
