/*
 * XREFs of RIMFindAndRemoveHoldingFrame @ 0x1C0078018
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C0072C84 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMFreeSpecificDev @ 0x1C00760D0 (RIMFreeSpecificDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMFindHoldingFrame @ 0x1C007806C (RIMFindHoldingFrame.c)
 *     RIMReclaimHoldingFrame @ 0x1C00C88A8 (RIMReclaimHoldingFrame.c)
 */

__int64 __fastcall RIMFindAndRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v4 = 1;
  do
  {
    result = RIMFindHoldingFrame(a1, a2);
    v8 = (_QWORD *)result;
    if ( result )
    {
      RIMReclaimHoldingFrame(v7, v6, result);
      v9 = *v8;
      v10 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      result = Win32FreePool();
    }
    else
    {
      v4 = 0;
    }
  }
  while ( v4 );
  return result;
}
