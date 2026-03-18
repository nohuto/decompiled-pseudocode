/*
 * XREFs of ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C0009F78
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0089BAC (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall SearchHidPageOnlyRequest(__int16 a1)
{
  int v2; // r8d
  struct tagHID_PAGEONLY_REQUEST *result; // rax
  struct tagHID_PAGEONLY_REQUEST *v4; // rcx

  v2 = aDeviceTemplate[308];
  result = qword_1C03274D8;
  if ( !v2 )
    goto LABEL_8;
  for ( result = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
        ;
        result = *(struct tagHID_PAGEONLY_REQUEST **)result )
  {
    if ( v2 )
      v4 = (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2];
    else
LABEL_8:
      v4 = (struct tagHID_PAGEONLY_REQUEST *)&qword_1C03274D8;
    if ( result == v4 )
      break;
    if ( *((_WORD *)result + 8) == a1 )
      return result;
  }
  return 0LL;
}
