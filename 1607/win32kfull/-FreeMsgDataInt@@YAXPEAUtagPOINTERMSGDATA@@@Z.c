/*
 * XREFs of ?FreeMsgDataInt@@YAXPEAUtagPOINTERMSGDATA@@@Z @ 0x1C01F3A08
 * Callers:
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01F3968 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeMsgDataInt(struct tagPOINTERMSGDATA *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx

  if ( gbCleanupInitiated || gbExitInProgress )
  {
    Win32FreePool(a1, a2, a3);
  }
  else
  {
    v4 = gcFPMEntries;
    *((_DWORD *)a1 + 9) |= 0x40u;
    v5 = 2LL * ((unsigned int)v4 % 0x3E8);
    v6 = *((_QWORD *)&gapFPMData + 2 * ((unsigned int)v4 % 0x3E8) + 1);
    if ( v6 )
    {
      Win32FreePool(v6, (unsigned int)v4 / 0x3E8, v4);
      *((_QWORD *)&gapFPMData + v5 + 1) = 0LL;
      *((_DWORD *)&gapFPMData + 2 * v5) = 0;
      LODWORD(v4) = gcFPMEntries;
    }
    *((_DWORD *)&gapFPMData + 2 * v5) = v4;
    gcFPMEntries = v4 + 1;
    *((_QWORD *)&gapFPMData + v5 + 1) = a1;
  }
}
