/*
 * XREFs of ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0021CD0
 * Callers:
 *     NtDuplicateCompositionInputSink @ 0x1C0003130 (NtDuplicateCompositionInputSink.c)
 *     ?OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJPEAPEAX@Z @ 0x1C0023E88 (-OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::CreateHandle(
        CompositionObject *this,
        ACCESS_MASK a2,
        char a3,
        KPROCESSOR_MODE AccessMode,
        void **Handle)
{
  ULONG v6; // edx

  v6 = 64;
  *Handle = (void *)-1LL;
  if ( a3 )
    v6 = 66;
  return ObOpenObjectByPointer(this, v6, 0LL, a2, ExCompositionObjectType, AccessMode, Handle);
}
