/*
 * XREFs of ?SetCallbackId@CApplicationChannel@DirectComposition@@QEAAJ_NII@Z @ 0x1C003DE84
 * Callers:
 *     NtDCompositionSetChannelCallbackId @ 0x1C007D1F0 (NtDCompositionSetChannelCallbackId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCallbackId(
        DirectComposition::CApplicationChannel *this,
        char a2,
        int a3,
        int a4)
{
  __int64 result; // rax
  char *v5; // r10
  char *v6; // r11

  result = 0LL;
  if ( a2 )
  {
    v5 = (char *)this + 684;
    v6 = (char *)this + 688;
  }
  else
  {
    v5 = (char *)this + 676;
    v6 = (char *)this + 680;
  }
  if ( a3 )
  {
    if ( !*(_DWORD *)v5 && a4 )
      goto LABEL_6;
    return 3221225506LL;
  }
  if ( a4 )
    return 3221225506LL;
LABEL_6:
  *(_DWORD *)v5 = a3;
  *(_DWORD *)v6 = a4;
  if ( a2 )
    *((_BYTE *)this + 248) |= 0x40u;
  else
    *((_BYTE *)this + 248) |= 0x20u;
  return result;
}
