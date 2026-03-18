/*
 * XREFs of ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0004F34
 * Callers:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJ *__fastcall RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(
        RGNMEMOBJ *a1,
        struct EPATHOBJ *a2,
        int a3,
        unsigned int a4,
        struct _RECTL *a5)
{
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  RGNMEMOBJ::RGNMEMOBJ(a1, 0, 0);
  *((_DWORD *)a1 + 4) = 0;
  if ( !a3 )
    *(_QWORD *)a1 = *((_QWORD *)a2 + 5);
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)a2 & 0x10) != 0 )
    {
      if ( a4 == 2 )
        v9 = *((_QWORD *)a2 + 4);
      else
        v9 = *((_QWORD *)a2 + 3);
    }
    else
    {
      v9 = *((_QWORD *)a2 + 2);
    }
    *(_QWORD *)a1 = v9;
  }
  if ( !*(_QWORD *)a1 )
  {
    v11 = 0LL;
    v12 = 0;
    *((_DWORD *)a1 + 4) = 1;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v11, a2, a4, a5);
    *(_QWORD *)a1 = v11;
    RGNMEMOBJ::vPushThreadGuardedObject(a1);
    if ( v12 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
  }
  return a1;
}
