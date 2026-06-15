/*
 * XREFs of ?Initialize@CCrossProcessClientInputEndpoint@@UEAAJ_K00I@Z @ 0x14003BDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCrossProcessClientInputEndpoint::Initialize(
        struct _RTL_CRITICAL_SECTION *this,
        void *a2,
        void *a3,
        void *a4,
        unsigned int a5)
{
  return CCrossProcessBaseClientEndpoint::Initialize(this, a2, a3, a4, a5);
}
