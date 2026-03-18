/*
 * XREFs of MulConvertChildRedirectionDfbSurfaceToDib @ 0x1C0299470
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall MulConvertChildRedirectionDfbSurfaceToDib(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _QWORD *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v9);
  LOBYTE(v2) = 5;
  v10 = HmgShareLock(a1, v2);
  v3 = 0LL;
  v4 = 1;
  v5 = *(_QWORD **)(v10 + 24);
  v6 = *v5;
  if ( *(_DWORD *)(*v5 + 16LL) )
  {
    while ( 1 )
    {
      v7 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v5[1] + 8 * v3));
      if ( (*(_DWORD *)(v7 + 116) & 1) != 0 && !pConvertDfbSurfaceToDibInternal(v7, 1LL) )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v6 + 16) )
        goto LABEL_7;
    }
    v4 = 0;
  }
LABEL_7:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v9);
  return v4;
}
