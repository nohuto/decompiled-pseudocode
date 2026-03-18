/*
 * XREFs of _anonymous_namespace_::SwitchMouseCursors @ 0x140255F04
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401B8710 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     ?ForceHidePenCursor@@YAXH@Z @ 0x14026B58C (-ForceHidePenCursor@@YAXH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::SwitchMouseCursors(int a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = (unsigned __int8)a2;
  v3 = (unsigned int)(a1 - 2);
  if ( (_DWORD)v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
      {
        result = W32GetUserSessionState(v4, a2);
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(result + 36344) + 100LL), 1u);
      }
      else
      {
        return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 457LL);
      }
    }
    else
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v4, a2) + 36344);
      _InterlockedAnd((volatile signed __int32 *)(v6 + 100), 0xFFFFF8FF);
      result = W32GetUserSessionState(v6, v7);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(result + 36344) + 100LL), 0x100u);
    }
  }
  else
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v3, a2) + 36344);
    _InterlockedAnd((volatile signed __int32 *)(v8 + 100), 0xFFFFF8FF);
    result = W32GetUserSessionState(v8, v9);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(result + 36344) + 100LL), (v2 + 1) << 9);
  }
  return result;
}
