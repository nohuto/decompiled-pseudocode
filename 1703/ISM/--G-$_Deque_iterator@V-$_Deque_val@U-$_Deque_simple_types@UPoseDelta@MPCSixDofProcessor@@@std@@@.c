/*
 * XREFs of ??G?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180046434
 * Callers:
 *     ?UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800451F8 (-UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<MPCSixDofProcessor::PoseDelta>>>::operator-(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD **v2; // rax
  _QWORD ***v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v2 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v3 = **(_QWORD *****)a1;
    if ( v3 )
      v2 = *v3;
  }
  v4 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  v5 = v4 - 1;
  a2[1] = 0LL;
  if ( v2 )
  {
    v6 = *v2;
    if ( v6 )
      *a2 = *v6;
  }
  a2[2] = v5;
  return a2;
}
