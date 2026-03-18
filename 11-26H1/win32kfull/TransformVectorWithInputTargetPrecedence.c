/*
 * XREFs of TransformVectorWithInputTargetPrecedence @ 0x14004C3E8
 * Callers:
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x14008A040 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x14008C000 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     EditionMouseCaptureHitTest @ 0x140243E70 (EditionMouseCaptureHitTest.c)
 * Callees:
 *     GetMonitorTransform @ 0x14004A26C (GetMonitorTransform.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     TransformVector @ 0x140225DD4 (TransformVector.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall TransformVectorWithInputTargetPrecedence(const struct tagWND *a1, int a2, int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  _BYTE v20[104]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v20, 0, 0x40uLL);
  v6 = 0;
  UserSessionState = W32GetUserSessionState(v8, v7);
  result = GetTopLevelWindow(*(_QWORD *)(UserSessionState + 16256));
  v11 = result;
  if ( result )
  {
    v12 = *((_QWORD *)a1 + 2);
    if ( result == GetTopLevelWindow(a1) )
    {
      v15 = *(_QWORD *)(v12 + 704);
      if ( v15 && *(_QWORD *)(v15 + 16) == v11 )
      {
        v16 = (unsigned __int64)v20 & -(__int64)((unsigned int)GetMonitorTransform(
                                                                 *(_QWORD *)(v15 + 216),
                                                                 a1,
                                                                 (__int64)v20) != 0);
        goto LABEL_6;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v12 + 464);
      if ( !v17 )
        return v6;
      v19 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 16256);
      if ( v17 != *(_QWORD *)(*(_QWORD *)(v19 + 16) + 464LL)
        || *(_QWORD *)(v17 + 112) != *(_QWORD *)(W32GetUserSessionState(v19, v18) + 16256) )
      {
        return v6;
      }
    }
    v16 = *(_QWORD *)(v11 + 216);
LABEL_6:
    v6 = 1;
    if ( v16 )
      TransformVector(v16, a2, a2 + 4, a3, 1);
    return v6;
  }
  return result;
}
