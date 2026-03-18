/*
 * XREFs of FindObjSymbol @ 0x1C0043BF8
 * Callers:
 *     DebugExpr @ 0x1C00433B8 (DebugExpr.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C00056C0 (ReferenceObjectEx.c)
 */

char __fastcall FindObjSymbol(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  char v4; // di
  KIRQL v7; // al
  _QWORD *v8; // r9
  KIRQL v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r9

  v4 = 0;
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = qword_1C005A150;
  v9 = v7;
  while ( v8 )
  {
    if ( a1 <= v8[2] )
    {
      if ( a1 < v8[2] && *v8 )
        v8 = (_QWORD *)*v8;
      if ( a1 >= v8[2] )
      {
        v10 = v8[3];
        *a2 = v10;
        ReferenceObjectEx(v10);
        v4 = 1;
        *a3 = a1 - *(_DWORD *)(v11 + 16);
      }
      break;
    }
    v8 = (_QWORD *)v8[1];
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  return v4;
}
