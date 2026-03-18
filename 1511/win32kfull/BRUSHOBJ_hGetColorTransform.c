/*
 * XREFs of BRUSHOBJ_hGetColorTransform @ 0x1C02B6B50
 * Callers:
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02AA3B0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AF250 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

HANDLE __stdcall BRUSHOBJ_hGetColorTransform(BRUSHOBJ *pbo)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( pbo )
  {
    if ( (pbo[3].iSolidColor & 2) != 0 )
    {
      v1 = *(_QWORD *)&pbo[2].flColorType;
      if ( v1 )
      {
        v2 = HmgShareLockCheck(v1, 14);
        v5 = v2;
        if ( v2 )
        {
          v3 = *(void **)(v2 + 24);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
          return v3;
        }
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
      }
    }
  }
  return 0LL;
}
