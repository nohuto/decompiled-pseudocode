/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C004B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0047C44 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00763A0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, int *a2)
{
  int InputQueueTypes; // ebx
  int *v5; // rcx
  int *v6; // rcx
  unsigned int *v7; // rcx
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+70h] [rbp+18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  InputQueueTypes = 0;
  if ( !(unsigned int)UserIsCurrentProcessDwm() )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes >= 0 )
  {
    v5 = a2;
    if ( a2 >= W32UserProbeAddress )
      v5 = (int *)W32UserProbeAddress;
    v11 = *v5;
    if ( *v5 == 20 )
    {
      v7 = (unsigned int *)a2;
      if ( a2 >= W32UserProbeAddress )
        v7 = (unsigned int *)W32UserProbeAddress;
      v9 = *(_OWORD *)v7;
      v10 = v7[4];
    }
    else if ( *v5 == 24 )
    {
      v6 = a2;
      if ( a2 >= W32UserProbeAddress )
        v6 = (int *)W32UserProbeAddress;
      v9 = *(_OWORD *)v6;
      v10 = *((_QWORD *)v6 + 2);
    }
    else
    {
      InputQueueTypes = -1073741811;
    }
    if ( InputQueueTypes >= 0 )
    {
      InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
      if ( InputQueueTypes >= 0 )
      {
        InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                            (CompositionInputObject *)Object,
                            (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v9);
        ObfDereferenceObject(Object);
      }
      if ( InputQueueTypes >= 0 )
      {
        if ( v11 == 20 )
        {
          if ( a2 >= W32UserProbeAddress )
            a2 = (int *)W32UserProbeAddress;
          *(_OWORD *)a2 = v9;
          a2[4] = v10;
        }
        else if ( v11 == 24 )
        {
          if ( a2 >= W32UserProbeAddress )
            a2 = (int *)W32UserProbeAddress;
          *(_OWORD *)a2 = v9;
          *((_QWORD *)a2 + 2) = v10;
        }
      }
    }
  }
  return (unsigned int)InputQueueTypes;
}
