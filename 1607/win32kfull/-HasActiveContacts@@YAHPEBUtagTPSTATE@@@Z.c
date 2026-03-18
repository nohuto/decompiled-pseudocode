/*
 * XREFs of ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E7E60
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasActiveContacts(const struct tagTPSTATE *a1)
{
  __int64 result; // rax
  unsigned int v2; // r9d

  result = 0LL;
  v2 = 0;
  do
  {
    if ( v2 >= 6 )
      break;
    if ( (*((_BYTE *)a1 + 272 * v2 + 264) & 1) != 0 )
      result = 1LL;
    ++v2;
  }
  while ( !(_DWORD)result );
  return result;
}
