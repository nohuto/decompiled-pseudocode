/*
 * XREFs of ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400155EC
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039F40 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14003C85C (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

signed int __fastcall AERTLockMemory(void *lpAddress, SIZE_T a2)
{
  signed int result; // eax

  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = IncreaseProcessWorkingSet(a2);
  if ( result >= 0 )
  {
    if ( VirtualLock(lpAddress, a2) )
      return 0;
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
