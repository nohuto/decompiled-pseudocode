/*
 * XREFs of ?SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z @ 0x1C0230724
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z @ 0x1C022FBFC (-InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z.c)
 */

struct tagPOINTERQFRAME *__fastcall SetupNewQFrame(
        struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINTERQFRAME **a2,
        __int64 a3,
        int a4)
{
  unsigned int v4; // r11d
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // r10

  v4 = *((_DWORD *)a1 + 6);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    while ( *(_DWORD *)v6 != -1 )
    {
      v6 += 40LL;
      if ( ++v5 >= v4 )
        goto LABEL_4;
    }
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) &= 0xFFFFFFE7;
    *(_DWORD *)v6 = v5;
    *(_QWORD *)(v6 + 8) = a3;
    InitializeQFrameCoalesceState((struct tagPOINTERQFRAME *)v6, a4);
    return (struct tagPOINTERQFRAME *)v10;
  }
  else
  {
LABEL_4:
    v7 = (__int64)*a2;
    *a2 = 0LL;
    *(_QWORD *)(v7 + 8) = a3;
    InitializeQFrameCoalesceState((struct tagPOINTERQFRAME *)v7, a4);
    return (struct tagPOINTERQFRAME *)v8;
  }
}
