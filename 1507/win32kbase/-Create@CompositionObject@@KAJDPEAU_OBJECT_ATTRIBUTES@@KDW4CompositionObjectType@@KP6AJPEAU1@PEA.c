/*
 * XREFs of ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C000FC10
 * Callers:
 *     NtCreateCompositionSurfaceHandle @ 0x1C0012820 (NtCreateCompositionSurfaceHandle.c)
 *     CreateSharedSystemVisualObject @ 0x1C00156E0 (CreateSharedSystemVisualObject.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0024B14 (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C00290D0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E658 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::Create(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 (__fastcall *a7)(_QWORD, __int64, __int64),
        __int64 a8,
        void **Handle)
{
  NTSTATUS Object; // ebx

  if ( (unsigned int)(a5 - 1) > 3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Object = ObCreateObject(a1, ExCompositionObjectType, a2);
    if ( Object >= 0 )
    {
      MEMORY[0] = gSessionId;
      Object = ZwAllocateLocallyUniqueId((PLUID)0x10);
      if ( Object < 0 || (Object = a7(0LL, a8, 8LL), Object < 0) )
        ObfDereferenceObject(0LL);
      else
        return (unsigned int)ObInsertObject(0LL, 0LL, a3, 0, 0LL, Handle);
    }
  }
  return (unsigned int)Object;
}
