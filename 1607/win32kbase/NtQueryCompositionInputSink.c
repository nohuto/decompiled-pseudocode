/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C00491A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00485F0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0048994 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, ULONGLONG a2)
{
  __int64 v4; // r8
  int InputQueueTypes; // ebx
  int *v6; // rcx
  ULONGLONG v7; // rcx
  ULONGLONG v8; // rcx
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+70h] [rbp+18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  InputQueueTypes = 0;
  if ( !(unsigned int)UserIsCurrentProcessDwm() )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes >= 0 )
  {
    v6 = (int *)a2;
    if ( a2 >= W32UserProbeAddress )
      v6 = (int *)W32UserProbeAddress;
    v12 = *v6;
    if ( *v6 == 20 )
    {
      v8 = a2;
      if ( a2 >= W32UserProbeAddress )
        v8 = W32UserProbeAddress;
      v10 = *(_OWORD *)v8;
      v11 = *(unsigned int *)(v8 + 16);
    }
    else if ( *v6 == 24 )
    {
      v7 = a2;
      if ( a2 >= W32UserProbeAddress )
        v7 = W32UserProbeAddress;
      v10 = *(_OWORD *)v7;
      v11 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      InputQueueTypes = -1073741811;
    }
    if ( InputQueueTypes >= 0 )
    {
      LOBYTE(v4) = 1;
      InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1LL, v4, (struct CompositionInputObject **)&Object);
      if ( InputQueueTypes >= 0 )
      {
        InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                            (CompositionInputObject *)Object,
                            (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v10);
        ObfDereferenceObject(Object);
      }
      if ( InputQueueTypes >= 0 )
      {
        if ( v12 == 20 )
        {
          if ( a2 >= W32UserProbeAddress )
            a2 = W32UserProbeAddress;
          *(_OWORD *)a2 = v10;
          *(_DWORD *)(a2 + 16) = v11;
        }
        else if ( v12 == 24 )
        {
          if ( a2 >= W32UserProbeAddress )
            a2 = W32UserProbeAddress;
          *(_OWORD *)a2 = v10;
          *(_QWORD *)(a2 + 16) = v11;
        }
      }
    }
  }
  return (unsigned int)InputQueueTypes;
}
