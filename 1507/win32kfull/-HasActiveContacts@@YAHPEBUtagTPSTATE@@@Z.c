/*
 * XREFs of ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F184C
 * Callers:
 *     ?CheckTouchpadCachedInertia@@YAXPEAX@Z @ 0x1C01F10D4 (-CheckTouchpadCachedInertia@@YAXPEAX@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
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
    if ( (*((_BYTE *)a1 + 176 * v2 + 168) & 1) != 0 )
      result = 1LL;
    ++v2;
  }
  while ( !(_DWORD)result );
  return result;
}
