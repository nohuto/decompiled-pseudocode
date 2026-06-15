/*
 * XREFs of ?GetActiveRenderStreamCount@CSystemAudioDeviceShared@@UEAAJPEAI@Z @ 0x14002C850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::GetActiveRenderStreamCount(
        CSystemAudioDeviceShared *this,
        unsigned int *a2)
{
  int v2; // ebx

  v2 = 0;
  if ( a2 )
    *a2 = *((_DWORD *)this + 95);
  else
    v2 = -2147024809;
  if ( !*((_DWORD *)this + 95) && *((_DWORD *)this + 97) )
    *a2 = 0xFFFF;
  if ( v2 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x2Du,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v2,
      (__int64)"CSystemAudioDeviceShared::GetActiveRenderStreamCount(/*[out]*/ UINT32* pu32Count)");
  }
  return (unsigned int)v2;
}
