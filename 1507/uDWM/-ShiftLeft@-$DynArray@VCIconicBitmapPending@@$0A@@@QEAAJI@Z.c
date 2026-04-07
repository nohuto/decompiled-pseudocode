/*
 * XREFs of ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18006FB08
 * Callers:
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006F138 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CIconicBitmapPending,0>::ShiftLeft(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  unsigned int v5; // edi

  v2 = 0;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x236u);
    }
    else
    {
      v5 = v4 - a2;
      if ( v5 )
        memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + 16LL * a2), 16LL * v5);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v2;
}
