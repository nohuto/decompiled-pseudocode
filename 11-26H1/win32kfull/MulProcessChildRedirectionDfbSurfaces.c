/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces @ 0x140329530
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x14020A28C (-vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces(HSURF a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v10);
  v11 = 0LL;
  SURFREF::vLockAll((SURFREF *)v10, a1);
  v2 = 1;
  v3 = 0LL;
  v4 = *(__int64 **)(v11 + 24);
  v5 = *v4;
  while ( (unsigned int)v3 < *(_DWORD *)(v5 + 16) )
  {
    v6 = *(_QWORD *)(v4[1] + 8 * v3);
    v7 = *(_DWORD *)(v6 + 92);
    v8 = v6 - 24;
    if ( (v7 & 1) != 0 && !pProcessDfbSurfacesInternal(v8, 1LL) )
    {
      v2 = 0;
      break;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v10);
  return v2;
}
