/*
 * XREFs of ?ShiftLeft@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z @ 0x180110C38
 * Callers:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800BA674 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CWindowNode::PendingDxUpdate,0>::ShiftLeft(__int64 a1, unsigned int a2)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x235u);
    }
    else
    {
      v5 = v4 - a2;
      if ( v5 )
        memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + 88LL * a2), 88LL * v5);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v2;
}
