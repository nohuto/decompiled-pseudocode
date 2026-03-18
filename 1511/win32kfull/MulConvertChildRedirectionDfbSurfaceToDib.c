/*
 * XREFs of MulConvertChildRedirectionDfbSurfaceToDib @ 0x1C0299CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall MulConvertChildRedirectionDfbSurfaceToDib(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v8 = HmgShareLock(a1, a2);
  v3 = 1;
  v4 = *(_QWORD **)(v8 + 24);
  v5 = *v4;
  if ( *(_DWORD *)(*v4 + 16LL) )
  {
    while ( 1 )
    {
      v6 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v4[1] + 8 * v2));
      if ( (*(_DWORD *)(v6 + 116) & 1) != 0 && !pConvertDfbSurfaceToDibInternal(v6, 1LL) )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v5 + 16) )
        goto LABEL_7;
    }
    v3 = 0;
  }
LABEL_7:
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  return v3;
}
