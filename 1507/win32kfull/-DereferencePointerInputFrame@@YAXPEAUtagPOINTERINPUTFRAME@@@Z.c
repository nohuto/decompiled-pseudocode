/*
 * XREFs of ?DereferencePointerInputFrame@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall DereferencePointerInputFrame(struct tagPOINTERINPUTFRAME *a1)
{
  struct tagPOINTERINPUTFRAME *v1; // r8
  const struct tagPOINTERINFONODE *v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rcx

  v1 = a1;
  if ( (*((_DWORD *)a1 + 14) & 1) != 0 )
  {
    v2 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a1 + 9);
    if ( *((_DWORD *)a1 + 6) )
    {
      do
      {
        if ( (unsigned int)IsPointerInfoNodeValid(v2) )
        {
          v5 = *((_QWORD *)v1 + 9) + 216LL * v3;
          *(_DWORD *)v5 |= 0x1000u;
          *(_QWORD *)(v5 + 16) = 0LL;
          ++*((_DWORD *)v1 + 7);
        }
        v2 = (const struct tagPOINTERINFONODE *)(v4 + 216);
      }
      while ( v3 + 1 < *((_DWORD *)v1 + 6) );
    }
  }
  UnreferenceFrameInt(v1);
}
