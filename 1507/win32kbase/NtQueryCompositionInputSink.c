/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C001DA60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0013050 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY@@@Z @ 0x1C0020788 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY@@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  int InputQueueTypes; // ebx
  __m128i *v6; // rdx
  __m128i v8; // [rsp+28h] [rbp-50h] BYREF
  __int32 v9; // [rsp+38h] [rbp-40h]
  __m128i v10; // [rsp+40h] [rbp-38h]
  __int32 v11; // [rsp+50h] [rbp-28h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  InputQueueTypes = 0;
  if ( !UserIsCurrentProcessDwm() )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes >= 0 )
  {
    v6 = (__m128i *)a2;
    if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
      v6 = (__m128i *)MmUserProbeAddress;
    v10 = *v6;
    v11 = v6[1].m128i_i32[0];
    v8 = v10;
    v9 = v11;
    if ( _mm_cvtsi128_si32(v10) != 20 )
      InputQueueTypes = -1073741811;
    if ( InputQueueTypes >= 0 )
    {
      LOBYTE(v4) = 1;
      InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1LL, v4, (struct CompositionInputObject **)&Object);
      if ( InputQueueTypes >= 0 )
      {
        InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                            (CompositionInputObject *)Object,
                            (struct COMPOSITION_INPUT_SINK_QUERY *)&v8);
        ObfDereferenceObject(Object);
      }
      if ( InputQueueTypes >= 0 )
      {
        if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(__m128i *)a2 = v8;
        *(_DWORD *)(a2 + 16) = v9;
      }
    }
  }
  return (unsigned int)InputQueueTypes;
}
