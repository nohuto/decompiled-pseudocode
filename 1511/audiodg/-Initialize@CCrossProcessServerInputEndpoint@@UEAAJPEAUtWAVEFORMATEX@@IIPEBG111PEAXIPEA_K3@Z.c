/*
 * XREFs of ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x1400142A0
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A810 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 */

__int64 __fastcall CCrossProcessServerInputEndpoint::Initialize(
        CCrossProcessServerInputEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        const unsigned __int16 *a7,
        const unsigned __int16 *a8,
        void *a9,
        unsigned int a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12)
{
  return CCrossProcessBaseServerEndpoint::Initialize(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
