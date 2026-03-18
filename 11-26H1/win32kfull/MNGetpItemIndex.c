/*
 * XREFs of MNGetpItemIndex @ 0x1401DADAC
 * Callers:
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNGetpItemIndex(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  v2 = a2 - *(_QWORD *)(a1 + 88);
  if ( (v2 & 0x8000000000000000uLL) != 0LL
    || v2 >= 96 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL) )
  {
    return 0xFFFFFFFFLL;
  }
  result = 0xFFFFFFFFLL;
  if ( v2 == 96 * (v2 / 0x60) )
    return (unsigned int)(v2 / 0x60);
  return result;
}
