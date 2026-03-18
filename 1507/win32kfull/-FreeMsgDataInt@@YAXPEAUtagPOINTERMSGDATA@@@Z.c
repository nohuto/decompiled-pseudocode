/*
 * XREFs of ?FreeMsgDataInt@@YAXPEAUtagPOINTERMSGDATA@@@Z @ 0x1C01FC2D4
 * Callers:
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01FC234 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeMsgDataInt(struct tagPOINTERMSGDATA *a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( gbCleanupInitiated || gbExitInProgress )
  {
    Win32FreePool(a1);
  }
  else
  {
    v2 = gcFPMEntries;
    *((_DWORD *)a1 + 9) |= 0x40u;
    v3 = 2LL * (v2 % 0x3E8);
    v4 = *((_QWORD *)&gapFPMData + 2 * (v2 % 0x3E8) + 1);
    if ( v4 )
    {
      Win32FreePool(v4);
      *((_QWORD *)&gapFPMData + v3 + 1) = 0LL;
      *((_DWORD *)&gapFPMData + 2 * v3) = 0;
      v2 = gcFPMEntries;
    }
    *((_DWORD *)&gapFPMData + 2 * v3) = v2;
    gcFPMEntries = v2 + 1;
    *((_QWORD *)&gapFPMData + v3 + 1) = a1;
  }
}
