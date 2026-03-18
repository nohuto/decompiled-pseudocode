/*
 * XREFs of PsSetMonitorContextServerSilo @ 0x140134308
 * Callers:
 *     EtwpServerSiloCreateNotify @ 0x140526A2C (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140526CAC (SeInitServerSilo.c)
 *     SepRmServerSiloCreateNotify @ 0x140526CE4 (SepRmServerSiloCreateNotify.c)
 *     ExpWnfCreateServerSiloCallback @ 0x140526D50 (ExpWnfCreateServerSiloCallback.c)
 *     CmpCreateServerSiloCallback @ 0x140526DB4 (CmpCreateServerSiloCallback.c)
 *     ObInitServerSilo @ 0x140526E34 (ObInitServerSilo.c)
 * Callees:
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     PspDereferenceMonitorServerSilo @ 0x140526688 (PspDereferenceMonitorServerSilo.c)
 *     PspReferenceMonitorServerSilo @ 0x140526A0C (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsSetMonitorContextServerSilo(__int64 a1, _QWORD *a2, char a3, __int64 a4, __int64 *a5)
{
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx
  _QWORD *ServerSiloGlobals; // rax
  __int64 v12; // r8
  _QWORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax

  if ( a5 )
    *a5 = 0LL;
  v8 = a4 - 128;
  if ( *(_BYTE *)(a4 - 128 + 64) )
    return 3223060508LL;
  if ( *(_QWORD *)(v8 + 16) != a1 )
    return 3221225485LL;
  result = PspReferenceMonitorServerSilo();
  if ( (int)result >= 0 )
  {
    v10 = *(unsigned int *)(a1 + 104);
    ServerSiloGlobals = PsGetServerSiloGlobals(a2);
    v13 = ServerSiloGlobals;
    v14 = *(_QWORD *)(ServerSiloGlobals[8] + 8 * v10) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v14 )
    {
      if ( a3 )
      {
        *(_QWORD *)(ServerSiloGlobals[8] + 8 * v10) = v8 | *(_QWORD *)(ServerSiloGlobals[8] + 8 * v10) & 7LL;
        *(_BYTE *)(v8 + 64) = 1;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
        *(_BYTE *)(v14 + 64) = 0;
        if ( a5 )
        {
          v17 = v14 + 128;
          v14 = 0LL;
          *a5 = v17;
        }
        v16 = 0;
      }
      else
      {
        if ( a5 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 24));
          *a5 = v14 + 128;
        }
        v14 = 0LL;
        v16 = -1071906814;
      }
      if ( v14 )
        PspDereferenceMonitorContextServerSilo(v14);
    }
    else
    {
      v15 = ServerSiloGlobals[8];
      v14 = v8 | *(_QWORD *)(v15 + 8 * v10) & 7LL;
      *(_QWORD *)(v15 + 8 * v10) = v14;
      *(_QWORD *)(ServerSiloGlobals[8] + 8 * v10) |= 4uLL;
      *(_BYTE *)(v8 + 64) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
      v16 = 0;
    }
    PspDereferenceMonitorServerSilo(a1, v14, v12, v13);
    return v16;
  }
  return result;
}
