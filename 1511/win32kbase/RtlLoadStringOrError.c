/*
 * XREFs of RtlLoadStringOrError @ 0x1C006CA70
 * Callers:
 *     CheckDesktopPolicy @ 0x1C006C1A0 (CheckDesktopPolicy.c)
 *     FastGetProfileIntsW @ 0x1C006C260 (FastGetProfileIntsW.c)
 *     FastGetProfileValue @ 0x1C006C300 (FastGetProfileValue.c)
 *     FastGetProfileIntFromID @ 0x1C006C7D0 (FastGetProfileIntFromID.c)
 *     FastGetProfileStringFromIDW @ 0x1C006C9D0 (FastGetProfileStringFromIDW.c)
 *     FastUpdateWinIni @ 0x1C00AAB70 (FastUpdateWinIni.c)
 *     FastWriteProfileValue @ 0x1C00AABE0 (FastWriteProfileValue.c)
 * Callees:
 *     memmove @ 0x1C0088D80 (memmove.c)
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
