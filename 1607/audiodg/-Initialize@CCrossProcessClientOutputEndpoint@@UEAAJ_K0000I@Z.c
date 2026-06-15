/*
 * XREFs of ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z @ 0x14003A1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCrossProcessClientOutputEndpoint::Initialize(
        struct _RTL_CRITICAL_SECTION *this,
        void *a2,
        void *a3,
        __int64 a4,
        void *a5,
        ULONG_PTR a6,
        unsigned int a7)
{
  return CCrossProcessBaseClientEndpoint::Initialize(this, a2, a3, a4, a5, a6, a7);
}
