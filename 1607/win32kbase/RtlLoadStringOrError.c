/*
 * XREFs of RtlLoadStringOrError @ 0x1C0055EE0
 * Callers:
 *     CheckDesktopPolicy @ 0x1C0054FF0 (CheckDesktopPolicy.c)
 *     FastGetProfileIntsW @ 0x1C00551B0 (FastGetProfileIntsW.c)
 *     FastGetProfileValue @ 0x1C0055250 (FastGetProfileValue.c)
 *     FastGetProfileIntFromID @ 0x1C0055720 (FastGetProfileIntFromID.c)
 *     FastGetProfileStringFromIDW @ 0x1C0055870 (FastGetProfileStringFromIDW.c)
 *     FastUpdateWinIni @ 0x1C00B40B0 (FastUpdateWinIni.c)
 *     FastWriteProfileValue @ 0x1C00B4120 (FastWriteProfileValue.c)
 * Callees:
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall RtlLoadStringOrError(ULONG MessageId, void *a2, int a3, unsigned __int16 a4)
{
  int v5; // edi
  unsigned int v6; // ebx
  BYTE *Text; // rdx
  __int64 v8; // rbx
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v5 = a3 - 1;
  if ( !a3 )
    return 0LL;
  v6 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, a4, MessageId, &v10) >= 0 )
  {
    Text = v10->Text;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&Text[2 * v8] );
    v6 = v8 - 2;
    if ( (int)v6 > v5 )
      v6 = v5;
    memmove(a2, Text, 2LL * (int)v6);
  }
  result = v6;
  *((_WORD *)a2 + (int)v6) = 0;
  return result;
}
