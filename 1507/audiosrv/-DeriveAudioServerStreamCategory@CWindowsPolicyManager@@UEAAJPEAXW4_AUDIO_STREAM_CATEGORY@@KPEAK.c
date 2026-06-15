/*
 * XREFs of ?DeriveAudioServerStreamCategory@CWindowsPolicyManager@@UEAAJPEAXW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x180021D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::DeriveAudioServerStreamCategory(
        CWindowsPolicyManager *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 result; // rax

  if ( a3 <= 0xB && a4 < 0x15 )
  {
    if ( !a3 )
    {
      a3 = a4;
LABEL_5:
      result = 0LL;
      *a5 = a3;
      return result;
    }
    if ( !a4 )
      goto LABEL_5;
  }
  return 2147942487LL;
}
