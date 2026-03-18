/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E9700
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E66C4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= 0xFC00043F;
  v1 = 0;
  *((_DWORD *)this + 71) = 0;
  *((_BYTE *)this + 324) = 1;
  if ( (unsigned __int8)DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((_DWORD *)this + 70)
    || *((_DWORD *)this + 74)
    || *((_QWORD *)this + 23)
    || *((_QWORD *)this + 24)
    || *((_QWORD *)this + 25)
    || *((_QWORD *)this + 26)
    || *((_QWORD *)this + 27) )
  {
    return 1;
  }
  return v1;
}
